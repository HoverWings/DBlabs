#2.2
#1)增删改
INSERT INTO film (FID,FNAME)
VALUES (8,'测试电影');

UPDATE film
SET FNAME='修改电影名字'
WHERE FID=8;

DELETE FROM film
WHERE FID=8;

#2) MySQL 数据库不支持 SELECT ... INTO 语句
CREATE TABLE YOUNG_ACTOR
SELECT * FROM actor
WHERE BYEAR > 1989 AND BYEAR < 2000

#3) 数据导入导出，用自带的吧…
SELECT * FROM YOUNG_ACTOR INTO OUTFILE  'test.txt';

#4) 观察实验
CREATE TABLE test(
	a INT,
	b INT
);
INSERT INTO test (a,b) VALUES (1,1);
INSERT INTO test (a,b) VALUES (1,1);
UPDATE test SET a=2 WHERE a=1;
#均发生了修改，图形化管理工具则会进行提醒
SELECT * FROM test;
DROP TABLE test;

#5) 创建视图
CREATE VIEW view_test AS
SELECT actin.ACTID, actor.ANAME, actin.ISLEADING, actin.GRADE
FROM actin
INNER JOIN actor
ON actin.ACTID=actor.ACTID
WHERE actor.BYEAR>1979 AND actor.BYEAR<1990;
SELECT * FROM view_test;
DROP VIEW view_test;

#6) 触发器
