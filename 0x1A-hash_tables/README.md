## 0x1A-hash_tables

** Hash Table: This is the container that holds all the data. It's typically an array with a 
fixed number of slots (or buckets) where data is stored. Each slot can hold multiple items or key-value pairs.

** Hash Function: This is the magic tool that turns your key (e.g., a string) into a number. The number is used 
as an index to decide which slot in the hash table to put the key-value pair. The hash function is essential 
because it helps distribute the data evenly across the slots.

** Key-Value Pair: This is the data you want to store or retrieve in the hash table. The "key" is used to look up 
or store the data, and the "value" is the actual data associated with the key. In some cases, like dealing with 
collisions using separate chaining, each slot in the hash table may hold a linked list of key-value pairs.

With these three components working together, you can efficiently store and retrieve data in a hash table.
The hash function determines where to put the data, and the key helps you find the data when you need it. 
This makes hash tables great for quick lookups and data organization.
