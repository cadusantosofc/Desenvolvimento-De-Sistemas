create database corrida_db;

use corrida_db;

show tables;

insert into patentes
values
(default, 'Principal'),
(default, 'Secundário'),
(default, 'Reserva');

select * from patentes;

insert into pilotos
values
(default, 'Lewis', 'Hamilton', 80, 1.75, 1),
(default, 'Lando', 'Norris', 75, 1.80, 1),
(default, 'Clales', 'Leclec', 82, 1.82, 1);

select * from pilotos;