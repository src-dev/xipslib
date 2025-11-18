#ifndef XIPS_H
#define XIPS_H

typedef enum {
	E_FOPEN_SRC = 1,
	E_FOPEN_DST,
	E_FOPEN_IPS,
	E_NOT_IPS,
	E_OUT_OF_MEMORY
} ErrorCode;

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * Creates a backup copy of a file.
	 *
	 * @param src  Path to source file
	 * @param dst  Path to destination backup file
	 * @return 0 on success, ErrorCode on error
	 */
	int createBak(const char* src, const char* dst);

	/**
	 * Applies an IPS patch to a target file.
	 *
	 * @param ips  Path to IPS patch file
	 * @param src  Path to file to be patched (must be writable)
	 * @return 0 on success, ErrorCode on error
	 */
	int applyIPS(const char* ips, const char* src);

#ifdef __cplusplus
}
#endif

#endif // XIPS_H