/*Declaration(s) for string_f.c module*/
#ifndef STRING_F_H_SENTRY
#define STRING_F_H_SENTRY

extern int string_length(const char *s);
extern void string_copy(char *d, const char *s);
extern void string_n_copy(char *d, const char *s, int size);
extern int string_compare(const char *s1, const char *s2);
extern int string_n_compare(const char *s1, const char *s2, int n);
extern char *string_char(const char *s, int c);
extern char *string_right_char(const char *s, int c);
extern char *string_string(const char *hs, const char *n);
extern void memory_set(void *m, int val, int size);
extern void memory_copy(void *dest, const void *src, int size);
extern void memory_move(void *dest, const void *src, int size);

#endif
