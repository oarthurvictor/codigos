create database cadastro
default character set utf8
default collate utf8_general_ci;

create table pessoas(
	id int not null auto_increment,
	nome varchar(30) not null,
    nascimento date,
    sexo enum('M','F'),
    peso decimal(5,2),
    altura decimal(3,2),
    nacionalidade varchar(20) default 'Brasil',
    primary key (id)
) default charset = utf8;

insert into pessoas 
(id, nome, nascimento, sexo, peso, altura, nacionalidade)
values 
(default, 'Creuza','1920-12-30','F', '50.2', '1.65', default);

insert into pessoas values
(default, 'Cláudio','1975-12-30','M', '66.2', '1.78', default),
(default, 'Pedro','1980-11-20','M', '80', '1.90', default),
(default, 'Janaina','1945-08-26','F', '62.3', '1.68', 'França');

desc gafanhotos;

alter table pessoas
rename to gafanhotos;

alter table pessoas
add column profissao varchar(10);

alter table pessoas
modify column profissao varchar(25) not null default '';

alter table pessoas
change column profissao prof varchar(20);

alter table pessoas
drop column profissao;

alter table pessoas
add column profissao varchar(10) after nome;

alter table pessoas
add codigo int first;

create table if not exists cursos(
	nome varchar(30) not null unique,
    descricao text,
    carga int unsigned,
    totaulas int unsigned,
    ano year default '2018'
)default charset = utf8;

select * from pessoas;

alter table cursos
add column idcursos int first;

alter table cursos
add primary key (idcurso);

create table if not exists teste (
	id int,
    nome varchar(30),
    idade int
);

insert into teste values
('1','Pedro','20'),
('2','Paulo','5'),
('3','Maricota','55');

select * from teste;

drop table if exists teste;

desc cursos;

INSERT INTO cursos VALUES
 ('1','HTML4','Curso de HTML5', '40','37','2014'),
 ('2','Algoritmos','Lógica de Programação','20','15','2014'),
 ('3','Photoshop','Dicas de Photoshop CC','10','8','2014'),
 ('4','PGP','Curso de PHP para iniciantes','40','20','2010'),
 ('5','Jarva','Introdução à Linguagem Java','10','29','2000'),
 ('6','MySQL','Banco de Dados MySQL','30','15','2016'),
 ('7','Word','Curso completo de Word','40','30','2016'),
 ('8','Sapateado','Danças Rítmicas','40','30','2018'),
 ('9','Cozinha Árabe','Aprenda a fazer Kibe','40','30','2018'),
 ('10','Youtuber','Gerar polêmica e ganhar inscritos','5','2','2018');

select * from cursos;

update cursos
set nome = 'HTML5'
where idcurso = '1';

update cursos
set nome = 'PHP', ano = '2015'
where idcurso = '4';

update cursos
set nome = 'Java', carga = '40', ano = '2015'
where idcurso = '5'
limit 1;

update cursos
set carga = '40'
where idcurso = '8';

delete from cursos
where ano = '2018'
limit 3;

truncate cursos;