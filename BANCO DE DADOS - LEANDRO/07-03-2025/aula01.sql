CREATE DATABASE banco_acesso;

USE banco_acesso;

SHOW TABLES;

INSERT INTO usuarios
VALUES
(1, "joao.silva007", "joaodasilva@gmail.com", "12345678"),
(2, "ana.desouza", "anadesouza@yahoo.com", "minhasenha"),
(3, "carlos.user", "carlospaulo@gmail.com", "a1b2c3d4");

SELECT * FROM usuarios;
SELECT user, senha FROM usuarios;
SELECT * FROM usuarios WHERE user LIKE "%O%";
SELECT * FROM usuarios WHERE user LIKE "j%";

SELECT * FROM usuarios ORDER BY id DESC;
SELECT * FROM usuarios ORDER BY id ASC;

INSERT INTO usuarios
VALUES
(default, "bergamota222", "fdsuyfuydsfuvyds@gmail.com", sha("1234dsadsadd5678"));
DESC usuarios;
DESCRIBE usuarios;

INSERT INTO usuarios
VALUES
(default, "michael.jackson", "mjusa@gmail.com", sha("12345678"));

