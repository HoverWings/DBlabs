explain 
select a.`FID`, b.`FNAME` from `SHOW` as a 
left join `FILM` as b
on a.`FID`=b.`FID` 
where b.`GRADE` is NULL 
group by a.`FID` 
having count(*)>=3;
