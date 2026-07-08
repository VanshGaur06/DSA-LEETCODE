SELECT
firstName,
lastName,
city,
state
FROM person
LEFT JOIN address
ON Person.personId = Address.personId;