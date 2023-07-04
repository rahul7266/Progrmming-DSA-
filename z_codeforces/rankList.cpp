#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent a group
struct Group {
    int size;  // size of the group
    int arrival_time;  // arrival time of the group
    int processing_time;  // time to process the group
};

// Custom comparison function for sorting groups by arrival time
int compare_groups(const void* a, const void* b) {
    const struct Group* group_a = (const struct Group*) a;
    const struct Group* group_b = (const struct Group*) b;
    return group_a->arrival_time - group_b->arrival_time;
}

int main() {
    int num_groups;
    scanf("%d", &num_groups);

    // Allocate memory for the groups array
    struct Group* groups = malloc(num_groups * sizeof(struct Group));

    // Read in the groups
    for (int i = 0; i < num_groups; i++) {
        scanf("%d %d %d", &groups[i].size, &groups[i].arrival_time, &groups[i].processing_time);
    }

    // Sort the groups by arrival time
    qsort(groups, num_groups, sizeof(struct Group), compare_groups);

    // Initialize variables for the left and right queues and the current time
    int left_queue_time = 0;
    int right_queue_time = 0;
    int current_time = 0;
    long long total_wait_time = 0;  // use long long to avoid overflow

    // Process the groups in order of arrival
    for (int i = 0; i < num_groups; i++) {
        // Determine which queue to add the group to
        int wait_time_left = left_queue_time - current_time;
        int wait_time_right = right_queue_time - current_time;
        if (wait_time_left < 0) {
            wait_time_left = 0;
        }
        if (wait_time_right < 0) {
            wait_time_right = 0;
        }
        if (wait_time_left <= wait_time_right) {
            left_queue_time += groups[i].processing_time;
            total_wait_time += wait_time_left;
        } else {
            right_queue_time += groups[i].processing_time;
            total_wait_time += wait_time_right;
        }
        current_time = groups[i].arrival_time;
    }

    // Output the total wait time
    printf("%lld\n", total_wait_time);

    // Free the memory for the groups array
    free(groups);

    return 0;
}
