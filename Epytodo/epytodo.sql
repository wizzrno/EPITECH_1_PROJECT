DROP DATABASE IF EXISTS epytodo;
CREATE DATABASE epytodo;
USE epytodo;

CREATE TABLE user (
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    email VARCHAR(255) NOT NULL UNIQUE,
    password VARCHAR(255) NOT NULL,
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP,
    firstname VARCHAR(255) NOT NULL,
    name VARCHAR(255) NOT NULL
);

CREATE TABLE todo (
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    title VARCHAR(255) NOT NULL,
    description VARCHAR(255) NOT NULL,
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP,
    due_time DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
    user_id INT,
    status ENUM('not started', 'todo', 'in progress', 'done') DEFAULT 'not started',
    FOREIGN KEY (user_id) REFERENCES user(id)
);

INSERT INTO user (email, password, name, firstname)
VALUES
('rrrr@hotmail.fr', 'caca', 'Test', 'Pourr'),
('ejeyd@example.fr', 'test', 'John', 'Doe');

INSERT INTO todo (title, description, user_id)
VALUES
('Test todo', 'Test todo description', 1),
('Test todo 2', 'Test todo 2 description', 2),
('Test todo 3', 'Test todo 3 description', 1);

