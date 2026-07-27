# Write your MySQL query statement below
SELECT sp.name
FROM SalesPerson AS sp
WHERE sp.name NOT IN (
    SELECT DISTINCT s.name
    FROM SalesPerson AS s
    JOIN Orders AS o ON s.sales_id = o.sales_id  
    JOIN Company AS c ON o.com_id = c.com_id
    WHERE c.name = 'RED'
);
