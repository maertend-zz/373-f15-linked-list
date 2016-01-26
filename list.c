#include <assert.h>
#include <stdlib.h>

#include "list.h"

// Takes a valid, sorted list starting at `head` and adds the element
// `new_element` to the list. The list is sorted based on the value of the
// `index` member in ascending order. Returns a pointer to the head of the list
// after the insertion of the new element.
list_t* insert_sorted(list_t* head, list_t* new_element) {
	assert(head != NULL);
	assert(new_element != NULL);
	
	list_t* temp = head;
	/*	if(temp->index > new_element->index){
		new_element->next = temp;
		head = new_element;
	}
	
	else{ */
	while((temp->next != NULL) && (new_element->index > temp->next->index)){
			
			 temp = temp->next;	
				
		}
			
		if(temp->next == NULL && new_element->index > temp->index){
			temp->next = new_element;
			//new_element->next = NULL;
		}
		else if(new_element->index > temp->index){
			new_element->next = temp->next;
			temp->next = new_element; 
		}
		else{
		  new_element->next = temp;
		  head = new_element;
		}
//	}

	return head;
	
}

/* node t current = head
   while new element index > current index & current
 */

// Reverses the order of the list starting at `head` and returns a pointer to
// the resulting list. You do not need to preserve the original list.
list_t* reverse(list_t* head) {
	assert(head != NULL);
	
	
	list_t* temp = head->next;
	head->next = NULL;
		
	while(temp != NULL){
	
		list_t* rev = temp->next;
		temp->next = head;
		head = temp;
		temp = rev;
	 
	}

	return head;
}

# 373-f15-linked-list
