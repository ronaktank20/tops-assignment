
CREATE TABLE Nobel_win (
    year INT,
    subject VARCHAR(50),
    winner VARCHAR(100),
    country VARCHAR(50),
    category VARCHAR(50)
);


INSERT INTO Nobel_win VALUES (1970, 'Physics', 'Louis Neel', 'France', 'Scientist');
INSERT INTO Nobel_win VALUES (1970, 'Chemistry', 'Luis Federico Leloir', 'Argentina', 'Scientist');
INSERT INTO Nobel_win VALUES (1970, 'Economics', 'Paul Samuelson', 'USA', 'Economist');
INSERT INTO Nobel_win VALUES (1968, 'Chemistry', 'Louis Pasteur', 'France', 'Scientist');
INSERT INTO Nobel_win VALUES (1975, 'Chemistry', 'John Cornforth', 'UK', 'Scientist');
INSERT INTO Nobel_win VALUES (1967, 'Literature', 'Miguel Asturias', 'Guatemala', 'Writer');
INSERT INTO Nobel_win VALUES (1969, 'Peace', 'International Labour Organization', 'Switzerland', 'Organization');



SELECT year, subject, winner
FROM Nobel_win
WHERE year = 1970;


SELECT year, subject, winner, country
FROM Nobel_win
WHERE subject = 'Chemistry'
  AND year BETWEEN 1965 AND 1975;

-- 3. Retrieve winners whose first name matches 'Louis'
SELECT year, subject, winner, country
FROM Nobel_win
WHERE winner LIKE 'Louis%';

-- 4. Find Nobel prize winners for subjects not beginning with 'P'
-- Order by year descending, winner ascending
SELECT year, subject, winner
FROM Nobel_win
WHERE subject NOT LIKE 'P%'
ORDER BY year DESC, winner ASC;


SELECT year, subject, winner, country, category
FROM Nobel_win
WHERE year = 1970
ORDER BY 
    CASE 
        WHEN subject IN ('Chemistry', 'Economics') THEN 2 
        ELSE 1 
    END,
    subject ASC;
