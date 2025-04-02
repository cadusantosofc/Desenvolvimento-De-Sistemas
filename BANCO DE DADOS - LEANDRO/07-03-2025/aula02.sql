CREATE DATABASE banco_etec;
USE banco_etec;

SHOW TABLES;

INSERT INTO professores
VALUES
(default, "James Willian"),
(default, "Nádia Sakae"),
(default, "Cleber");

INSERT INTO cursos
VALUES
(default, "Desenvolvimento de Sistemas"),
(default, "Contabilidade");

INSERT INTO alunos
VALUES
(default, "Ana", 1),
(default, "João", 1);

SELECT * FROM professores;
SELECT * FROM cursos;
SELECT * FROM alunos;
