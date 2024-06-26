#ifndef PRIORITY_QUEUE_LINKED_LIST_H
#define PRIORITY_QUEUE_LINKED_LIST_H

#include "PriorityQueue.h"

// Struktura węzła
struct PriorityQueue_LinkedList_Node
{
	int element = 0;										// Wartość elementu.
	int priority = 0;										// Prioritet elementu.
	PriorityQueue_LinkedList_Node* nextNode = nullptr;	    // Wskaźnik na następny element.
};

// Klasa kolejki priorytetowej zaimplementowanej jako lista wiązana (jednokierunkowa).
class PriorityQueue_LinkedList final : public PriorityQueue
{
public:
	// Konstruktor.
	PriorityQueue_LinkedList();

	// Destruktor.
	~PriorityQueue_LinkedList();

    // Wstawia element o podanym priorytecie.
    virtual void insert(int element, int priority) override;

    // Usuwa i zwarca element o najwyższym priorytecie.
    virtual int extractMax() override;

    // Zwraca element o najwyższym priorytecie.
    virtual int peek() const override;

    // Modyfikuje priorytet danego elementu.
    virtual void modifyKey(int element, int priority) override;

    // Zwraca rozmiar struktury danych.
    virtual int returnSize() const override;

    // Tworzy kopię obecnej kolejki priorytetowej.
    virtual PriorityQueue* copy() override;

private:
	PriorityQueue_LinkedList_Node* headNode;    // Wskaźnik na początek kolejki.
    int size;                                   // Liczba elementów w kolejce.
};

#endif
