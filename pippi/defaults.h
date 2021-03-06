/* Generated by Cython 0.27.3 */

#ifndef __PYX_HAVE__pippi__defaults
#define __PYX_HAVE__pippi__defaults


#ifndef __PYX_HAVE_API__pippi__defaults

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C int DEFAULT_CHANNELS;
__PYX_EXTERN_C int DEFAULT_SAMPLERATE;

#endif /* !__PYX_HAVE_API__pippi__defaults */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initdefaults(void);
#else
PyMODINIT_FUNC PyInit_defaults(void);
#endif

#endif /* !__PYX_HAVE__pippi__defaults */
