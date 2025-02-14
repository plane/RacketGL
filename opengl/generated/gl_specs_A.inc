#lang scribble/manual
@title{glA...}
@defproc[(glAccum (op exact-integer?) (value flonum?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glAccum.xhtml"]{glAccum manpage}.
}
@defproc[(glActiveProgramEXT (program exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/separate_shader_objects.txt"]{@racket[GL_EXT_separate_shader_objects]}.
}
@defproc[(glActiveShaderProgram (pipeline exact-nonnegative-integer?) (program exact-nonnegative-integer?)) any]{
Version 4.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glActiveShaderProgram.xhtml"]{glActiveShaderProgram manpage}.
}
@defproc[(glActiveStencilFaceEXT (face exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/stencil_two_side.txt"]{@racket[GL_EXT_stencil_two_side]}.
}
@defproc[(glActiveTexture (texture exact-integer?)) any]{
Version 1.3.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glActiveTexture.xhtml"]{glActiveTexture manpage}.
}
@defproc[(glActiveTextureARB (texture exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/multitexture.txt"]{@racket[GL_ARB_multitexture]}.

Alias of @racket[glActiveTexture].
}
@defproc[(glActiveVaryingNV (program exact-nonnegative-integer?) (name (or/c string? bytes?))) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/transform_feedback.txt"]{@racket[GL_NV_transform_feedback]}.
}
@defproc[(glAlphaFragmentOp1ATI (op exact-integer?) (dst exact-nonnegative-integer?) (dstMod exact-nonnegative-integer?) (arg1 exact-nonnegative-integer?) (arg1Rep exact-nonnegative-integer?) (arg1Mod exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ATI/fragment_shader.txt"]{@racket[GL_ATI_fragment_shader]}.
}
@defproc[(glAlphaFragmentOp2ATI (op exact-integer?) (dst exact-nonnegative-integer?) (dstMod exact-nonnegative-integer?) (arg1 exact-nonnegative-integer?) (arg1Rep exact-nonnegative-integer?) (arg1Mod exact-nonnegative-integer?) (arg2 exact-nonnegative-integer?) (arg2Rep exact-nonnegative-integer?) (arg2Mod exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ATI/fragment_shader.txt"]{@racket[GL_ATI_fragment_shader]}.
}
@defproc[(glAlphaFragmentOp3ATI (op exact-integer?) (dst exact-nonnegative-integer?) (dstMod exact-nonnegative-integer?) (arg1 exact-nonnegative-integer?) (arg1Rep exact-nonnegative-integer?) (arg1Mod exact-nonnegative-integer?) (arg2 exact-nonnegative-integer?) (arg2Rep exact-nonnegative-integer?) (arg2Mod exact-nonnegative-integer?) (arg3 exact-nonnegative-integer?) (arg3Rep exact-nonnegative-integer?) (arg3Mod exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ATI/fragment_shader.txt"]{@racket[GL_ATI_fragment_shader]}.
}
@defproc[(glAlphaFunc (func exact-integer?) (ref flonum?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glAlphaFunc.xhtml"]{glAlphaFunc manpage}.
}
@defproc[(glApplyTextureEXT (mode exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/light_texture.txt"]{@racket[GL_EXT_light_texture]}.
}
@defproc[(glAreProgramsResidentNV (n exact-integer?) (programs u32vector?)) (values boolean? (vectorof boolean?))]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/vertex_program.txt"]{@racket[GL_NV_vertex_program]}.
}
@defproc[(glAreTexturesResident (n exact-integer?) (textures u32vector?)) (values boolean? (vectorof boolean?))]{
Version 1.1.
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glAreTexturesResident.xhtml"]{glAreTexturesResident manpage}.
}
@defproc[(glAreTexturesResidentEXT (n exact-integer?) (textures u32vector?)) (values boolean? (vectorof boolean?))]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/texture_object.txt"]{@racket[GL_EXT_texture_object]}.
}
@defproc[(glArrayElement (i exact-integer?)) any]{
Version 1.1.
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glArrayElement.xhtml"]{glArrayElement manpage}.
}
@defproc[(glArrayElementEXT (i exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/vertex_array.txt"]{@racket[GL_EXT_vertex_array]}.

Alias of @racket[glArrayElement].
}
@defproc[(glArrayObjectATI (array exact-integer?) (size exact-integer?) (type exact-integer?) (stride exact-integer?) (buffer exact-nonnegative-integer?) (offset exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ATI/vertex_array_object.txt"]{@racket[GL_ATI_vertex_array_object]}.
}
@defproc[(glAsyncMarkerSGIX (marker exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/async.txt"]{@racket[GL_SGIX_async]}.
}
@defproc[(glAttachObjectARB (containerObj exact-nonnegative-integer?) (obj exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/shader_objects.txt"]{@racket[GL_ARB_shader_objects]}.

Alias of @racket[glAttachShader].
}
@defproc[(glAttachShader (program exact-nonnegative-integer?) (shader exact-nonnegative-integer?)) any]{
Version 2.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glAttachShader.xhtml"]{glAttachShader manpage}.
}
