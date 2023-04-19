SELECT title 
FROM movies 
WHERE year = 2008;

SELECT birth_year 
FROM people 
WHERE name = 'Emma Stone';

SELECT title 
FROM movies 
WHERE year >= 2018 
ORDER BY title ASC;

SELECT COUNT(*) 
FROM movies 
WHERE imdb_rating = 10.0;

SELECT title, year 
FROM movies 
WHERE title LIKE 'Harry Potter%' 
ORDER BY year ASC;

SELECT AVG(imdb_rating) 
FROM movies 
WHERE year = 2012;

SELECT title, imdb_rating 
FROM movies 
WHERE year = 2010 AND imdb_rating IS NOT NULL 
ORDER BY imdb_rating DESC, title ASC;

SELECT name 
FROM people 
JOIN roles ON people.id = roles.person_id 
JOIN movies ON roles.movie_id = movies.id 
WHERE movies.title = 'Toy Story';

SELECT DISTINCT people.name 
FROM people 
JOIN roles ON people.id = roles.person_id 
JOIN movies ON roles.movie_id = movies.id 
WHERE movies.year = 2004 
AND people.birth_year IS NOT NULL 
ORDER BY people.birth_year ASC;

SELECT DISTINCT people.name 
FROM people 
JOIN directing ON people.id = directing.person_id 
JOIN movies ON directing.movie_id = movies.id 
WHERE movies.imdb_rating >= 9.0;

SELECT title 
FROM movies 
JOIN roles ON movies.id = roles.movie_id 
JOIN people ON roles.person_id = people.id 
WHERE people.name = 'Chadwick Boseman' AND movies.imdb_rating IS NOT NULL 
ORDER BY movies.imdb_rating DESC 
LIMIT 5;

SELECT title 
FROM movies 
JOIN roles ON movies.id = roles.movie_id 
JOIN people ON roles.person_id = people.id 
WHERE people.name = 'Chadwick Boseman' AND movies.imdb_rating IS NOT NULL 
ORDER BY movies.imdb_rating DESC 
LIMIT 5;

SELECT movies.title 
FROM movies 
JOIN roles jd ON jd.movie_id = movies.id 
JOIN people jp ON jd.person_id = jp.id 
JOIN roles hc ON hc.movie_id = movies.id 
JOIN people hp ON







