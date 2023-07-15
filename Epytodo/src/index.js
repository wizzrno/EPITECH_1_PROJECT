const { query } = require('express');
const express = require('express');
const app = express();
const port = 3000;
const mysql = require('mysql2');
const bodyParser = require('body-parser');
//const Connection = require('mysql2/typings/mysql/lib/Connection');

const pool = mysql.createPool({
  host: 'localhost',
  user: 'root',
  password: 'root',
  database: 'epytodo',
}).promise()

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));

async function registration(email, name, firstname, password) {
  if (!email || !name || !firstname || !password) {
    console.error('Variables cannot be empty\n');
  }
  const [rows] = await pool.query(`
  INSERT INTO user (email, name, firstname, password)
  VALUES (?, ?, ?, ?)
  `, [email, name, firstname, password])
  return rows;
}

app.post('/register', async(req, res) => {
  const { email, name, firstname, password } = req.body;
  const register = await registration(email, name, firstname, password);
  res.status(201).send(register);
});

async function login(email, password) {
  const [rows] = await pool.query(`
  SELECT
  email, password
  FROM user
  WHERE email = ? AND password = ?
  `, [email, password])
  return rows
}

app.post('/login', (req, res) => {
  const { email, password } = req.body;
  const log_in = login(email,password);
  res.status(201).send(log_in);
});

async function userInfo() {
  const [rows] = await pool.query(`
  SELECT *
  FROM user
  `)
  return rows
}

app.get('/user', async(req, res) => {
  const userINF = await userInfo();
  res.status(201).send(userINF);
});

async function userTodos() {
  const [rows] = await pool.query(`
  SELECT
  todo.id, todo.title, todo.description, todo.created_at, todo.due_time, todo.user_id, todo.status
  FROM user
  INNER JOIN todo ON user.id = todo.user_id
  ORDER BY user.id, todo.id;
  `)
  return rows
}

app.get('/user/todos', async(req, res) => {
  const userTodo = await userTodos();
  res.status(201).send(userTodo);
});

async function getId(id) {
  const [rows] = await pool.query(`
  SELECT *
  FROM user
  WHERE id = ?
  `, [id])
  return rows[0]
}

app.get('/users/:id', async(req, res) => {
  const id = req.params.id;
  const userID = await getId(id);
  res.status(201).send(userID);
});

async function getMail(email) {
  const [rows] = await pool.query(`
  SELECT *
  FROM user
  WHERE email = ?
  `, [email])
  return rows[0]
}

app.get('/users/:email', async(req, res) => {
  const email = req.params.email;
  console.log(email);
  const userMail = await getMail(email);
  res.status(201).send(userMail);
});

async function modUID(id, email, password, firstname, name) {
  const [rows] = await pool.query(`
  UPDATE user
  SET
  user.email = ?, user.password = ?, user.firstname = ?, user.name = ?
  WHERE id = ?
  `, [email, password, firstname, name, id])
  return getId(id)
}

app.put('/users/:id', async(req, res) => {
  const id = req.params.id;
  const {email, password, firstname, name} = req.body;
  const UID = await modUID(id, email, password, firstname, name);
  res.status(201).send(UID);
});

async function delUser(id) {
  const [rows] = await pool.query(`
  DELETE
  FROM user
  WHERE id = ?
  `, [id])
  return
}

app.delete('/users/:id', (req, res) => {
  const id = req.params.id;
  const user = delUser(id);
  res.status(201).send(`"msg" : "Successfully deleted record number : ${id}"`);
});

async function getTodos() {
  const [rows] = await pool.query(`
  SELECT *
  FROM todo
  `)
  return rows
}

app.get('/todos', async(req, res) => {
  const todos = await getTodos();
  res.status(201).send(todos);
});

async function todosID(id) {
  const [rows] = await pool.query(`
  SELECT *
  FROM todo
  WHERE id = ?
  `, [id])
  return rows[0]
}

app.get('/todos/:id', async(req, res) => {
  const id = req.params.id;
  const todoID = await todosID(id);
  res.status(201).send(todoID);
});

async function addtodo(title, description, due_time, user_id, status) {
  const [rows] = await pool.query(`
  INSERT INTO todo (title, description, due_time, user_id, status)
  VALUES (?, ?, ?, ?, ?)
  `, [title, description, due_time,user_id, status])
  const id = rows.insertId;
  return todosID(id)
}

app.post('/todos', async(req, res) => {
  const { title, description, due_time, user_id, status} = req.body;
  const todo = await addtodo(title, description, due_time, user_id, status);
  res.status(201).send(todo);
});

async function showmodTID(id) {
  const [rows] = await pool.query(`
  SELECT title, description, due_time, user_id, status
  FROM todo
  WHERE id = ?
  `, [id])
  return rows[0]
}

async function modTID(id, title, description, due_time, user_id, status) {
  const [rows] = await pool.query(`
  UPDATE todo
  SET
  todo.title = ?, todo.description = ?, todo.due_time = ?, todo.user_id = ?, todo.status = ?
  WHERE id = ?
  `, [title, description, due_time, user_id, status, id])
  return showmodTID(id)
}

app.put('/todos/:id', async (req, res) => {
  const id = req.params.id;
  const { title, description, due_time, user_id, status } = req.body;
  const TID = await modTID(id, title, description, due_time, user_id, status);
  res.status(201).send(TID);
});

async function delTodo(id) {
  const [rows] = await pool.query(`
  DELETE
  FROM todo
  WHERE id = ?
  `, [id])
  return
}

app.delete('/todos/:id', async(req, res) => {
  const id = req.params.id;
  const todo = await delTodo(id);
  res.status(201).send(`"msg" : "Sucessfully deleted record number ${id}"`);
});


app.listen(port, () => {
  console.log(`Example app listening at http://localhost:${port}`);
});
