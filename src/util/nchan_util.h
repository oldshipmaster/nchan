ngx_int_t ngx_http_complex_value_noalloc(ngx_http_request_t *r, ngx_http_complex_value_t *val, ngx_str_t *value, size_t maxlen);
u_char *nchan_strsplit(u_char **s1, ngx_str_t *sub, u_char *last_char);
ngx_str_t *nchan_get_header_value(ngx_http_request_t * r, ngx_str_t header_name);
ngx_buf_t *nchan_chain_to_single_buffer(ngx_pool_t *pool, ngx_chain_t *chain, size_t content_length);
ngx_str_t *ngx_http_debug_pool_str(ngx_pool_t *pool);
void nchan_strcpy(ngx_str_t *dst, ngx_str_t *src, size_t maxlen);
ngx_int_t nchan_init_timer(ngx_event_t *ev, void (*cb)(ngx_event_t *), void *pd);
ngx_int_t nchan_oneshot_timer(ngx_event_t *ev, void (*cb)(void *), void *pd);
char *nchan_msgstatus_to_str(nchan_msg_status_t status);
#ifndef container_of

#define container_of(ptr, type, member) ({                      \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
        (type *)( (char *)__mptr - offsetof(type,member) );})
#endif
