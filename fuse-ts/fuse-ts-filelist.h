extern sourcefile_t* dupe_file_list(sourcefile_t * source);
extern sourcefile_t* dupe_file_entry(sourcefile_t * source);
extern sourcefile_t* new_file_entry_absolute_path(const char * filename);
extern sourcefile_t* new_file(const char * filename);
extern void destroy_file(sourcefile_t* leaf);
extern sourcefile_t* list_insert(sourcefile_t* list, sourcefile_t* e);
extern int list_count(sourcefile_t* root);
extern sourcefile_t** list_to_array(sourcefile_t* root, int* num);
extern int sort_partition(sourcefile_t** files, int left, int right, int pivotIndex);
extern void sort_array(sourcefile_t** files, int left, int right);
extern sourcefile_t* sort_list(sourcefile_t* files);
extern sourcefile_t* get_list_tail(sourcefile_t* list);
extern void purge_list(sourcefile_t* root);
extern void reorganize_slide_list(sourcefile_t* root);
extern void reorganize_list(sourcefile_t* root);
extern sourcefile_t* drop_list_tail(sourcefile_t* list);
extern sourcefile_t* drop_list_head(sourcefile_t* list);
extern sourcefile_t* cut_out(sourcefile_t* list, int endframe);
extern sourcefile_t* cut_in(sourcefile_t* list, int startframe);
extern sourcefile_t* add_file_to_list(sourcefile_t * list, sourcefile_t * entry);
extern sourcefile_t* add_file_to_list_head(sourcefile_t * list, sourcefile_t * entry);
extern sourcefile_t *get_sourcefile_for_position (sourcefile_t * list, off_t pos);
extern off_t get_filesize(char* name);
extern sourcefile_t * get_files_with_prefix(const char* prefix, int * num);
extern char * get_prefix_with_path();
extern void close_file_handles(sourcefile_t* files);
extern void insert_into_filehints_list (uint64_t fh, sourcefile_t * files);
extern uint64_t insert_into_filechains_list(sourcefile_t * files);
extern void remove_from_filechains_list(uint64_t handle);

