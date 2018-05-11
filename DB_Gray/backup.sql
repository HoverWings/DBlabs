/*
SQLyog Community v12.4.0 (64 bit)
MySQL - 8.0.11 : Database - lab2
*********************************************************************
*/

/*!40101 SET NAMES utf8 */;

/*!40101 SET SQL_MODE=''*/;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;
CREATE DATABASE /*!32312 IF NOT EXISTS*/`lab2` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */;

USE `lab2`;

/*Table structure for table `actin` */

DROP TABLE IF EXISTS `actin`;

CREATE TABLE `actin` (
  `ACTID` int(11) NOT NULL,
  `FID` int(11) NOT NULL,
  `ISLEADING` varchar(1) DEFAULT NULL,
  `GRADE` int(11) DEFAULT NULL,
  PRIMARY KEY (`ACTID`,`FID`),
  KEY `FID` (`FID`),
  CONSTRAINT `actin_ibfk_1` FOREIGN KEY (`FID`) REFERENCES `film` (`fid`),
  CONSTRAINT `actin_ibfk_2` FOREIGN KEY (`ACTID`) REFERENCES `actor` (`actid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

/*Data for the table `actin` */

insert  into `actin`(`ACTID`,`FID`,`ISLEADING`,`GRADE`) values 
(1,1,'Y',99),
(1,2,'Y',98),
(2,1,'Y',10);

/*Table structure for table `actor` */

DROP TABLE IF EXISTS `actor`;

CREATE TABLE `actor` (
  `ACTID` int(11) NOT NULL,
  `ANAME` varchar(30) DEFAULT NULL,
  `SEX` varchar(2) DEFAULT NULL,
  `BYEAR` int(11) DEFAULT NULL,
  PRIMARY KEY (`ACTID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

/*Data for the table `actor` */

insert  into `actor`(`ACTID`,`ANAME`,`SEX`,`BYEAR`) values 
(1,'男主角','男',1997),
(2,'大魔王','男',1980),
(3,'女主角','女',1996);

/*Table structure for table `film` */

DROP TABLE IF EXISTS `film`;

CREATE TABLE `film` (
  `FID` int(11) NOT NULL,
  `FNAME` varchar(255) DEFAULT NULL,
  `FTYPE` varchar(255) DEFAULT NULL,
  `DNAME` varchar(255) DEFAULT NULL,
  `FLENGTH` int(11) DEFAULT NULL,
  `IS3D` varchar(255) DEFAULT NULL,
  `GRADE` int(11) DEFAULT NULL,
  PRIMARY KEY (`FID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

/*Data for the table `film` */

insert  into `film`(`FID`,`FNAME`,`FTYPE`,`DNAME`,`FLENGTH`,`IS3D`,`GRADE`) values 
(1,'战狼','动作片','吴宇森',120,'Y',10),
(2,'战狼2','警匪片','导演1',12,'Y',90),
(3,'战狼3','枪战片 ','导演1',50,'N',80),
(4,'战狼4','科幻片','吴宇森',79,'Y',NULL),
(5,'星球大战','科幻','导演2',NULL,NULL,NULL);

/*Table structure for table `showt` */

DROP TABLE IF EXISTS `showt`;

CREATE TABLE `showt` (
  `FID` int(11) NOT NULL,
  `TID` int(11) NOT NULL,
  `PRICEC` int(11) DEFAULT NULL,
  `SYEAR` int(11) DEFAULT NULL,
  `SMONTH` int(11) DEFAULT NULL,
  PRIMARY KEY (`FID`,`TID`),
  KEY `TID` (`TID`),
  CONSTRAINT `showt_ibfk_1` FOREIGN KEY (`TID`) REFERENCES `theater` (`tid`),
  CONSTRAINT `showt_ibfk_2` FOREIGN KEY (`FID`) REFERENCES `film` (`fid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

/*Data for the table `showt` */

insert  into `showt`(`FID`,`TID`,`PRICEC`,`SYEAR`,`SMONTH`) values 
(1,1,10,2016,1),
(1,2,15,2017,11),
(2,2,10,2017,11),
(4,1,NULL,2018,NULL),
(4,2,NULL,2018,NULL),
(4,3,NULL,2018,NULL);

/*Table structure for table `theater` */

DROP TABLE IF EXISTS `theater`;

CREATE TABLE `theater` (
  `TID` int(11) NOT NULL,
  `TNAME` varchar(20) DEFAULT NULL,
  `TAREA` varchar(20) DEFAULT NULL,
  `ADDRESS` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`TID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

/*Data for the table `theater` */

insert  into `theater`(`TID`,`TNAME`,`TAREA`,`ADDRESS`) values 
(1,'沁苑415','洪山区','洪山区1'),
(2,'天河影院','江汉区','江汉区1'),
(3,'环球影院','武昌区','武昌区1');

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
