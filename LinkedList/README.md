okay, now I've have to admit that I've learned a lot from this project

first of all plain linked list is simply trash. If I was to work with less then 100 nodes; It might be useful
but that's not the case for now. I've tested out my linked list with 500 millions of nodes.
Linked list with 500 million nodes allocates around 1.8 GB of ram (in release mode).
In debug mode, linked list uses 4.3 GB of ram ;). So make sure to use release mode when you testing your code.

My observatinos showed me that the loops aren't as snapy as I thought. Even though the complexity of one
loop is O(n), that might not be enough to claim It's fast. It took really long time to find penultimate
node. Also, I've relatively fast computer but that's the case even for me.

One more thing to mention is, it took over a minute and half to delete only 50 nodes. So I consider this as
slow, maybe that's because I don't know how to use destructor X).

For conculsion, Two main results shall not be forgotten :
1 - It's best to avoid high-iterated loops.
2 - Plain linked lists = trash. Use double linked list. (Which that is what I will do for next step.)