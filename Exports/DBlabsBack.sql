-- MySQL dump 10.16  Distrib 10.1.33-MariaDB, for Linux (x86_64)
--
-- Host: localhost    Database: DBlabs
-- ------------------------------------------------------
-- Server version	10.1.33-MariaDB

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Current Database: `DBlabs`
--

CREATE DATABASE /*!32312 IF NOT EXISTS*/ `DBlabs` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci */;

USE `DBlabs`;

--
-- Temporary table structure for view `80S`
--

DROP TABLE IF EXISTS `80S`;
/*!50001 DROP VIEW IF EXISTS `80S`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `80S` (
  `ACTID` tinyint NOT NULL,
  `ISLEADING` tinyint NOT NULL,
  `FID` tinyint NOT NULL,
  `LEADING NUM` tinyint NOT NULL,
  `MAXGRADE` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `ACTIN`
--

DROP TABLE IF EXISTS `ACTIN`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ACTIN` (
  `ACTID` int(11) NOT NULL,
  `FID` int(11) DEFAULT NULL,
  `ISLEADING` char(1) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `GRADE` int(11) DEFAULT NULL,
  KEY `FID` (`FID`),
  KEY `ACTID` (`ACTID`),
  CONSTRAINT `ACTIN_ibfk_2` FOREIGN KEY (`FID`) REFERENCES `FILM` (`FID`),
  CONSTRAINT `ACTIN_ibfk_3` FOREIGN KEY (`ACTID`) REFERENCES `ACTOR` (`ACTID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ACTIN`
--

LOCK TABLES `ACTIN` WRITE;
/*!40000 ALTER TABLE `ACTIN` DISABLE KEYS */;
INSERT INTO `ACTIN` VALUES (1,4,'Y',90),(2,4,'N',90),(3,4,'Y',90),(4,4,'Y',90),(5,5,'Y',96),(6,5,'Y',97),(7,5,'Y',98),(8,5,'Y',96),(1,1,'N',86),(1,2,'Y',70),(1,3,'Y',75),(1,7,'Y',80),(4,7,'N',70),(3,9,'Y',65),(10,10,'Y',90),(11,10,'Y',90),(11,11,'Y',91),(13,4,'Y',90),(14,4,'Y',90),(14,5,'Y',90);
/*!40000 ALTER TABLE `ACTIN` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ACTOR`
--

DROP TABLE IF EXISTS `ACTOR`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `ACTOR` (
  `ACTID` int(11) NOT NULL,
  `ANAME` char(30) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `SEX` char(2) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `BYEAR` int(11) DEFAULT NULL,
  PRIMARY KEY (`ACTID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ACTOR`
--

LOCK TABLES `ACTOR` WRITE;
/*!40000 ALTER TABLE `ACTOR` DISABLE KEYS */;
INSERT INTO `ACTOR` VALUES (1,'Petter','M',1999),(2,'Bob','M',1980),(3,'Angla','F',1970),(4,'Perch','M',2005),(5,'孙维正','M',1996),(6,'徐光磊','M',1998),(7,'倪鸿','M',1997),(8,'沁苑翔','M',1999),(9,'梦桐','F',1997),(10,'张国荣','M',1956),(11,'周润发','M',1955),(12,'不演戏','F',2018),(13,'八零后1','M',1981),(14,'八零后2','F',1980);
/*!40000 ALTER TABLE `ACTOR` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary table structure for view `DandA`
--

DROP TABLE IF EXISTS `DandA`;
/*!50001 DROP VIEW IF EXISTS `DandA`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `DandA` (
  `DNAME` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `FILM`
--

DROP TABLE IF EXISTS `FILM`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `FILM` (
  `FID` int(11) NOT NULL,
  `FNAME` char(30) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `FTYPE` char(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `DNAME` char(30) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `length` int(11) DEFAULT NULL,
  `IS3D` char(1) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `GRADE` int(11) DEFAULT NULL,
  PRIMARY KEY (`FID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `FILM`
--

LOCK TABLES `FILM` WRITE;
/*!40000 ALTER TABLE `FILM` DISABLE KEYS */;
INSERT INTO `FILM` VALUES (1,'film1','Action','Amazon',120,'Y',90),(2,'film2','Love','Gray',119,'N',91),(3,'film3','Suspence','Hover',121,'Y',92),(4,'film4','Adventure','NH3',122,'N',93),(5,'战狼','War','吴京',90,'Y',93),(6,'战狼2','War','吴京',90,'Y',94),(7,'film7','Fantasy','director1',120,'Y',70),(8,'film8','Documentar','director2',120,'Y',100),(9,'film9','Music','NH3',70,'N',75),(10,'英雄本色','Action','吴宇森',90,'N',95),(11,'喋血双雄','Action','吴宇森',90,'N',94),(12,'小众电影','Minor','沁苑翔',30,'N',NULL),(13,'喜剧之王','Comdedy','周星驰',NULL,NULL,NULL),(14,'film14','Police','Amazon',NULL,NULL,NULL),(15,'film15','Shooting','Gray',NULL,NULL,NULL);
/*!40000 ALTER TABLE `FILM` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`hover`@`localhost`*/ /*!50003 trigger StephenChowComedy
before insert on `FILM` 
for each row
begin
update `FORTEST` SET new.`FTYPE`='Comdedy' where new.`DNAME`='周星驰';
end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `FORTEST`
--

DROP TABLE IF EXISTS `FORTEST`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `FORTEST` (
  `ID` int(11) NOT NULL,
  `DATA` varchar(45) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `FORTEST`
--

LOCK TABLES `FORTEST` WRITE;
/*!40000 ALTER TABLE `FORTEST` DISABLE KEYS */;
INSERT INTO `FORTEST` VALUES (2,'2');
/*!40000 ALTER TABLE `FORTEST` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `SHOW`
--

DROP TABLE IF EXISTS `SHOW`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `SHOW` (
  `FID` int(11) NOT NULL,
  `TID` int(11) DEFAULT NULL,
  `PRICE` int(11) DEFAULT NULL,
  `YEAR` int(11) DEFAULT NULL,
  `MONTH` int(11) DEFAULT NULL,
  KEY `TID` (`TID`),
  KEY `FID` (`FID`),
  CONSTRAINT `SHOW_ibfk_2` FOREIGN KEY (`TID`) REFERENCES `THEATER` (`TID`),
  CONSTRAINT `SHOW_ibfk_3` FOREIGN KEY (`FID`) REFERENCES `FILM` (`FID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `SHOW`
--

LOCK TABLES `SHOW` WRITE;
/*!40000 ALTER TABLE `SHOW` DISABLE KEYS */;
INSERT INTO `SHOW` VALUES (4,1,35,2017,3),(4,2,35,2017,1),(4,3,35,2017,2),(4,4,35,2017,1),(4,5,10,2018,1),(6,5,35,2018,1),(6,5,35,2018,2),(6,5,40,2017,12),(5,1,35,2016,1),(5,2,35,2016,1),(5,3,35,2016,2),(6,5,35,2018,1),(12,1,50,2018,2),(12,2,50,2018,2),(12,3,50,2018,2);
/*!40000 ALTER TABLE `SHOW` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `THEATER`
--

DROP TABLE IF EXISTS `THEATER`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `THEATER` (
  `TID` int(11) NOT NULL,
  `TNAME` char(20) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `TAREA` char(20) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `ADDRESS` char(30) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  PRIMARY KEY (`TID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `THEATER`
--

LOCK TABLES `THEATER` WRITE;
/*!40000 ALTER TABLE `THEATER` DISABLE KEYS */;
INSERT INTO `THEATER` VALUES (1,'洪山区1','洪山区','洪山区1号'),(2,'洪山区2','洪山区','洪山区2号'),(3,'武昌区1','武昌区','武昌区1号'),(4,'武昌区2','武昌区','武昌区2号'),(5,'韵苑体育馆','洪山区','珞喻路1037');
/*!40000 ALTER TABLE `THEATER` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `import_table`
--

DROP TABLE IF EXISTS `import_table`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `import_table` (
  `FID` int(11) NOT NULL,
  `FNAME` char(30) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `FTYPE` char(10) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `DNAME` char(30) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `length` int(11) DEFAULT NULL,
  `IS3D` char(1) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `GRADE` int(11) DEFAULT NULL,
  PRIMARY KEY (`FID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `import_table`
--

LOCK TABLES `import_table` WRITE;
/*!40000 ALTER TABLE `import_table` DISABLE KEYS */;
INSERT INTO `import_table` VALUES (0,'FNAME','FTYPE','DNAME',0,'I',0),(1,'film1','Action','Amazon',120,'Y',90),(2,'film2','Love','Gray',119,'N',91),(3,'film3','Suspence','Hover',121,'Y',92),(4,'film4','Adventure','NH3',122,'N',93);
/*!40000 ALTER TABLE `import_table` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Current Database: `DBlabs`
--

USE `DBlabs`;

--
-- Final view structure for view `80S`
--

/*!50001 DROP TABLE IF EXISTS `80S`*/;
/*!50001 DROP VIEW IF EXISTS `80S`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`hover`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `80S` AS select `ACTIN`.`ACTID` AS `ACTID`,`ACTIN`.`ISLEADING` AS `ISLEADING`,`ACTIN`.`FID` AS `FID`,count((case `ACTIN`.`ISLEADING` when 'Y' then 1 end)) AS `LEADING NUM`,max(`ACTIN`.`GRADE`) AS `MAXGRADE` from `ACTIN` where `ACTIN`.`FID` in (select `ACTIN`.`FID` from (`ACTOR` join `ACTIN` on((`ACTIN`.`ACTID` = `ACTOR`.`ACTID`))) where ((1980 <= `ACTOR`.`BYEAR`) and (`ACTOR`.`BYEAR` < 1989) and (`ACTIN`.`ISLEADING` = 'Y')) group by `ACTIN`.`FID`) group by `ACTIN`.`ACTID` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `DandA`
--

/*!50001 DROP TABLE IF EXISTS `DandA`*/;
/*!50001 DROP VIEW IF EXISTS `DandA`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`hover`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `DandA` AS select `a`.`DNAME` AS `DNAME` from `FILM` `a` group by `a`.`DNAME` having (count(0) >= 2) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-05-15 11:38:44
