#lang scribble/manual
@title{glL...}
@defproc[(glLightEnviSGIX (pname exact-integer?) (param exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/fragment_lighting.txt"]{@racket[GL_SGIX_fragment_lighting]}.
}
@defproc[(glLightModelf (pname exact-integer?) (param flonum?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLightModel.xhtml"]{glLightModel manpage}.
}
@defproc[(glLightModelfv (pname exact-integer?) (params f32vector?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLightModel.xhtml"]{glLightModel manpage}.
}
@defproc[(glLightModeli (pname exact-integer?) (param exact-integer?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLightModel.xhtml"]{glLightModel manpage}.
}
@defproc[(glLightModeliv (pname exact-integer?) (params s32vector?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLightModel.xhtml"]{glLightModel manpage}.
}
@defproc[(glLightf (light exact-integer?) (pname exact-integer?) (param flonum?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLight.xhtml"]{glLight manpage}.
}
@defproc[(glLightfv (light exact-integer?) (pname exact-integer?) (params f32vector?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLight.xhtml"]{glLight manpage}.
}
@defproc[(glLighti (light exact-integer?) (pname exact-integer?) (param exact-integer?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLight.xhtml"]{glLight manpage}.
}
@defproc[(glLightiv (light exact-integer?) (pname exact-integer?) (params s32vector?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLight.xhtml"]{glLight manpage}.
}
@defproc[(glLineStipple (factor exact-integer?) (pattern (integer-in 0 65535))) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLineStipple.xhtml"]{glLineStipple manpage}.
}
@defproc[(glLineWidth (width flonum?)) any]{

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glLineWidth.xhtml"]{glLineWidth manpage}.
}
@defproc[(glLinkProgram (program exact-nonnegative-integer?)) any]{
Version 2.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glLinkProgram.xhtml"]{glLinkProgram manpage}.
}
@defproc[(glLinkProgramARB (programObj exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/shader_objects.txt"]{@racket[GL_ARB_shader_objects]}.

Alias of @racket[glLinkProgram].
}
@defproc[(glListBase (base exact-nonnegative-integer?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glListBase.xhtml"]{glListBase manpage}.
}
@defproc[(glListParameterfSGIX (list exact-nonnegative-integer?) (pname exact-integer?) (param flonum?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/list_priority.txt"]{@racket[GL_SGIX_list_priority]}.
}
@defproc[(glListParameterfvSGIX (list exact-nonnegative-integer?) (pname exact-integer?) (params f32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/list_priority.txt"]{@racket[GL_SGIX_list_priority]}.
}
@defproc[(glListParameteriSGIX (list exact-nonnegative-integer?) (pname exact-integer?) (param exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/list_priority.txt"]{@racket[GL_SGIX_list_priority]}.
}
@defproc[(glListParameterivSGIX (list exact-nonnegative-integer?) (pname exact-integer?) (params s32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/list_priority.txt"]{@racket[GL_SGIX_list_priority]}.
}
@defproc[(glLoadIdentity) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLoadIdentity.xhtml"]{glLoadIdentity manpage}.
}
@defproc[(glLoadIdentityDeformationMapSGIX (mask exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/polynomial_ffd.txt"]{@racket[GL_SGIX_polynomial_ffd]}.
}
@defproc[(glLoadMatrixd (m f64vector?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLoadMatrix.xhtml"]{glLoadMatrix manpage}.
}
@defproc[(glLoadMatrixf (m f32vector?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLoadMatrix.xhtml"]{glLoadMatrix manpage}.
}
@defproc[(glLoadName (name exact-nonnegative-integer?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLoadName.xhtml"]{glLoadName manpage}.
}
@defproc[(glLoadProgramNV (target exact-integer?) (id exact-nonnegative-integer?) (len exact-integer?) (program (or/c string? bytes?))) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/vertex_program.txt"]{@racket[GL_NV_vertex_program]}.
}
@defproc[(glLoadTransposeMatrixd (m f64vector?)) any]{
Version 1.3.
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLoadTransposeMatrix.xhtml"]{glLoadTransposeMatrix manpage}.
}
@defproc[(glLoadTransposeMatrixdARB (m f64vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/transpose_matrix.txt"]{@racket[GL_ARB_transpose_matrix]}.

Alias of @racket[glLoadTransposeMatrixd].
}
@defproc[(glLoadTransposeMatrixf (m f32vector?)) any]{
Version 1.3.
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glLoadTransposeMatrix.xhtml"]{glLoadTransposeMatrix manpage}.
}
@defproc[(glLoadTransposeMatrixfARB (m f32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/transpose_matrix.txt"]{@racket[GL_ARB_transpose_matrix]}.

Alias of @racket[glLoadTransposeMatrixf].
}
@defproc[(glLockArraysEXT (first exact-integer?) (count exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/compiled_vertex_array.txt"]{@racket[GL_EXT_compiled_vertex_array]}.
}
@defproc[(glLogicOp (opcode exact-integer?)) any]{

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glLogicOp.xhtml"]{glLogicOp manpage}.
}
