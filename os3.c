
int allocate_map()
 {
    b = (unsigned char*)malloc((sizez+cb-1)/cb * sizeof(char));
    if (b) return 1;
    return -1;
}


/* Creates and initializes a data structure for representing pids;
 returns —1 if unsuccessful, 1 if successful */

