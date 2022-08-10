Hello again, in the last project I've covered linked list with 500 million of nodes which It was easy to allocate
but the same thing wasn't the case for deleting the nodes because of the time needed to travel through the 
last node. This time, to make the process faster, I used double linked list and the difference was obvious.

Yet again, I created a dll (double linked list) with 500 million nodes. It allocated 17.6 GB of memory in
release mode. I'm too lazy to test it out in debug mode because I'm quite sure It will take too much time X).
<br>
# Two things bothers me :
<ol>
    <li>
        Compared to plain linked list, the only difference is that I added only one more Node* to the Node 
        classes definition. But the total memory needed is more than 4x. Maybe made a mistake in the definition
        of Node and DLinkedList class. As I said, I'm trying to learn ;(. But I don't have to be an expert to
        see that there is an huuuuge leak, hehehe.
    </li>
    <li>
        Eventhough I deleted the all the nodes but first 10 of them, Visual Studio still tells me that 100 MB of
        memory is allocated, but when I take snapshot of memory, there is nothing but my nodes uses memory.
    </li>
</ol>
