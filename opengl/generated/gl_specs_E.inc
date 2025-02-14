#lang scribble/manual
@title{glE...}
@defproc[(glEdgeFlag (flag boolean?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEdgeFlag.xhtml"]{glEdgeFlag manpage}.
}
@defproc[(glEdgeFlagFormatNV (stride exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/vertex_buffer_unified_memory.txt"]{@racket[GL_NV_vertex_buffer_unified_memory]}.
}
@defproc[(glEdgeFlagPointer (stride exact-integer?) (pointer gl-pointer?)) any]{
Version 1.1.
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEdgeFlagPointer.xhtml"]{glEdgeFlagPointer manpage}.
}
@defproc[(glEdgeFlagPointerEXT (stride exact-integer?) (count exact-integer?) (pointer (vectorof boolean?))) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/vertex_array.txt"]{@racket[GL_EXT_vertex_array]}.
}
@defproc[(glEdgeFlagPointerListIBM (stride exact-integer?) (pointer (vectorof (vectorof boolean?))) (ptrstride exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/IBM/vertex_array_lists.txt"]{@racket[GL_IBM_vertex_array_lists]}.
}
@defproc[(glEdgeFlagv (flag boolean?)) any]{
Deprecated in version 3.1.
}
@defproc[(glElementPointerAPPLE (type exact-integer?) (pointer gl-pointer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/APPLE/element_array.txt"]{@racket[GL_APPLE_element_array]}.
}
@defproc[(glElementPointerATI (type exact-integer?) (pointer gl-pointer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ATI/element_array.txt"]{@racket[GL_ATI_element_array]}.
}
@defproc[(glEnable (cap exact-integer?)) any]{

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glEnable.xhtml"]{glEnable manpage}.
}
@defproc[(glEnableClientState (array exact-integer?)) any]{
Version 1.1.
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEnableClientState.xhtml"]{glEnableClientState manpage}.
}
@defproc[(glEnableClientStateIndexedEXT (array exact-integer?) (index exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/direct_state_access.txt"]{@racket[GL_EXT_direct_state_access]}.
}
@defproc[(glEnableIndexedEXT (target exact-integer?) (index exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/draw_buffers2.txt"]{@racket[GL_EXT_draw_buffers2]}.

Alias of @racket[glEnablei].
}
@defproc[(glEnableVariantClientStateEXT (id exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/vertex_shader.txt"]{@racket[GL_EXT_vertex_shader]}.
}
@defproc[(glEnableVertexAttribAPPLE (index exact-nonnegative-integer?) (pname exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/APPLE/vertex_program_evaluators.txt"]{@racket[GL_APPLE_vertex_program_evaluators]}.
}
@defproc[(glEnableVertexAttribArray (index exact-nonnegative-integer?)) any]{
Version 2.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glEnableVertexAttribArray.xhtml"]{glEnableVertexAttribArray manpage}.
}
@defproc[(glEnableVertexAttribArrayARB (index exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/vertex_program.txt"]{@racket[GL_ARB_vertex_program]}.

Alias of @racket[glEnableVertexAttribArray].
}
@defproc[(glEnablei (target exact-integer?) (index exact-nonnegative-integer?)) any]{
Version 3.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glEnable.xhtml"]{glEnable manpage}.
}
@defproc[(glEnd) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEnd.xhtml"]{glEnd manpage}.
}
@defproc[(glEndConditionalRender) any]{
Version 3.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glEndConditionalRender.xhtml"]{glEndConditionalRender manpage}.
}
@defproc[(glEndConditionalRenderNV) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/conditional_render.txt"]{@racket[GL_NV_conditional_render]}.

Alias of @racket[glEndConditionalRender].
}
@defproc[(glEndFragmentShaderATI) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ATI/fragment_shader.txt"]{@racket[GL_ATI_fragment_shader]}.
}
@defproc[(glEndList) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEndList.xhtml"]{glEndList manpage}.
}
@defproc[(glEndOcclusionQueryNV) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/occlusion_query.txt"]{@racket[GL_NV_occlusion_query]}.
}
@defproc[(glEndPerfMonitorAMD (monitor exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/AMD/performance_monitor.txt"]{@racket[GL_AMD_performance_monitor]}.
}
@defproc[(glEndQuery (target exact-integer?)) any]{
Version 1.5.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glEndQuery.xhtml"]{glEndQuery manpage}.
}
@defproc[(glEndQueryARB (target exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/occlusion_query.txt"]{@racket[GL_ARB_occlusion_query]}.

Alias of @racket[glEndQuery].
}
@defproc[(glEndQueryIndexed (target exact-integer?) (index exact-nonnegative-integer?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glEndQueryIndexed.xhtml"]{glEndQueryIndexed manpage}.
}
@defproc[(glEndTransformFeedback) any]{
Version 3.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glEndTransformFeedback.xhtml"]{glEndTransformFeedback manpage}.
}
@defproc[(glEndTransformFeedbackEXT) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/transform_feedback.txt"]{@racket[GL_EXT_transform_feedback]}.

Alias of @racket[glEndTransformFeedback].
}
@defproc[(glEndTransformFeedbackNV) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/transform_feedback.txt"]{@racket[GL_NV_transform_feedback]}.

Alias of @racket[glEndTransformFeedback].
}
@defproc[(glEndVertexShaderEXT) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/vertex_shader.txt"]{@racket[GL_EXT_vertex_shader]}.
}
@defproc[(glEndVideoCaptureNV (video_capture_slot exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/video_capture.txt"]{@racket[GL_NV_video_capture]}.
}
@defproc[(glEvalCoord1d (u real?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEvalCoord.xhtml"]{glEvalCoord manpage}.
}
@defproc[(glEvalCoord1dv (u real?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEvalCoord.xhtml"]{glEvalCoord manpage}.
}
@defproc[(glEvalCoord1f (u flonum?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEvalCoord.xhtml"]{glEvalCoord manpage}.
}
@defproc[(glEvalCoord1fv (u flonum?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEvalCoord.xhtml"]{glEvalCoord manpage}.
}
@defproc[(glEvalCoord2d (u real?) (v real?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEvalCoord.xhtml"]{glEvalCoord manpage}.
}
@defproc[(glEvalCoord2dv (u f64vector?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEvalCoord.xhtml"]{glEvalCoord manpage}.
}
@defproc[(glEvalCoord2f (u flonum?) (v flonum?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEvalCoord.xhtml"]{glEvalCoord manpage}.
}
@defproc[(glEvalCoord2fv (u f32vector?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glEvalCoord.xhtml"]{glEvalCoord manpage}.
}
@defproc[(glEvalMapsNV (target exact-integer?) (mode exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/evaluators.txt"]{@racket[GL_NV_evaluators]}.
}
@defproc[(glEvalMesh1 (mode exact-integer?) (i1 exact-integer?) (i2 exact-integer?)) any]{
Deprecated in version 3.1.
}
@defproc[(glEvalMesh2 (mode exact-integer?) (i1 exact-integer?) (i2 exact-integer?) (j1 exact-integer?) (j2 exact-integer?)) any]{
Deprecated in version 3.1.
}
@defproc[(glEvalPoint1 (i exact-integer?)) any]{
Deprecated in version 3.1.
}
@defproc[(glEvalPoint2 (i exact-integer?) (j exact-integer?)) any]{
Deprecated in version 3.1.
}
@defproc[(glExecuteProgramNV (target exact-integer?) (id exact-nonnegative-integer?) (params f32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/vertex_program.txt"]{@racket[GL_NV_vertex_program]}.
}
@defproc[(glExtractComponentEXT (res exact-nonnegative-integer?) (src exact-nonnegative-integer?) (num exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/vertex_shader.txt"]{@racket[GL_EXT_vertex_shader]}.
}
