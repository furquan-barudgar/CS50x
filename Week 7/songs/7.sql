SELECT AVG(energy) FROM songs where artist_id IN (SELECT id FROM artists WHERE name = 'Drake');
