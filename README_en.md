# Algorithms and Abstract Data Types

## Lab 11 \| Exercises + Template

🇬🇧 [English version](README_en.md)

This repository was created from:

- <https://github.com/estsetubal-atad/CProgram_Template>

Consult the README if you have questions about its use.

------------------------------------------------------------------------

Goals:

- Specification and implementation of an ADT of the collection genre: `ADT Priority Queue`

References:

- “Abstract Data Types – Language C. Bruno Silva”, available on Moodle.

------------------------------------------------------------------------

💡 During this lab work you will have to provide a complete implementation of `ADT Priority Queue` (priority queue). In this ADT, each element is associated with a priority value; elements are served (removed) based on their priority, ie, elements with higher priority are served first. However, if there are elements with the same priority, they are served in order of arrival (FIFO).

### Level 1 (Estimated duration: 15min)

1.  Pay attention to the ADT specification in `pqueue.h` ; is, in all respects, identical to that of the ADT Queue.

    ⚠️ There is additionally a way to obtain the priority of an element - function `pqueueElemPriorityValue` in module ⚙️ `pqueueElem` .

2.  Provide doxygen documentation in file 📄 `pqueue.h` (you can repurpose documentation from ADT Queue and adapt)

### Level 2 (Estimated duration: 20min)

3.  Choose a linear data structure (array list or linked list) and define it in 📄 `pqueueImplementation.c` .

4.  According to this data structure, implement functions `pqueueCreate` , `pqueueDestroy` , `pqueueSize` , `pqueueIsEmpty` , and `pqueueClear` .

    - function `pqueuePrint` will only be implemented in level 5.

### Level 3 (Estimated duration: 15min)

As far as handling the data structure for this implementation is concerned, there are two approaches:

- Approach A 🟦 : An element is added at the end of the queue; but, when removing an element, you will have to return the element with the highest priority that has been in the queue for the longest time.

- Approach B 🟩 : An element is added to the queue in its “correct priority” position, ie, it will have to be in front of all existing elements with lower priority; when removing from queue, simply remove the element that is in front.

In terms of "difficulty" of implementation, refer to the following:

- 🟦 (easier, but `pqueuePrint` will be harder to implement)

- 🟩 (more difficult, but `pqueuePrint` will be easy to implement, ie just follow the existing order)

5.  What are the expected complexities for the presented approaches (build a table)? Is efficient implementation possible, eg, `O(1)` in all operations? Discuss.

### Level 4 (Estimated duration: 30min)

6.  Choose one of the presented approaches (any will do) and implement functions `pqueueEnqueue` , `pqueueDequeue` and `pqueueFront` .

    - Regardless of the chosen approach, you will have to use function `pqueueElemPriorityValue` to obtain the absolute priority value of each element.

7.  Test the implementation obtained by compiling the program ( `make` ), running it and verify that characters are removed from the queue in the expected order (highest priority for character `'a'` ) - see 📄 `main_chars.c` .

    - Fix the implementation if necessary.

### Level 5 (Estimated duration: &lt; 20min)

8.  Test the second example provided ( `make clients` ). Parameterize `pqueueElem` to `Client` and change the implementation of `pqueueElemPriorityValue` (just comment/uncomment the two existing lines) - see the 📄 `main_clients.c` .

9.  Implement function `pqueuePrint` . The information presented should show the order of departure of the elements, according to their priority and order of arrival.

    If you chose:

    - Approach A 🟦: you will have to be creative!

    - Approach B 🟩 : just loop through the elements in order in the data structure (from the front of the queue to the tail).

------------------------------------------------------------------------

``` markdown
@bruno.silva
(EOF)
```

\[Disclaimer: This document was automatically translated, some original formatting may have been lost.\]
