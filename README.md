# Operating-Systems
Will &amp; Lou&#39;s Café Problem
In the quaint village where &quot;Me Before You&quot; by Jojo Moyes is set, a lovely little café called
&quot;Will &amp; Lou&#39;s&quot; has opened. This charming café is inspired by the beautiful marriage between
Will Traynor and Louisa Clark and is adorned with bumblebee tights and quirky decorations. The
café has a limited number of tables, and they offer a unique service: customers can borrow books
to read while enjoying their coffee and treats.
To maintain the serene atmosphere of the café and ensure a smooth borrowing experience for
customers, the following aspects need to be managed:
1. Allowing customers to enter the café while making sure there is a table available for them
to sit.
2. Managing the borrowing and returning process of books, ensuring customers only take
available books.
3. Ensuring customers leave a table once they finish reading and enjoying their treats,
making room for new customers.
4. Synchronizing the book inventory, so the availability status of each book is accurate.
A C program can be developed using semaphores, processes, and thread mutex locks to address
these challenges:
1. Semaphores can be used to manage the available tables, allowing customers to enter only
when there is a free table.

2. Processes can represent individual customers and their actions (entering the café,
borrowing a book, reading, and leaving).
3. Thread mutex locks can be used to synchronize the book inventory, ensuring customers
can only borrow available books.
4. Additional semaphores can be used to manage the queue of customers waiting outside the
café.
By utilizing semaphores, processes, and thread mutex locks, the C program can effectively
simulate the endearing atmosphere of the &quot;Will &amp; Lou&#39;s&quot; café, while addressing the concurrency
issues related to table availability and book inventory management that arise in this scenario.
