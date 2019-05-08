typedef unsigned int u_int32_t;
typedef unsigned short u_int16_t;
typedef unsigned char u_int8_t;
typedef signed int int32_t;
typedef signed short int16_t;
typedef signed char	int8_t;

extern	u_int32_t	local_adler32(u_int8_t *buffer, int32_t length);
extern	int	decompress_lzss(u_int8_t *dst, u_int8_t *src, u_int32_t srclen);
extern	u_int8_t	*compress_lzss(u_int8_t *dst, u_int32_t dstlen, u_int8_t *src, u_int32_t srcLen);
