#lang scribble/manual
@title{glD...}
@defproc[(glDebugMessageControl (source exact-integer?) (type exact-integer?) (severity exact-integer?) (count exact-integer?) (ids u32vector?) (enabled boolean?)) any]{
Version 4.3.
}
@defproc[(glDebugMessageControlARB (source exact-integer?) (type exact-integer?) (severity exact-integer?) (count exact-integer?) (ids u32vector?) (enabled boolean?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/debug_output.txt"]{@racket[GL_ARB_debug_output]}.
}
@defproc[(glDebugMessageEnableAMD (category exact-integer?) (severity exact-integer?) (count exact-integer?) (ids u32vector?) (enabled boolean?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/AMD/debug_output.txt"]{@racket[GL_AMD_debug_output]}.
}
@defproc[(glDebugMessageInsert (source exact-integer?) (type exact-integer?) (id exact-nonnegative-integer?) (severity exact-integer?) (length exact-integer?) (buf (or/c string? bytes?))) any]{
Version 4.3.
}
@defproc[(glDebugMessageInsertAMD (category exact-integer?) (severity exact-integer?) (id exact-nonnegative-integer?) (length exact-integer?) (buf (or/c string? bytes?))) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/AMD/debug_output.txt"]{@racket[GL_AMD_debug_output]}.
}
@defproc[(glDebugMessageInsertARB (source exact-integer?) (type exact-integer?) (id exact-nonnegative-integer?) (severity exact-integer?) (length exact-integer?) (buf (or/c string? bytes?))) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/debug_output.txt"]{@racket[GL_ARB_debug_output]}.
}
@defproc[(glDeformSGIX (mask exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/polynomial_ffd.txt"]{@racket[GL_SGIX_polynomial_ffd]}.
}
@defproc[(glDeformationMap3dSGIX (target exact-integer?) (u1 real?) (u2 real?) (ustride exact-integer?) (uorder exact-integer?) (v1 real?) (v2 real?) (vstride exact-integer?) (vorder exact-integer?) (w1 real?) (w2 real?) (wstride exact-integer?) (worder exact-integer?) (points f64vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/polynomial_ffd.txt"]{@racket[GL_SGIX_polynomial_ffd]}.
}
@defproc[(glDeformationMap3fSGIX (target exact-integer?) (u1 flonum?) (u2 flonum?) (ustride exact-integer?) (uorder exact-integer?) (v1 flonum?) (v2 flonum?) (vstride exact-integer?) (vorder exact-integer?) (w1 flonum?) (w2 flonum?) (wstride exact-integer?) (worder exact-integer?) (points f32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/polynomial_ffd.txt"]{@racket[GL_SGIX_polynomial_ffd]}.
}
@defproc[(glDeleteAsyncMarkersSGIX (marker exact-nonnegative-integer?) (range exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIX/async.txt"]{@racket[GL_SGIX_async]}.
}
@defproc[(glDeleteBuffers (n exact-integer?) (buffers u32vector?)) any]{
Version 1.5.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteBuffers.xhtml"]{glDeleteBuffers manpage}.
}
@defproc[(glDeleteBuffersARB (n exact-integer?) (buffers u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/vertex_buffer_object.txt"]{@racket[GL_ARB_vertex_buffer_object]}.

Alias of @racket[glDeleteBuffers].
}
@defproc[(glDeleteFencesAPPLE (n exact-integer?) (fences u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/APPLE/fence.txt"]{@racket[GL_APPLE_fence]}.
}
@defproc[(glDeleteFencesNV (n exact-integer?) (fences u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/fence.txt"]{@racket[GL_NV_fence]}.
}
@defproc[(glDeleteFragmentShaderATI (id exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ATI/fragment_shader.txt"]{@racket[GL_ATI_fragment_shader]}.
}
@defproc[(glDeleteFramebuffers (n exact-integer?) (framebuffers u32vector?)) any]{
Version 3.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteFramebuffers.xhtml"]{glDeleteFramebuffers manpage}.
}
@defproc[(glDeleteFramebuffersEXT (n exact-integer?) (framebuffers u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/framebuffer_object.txt"]{@racket[GL_EXT_framebuffer_object]}.

Alias of @racket[glDeleteFramebuffers].
}
@defproc[(glDeleteLists (list exact-nonnegative-integer?) (range exact-integer?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glDeleteLists.xhtml"]{glDeleteLists manpage}.
}
@defproc[(glDeleteNamedStringARB (namelen exact-integer?) (name (or/c string? bytes?))) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/shading_language_include.txt"]{@racket[GL_ARB_shading_language_include]}.
}
@defproc[(glDeleteNamesAMD (identifier exact-integer?) (num exact-nonnegative-integer?) (names u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/AMD/name_gen_delete.txt"]{@racket[GL_AMD_name_gen_delete]}.
}
@defproc[(glDeleteObjectARB (obj exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/shader_objects.txt"]{@racket[GL_ARB_shader_objects]}.
}
@defproc[(glDeleteOcclusionQueriesNV (n exact-integer?) (ids u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/occlusion_query.txt"]{@racket[GL_NV_occlusion_query]}.
}
@defproc[(glDeletePathsNV (path exact-nonnegative-integer?) (range exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/path_rendering.txt"]{@racket[GL_NV_path_rendering]}.
}
@defproc[(glDeletePerfMonitorsAMD (n exact-integer?) (monitors u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/AMD/performance_monitor.txt"]{@racket[GL_AMD_performance_monitor]}.
}
@defproc[(glDeleteProgram (program exact-nonnegative-integer?)) any]{
Version 2.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteProgram.xhtml"]{glDeleteProgram manpage}.
}
@defproc[(glDeleteProgramPipelines (n exact-integer?) (pipelines u32vector?)) any]{
Version 4.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteProgramPipelines.xhtml"]{glDeleteProgramPipelines manpage}.
}
@defproc[(glDeleteProgramsARB (n exact-integer?) (programs u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/vertex_program.txt"]{@racket[GL_ARB_vertex_program]}.
}
@defproc[(glDeleteProgramsNV (n exact-integer?) (programs u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/vertex_program.txt"]{@racket[GL_NV_vertex_program]}.

Alias of @racket[glDeleteProgramsARB].
}
@defproc[(glDeleteQueries (n exact-integer?) (ids u32vector?)) any]{
Version 1.5.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteQueries.xhtml"]{glDeleteQueries manpage}.
}
@defproc[(glDeleteQueriesARB (n exact-integer?) (ids u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/occlusion_query.txt"]{@racket[GL_ARB_occlusion_query]}.

Alias of @racket[glDeleteQueries].
}
@defproc[(glDeleteRenderbuffers (n exact-integer?) (renderbuffers u32vector?)) any]{
Version 3.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteRenderbuffers.xhtml"]{glDeleteRenderbuffers manpage}.
}
@defproc[(glDeleteRenderbuffersEXT (n exact-integer?) (renderbuffers u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/framebuffer_object.txt"]{@racket[GL_EXT_framebuffer_object]}.

Alias of @racket[glDeleteRenderbuffers].
}
@defproc[(glDeleteSamplers (count exact-integer?) (samplers u32vector?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteSamplers.xhtml"]{glDeleteSamplers manpage}.
}
@defproc[(glDeleteShader (shader exact-nonnegative-integer?)) any]{
Version 2.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteShader.xhtml"]{glDeleteShader manpage}.
}
@defproc[(glDeleteSync (sync GLsync?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteSync.xhtml"]{glDeleteSync manpage}.
}
@defproc[(glDeleteTextures (n exact-integer?) (textures u32vector?)) any]{
Version 1.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteTextures.xhtml"]{glDeleteTextures manpage}.
}
@defproc[(glDeleteTexturesEXT (n exact-integer?) (textures u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/texture_object.txt"]{@racket[GL_EXT_texture_object]}.
}
@defproc[(glDeleteTransformFeedbacks (n exact-integer?) (ids u32vector?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteTransformFeedbacks.xhtml"]{glDeleteTransformFeedbacks manpage}.
}
@defproc[(glDeleteTransformFeedbacksNV (n exact-integer?) (ids u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/transform_feedback2.txt"]{@racket[GL_NV_transform_feedback2]}.
}
@defproc[(glDeleteVertexArrays (n exact-integer?) (arrays u32vector?)) any]{
Version 3.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDeleteVertexArrays.xhtml"]{glDeleteVertexArrays manpage}.
}
@defproc[(glDeleteVertexArraysAPPLE (n exact-integer?) (arrays u32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/APPLE/vertex_array_object.txt"]{@racket[GL_APPLE_vertex_array_object]}.

Alias of @racket[glDeleteVertexArrays].
}
@defproc[(glDeleteVertexShaderEXT (id exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/vertex_shader.txt"]{@racket[GL_EXT_vertex_shader]}.
}
@defproc[(glDepthBoundsEXT (zmin real?) (zmax real?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/depth_bounds_test.txt"]{@racket[GL_EXT_depth_bounds_test]}.
}
@defproc[(glDepthBoundsdNV (zmin real?) (zmax real?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/depth_buffer_float.txt"]{@racket[GL_NV_depth_buffer_float]}.
}
@defproc[(glDepthFunc (func exact-integer?)) any]{

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDepthFunc.xhtml"]{glDepthFunc manpage}.
}
@defproc[(glDepthMask (flag boolean?)) any]{

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDepthMask.xhtml"]{glDepthMask manpage}.
}
@defproc[(glDepthRange (near real?) (far real?)) any]{

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDepthRange.xhtml"]{glDepthRange manpage}.
}
@defproc[(glDepthRangeArrayv (first exact-nonnegative-integer?) (count exact-integer?) (v f64vector?)) any]{
Version 4.1.
}
@defproc[(glDepthRangeIndexed (index exact-nonnegative-integer?) (n real?) (f real?)) any]{
Version 4.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDepthRangeIndexed.xhtml"]{glDepthRangeIndexed manpage}.
}
@defproc[(glDepthRangedNV (zNear real?) (zFar real?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/depth_buffer_float.txt"]{@racket[GL_NV_depth_buffer_float]}.
}
@defproc[(glDepthRangef (n flonum?) (f flonum?)) any]{
Version 4.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDepthRange.xhtml"]{glDepthRange manpage}.
}
@defproc[(glDetachObjectARB (containerObj exact-nonnegative-integer?) (attachedObj exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/shader_objects.txt"]{@racket[GL_ARB_shader_objects]}.

Alias of @racket[glDetachShader].
}
@defproc[(glDetachShader (program exact-nonnegative-integer?) (shader exact-nonnegative-integer?)) any]{
Version 2.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDetachShader.xhtml"]{glDetachShader manpage}.
}
@defproc[(glDetailTexFuncSGIS (target exact-integer?) (n exact-integer?) (points f32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SGIS/detail_texture.txt"]{@racket[GL_SGIS_detail_texture]}.
}
@defproc[(glDisable (cap exact-integer?)) any]{

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDisable.xhtml"]{glDisable manpage}.
}
@defproc[(glDisableClientState (array exact-integer?)) any]{
Version 1.1.
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glDisableClientState.xhtml"]{glDisableClientState manpage}.
}
@defproc[(glDisableClientStateIndexedEXT (array exact-integer?) (index exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/direct_state_access.txt"]{@racket[GL_EXT_direct_state_access]}.
}
@defproc[(glDisableIndexedEXT (target exact-integer?) (index exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/draw_buffers2.txt"]{@racket[GL_EXT_draw_buffers2]}.

Alias of @racket[glDisablei].
}
@defproc[(glDisableVariantClientStateEXT (id exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/vertex_shader.txt"]{@racket[GL_EXT_vertex_shader]}.
}
@defproc[(glDisableVertexAttribAPPLE (index exact-nonnegative-integer?) (pname exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/APPLE/vertex_program_evaluators.txt"]{@racket[GL_APPLE_vertex_program_evaluators]}.
}
@defproc[(glDisableVertexAttribArray (index exact-nonnegative-integer?)) any]{
Version 2.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDisableVertexAttribArray.xhtml"]{glDisableVertexAttribArray manpage}.
}
@defproc[(glDisableVertexAttribArrayARB (index exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/vertex_program.txt"]{@racket[GL_ARB_vertex_program]}.

Alias of @racket[glDisableVertexAttribArray].
}
@defproc[(glDisablei (target exact-integer?) (index exact-nonnegative-integer?)) any]{
Version 3.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDisable.xhtml"]{glDisable manpage}.
}
@defproc[(glDispatchCompute (num_groups_x exact-nonnegative-integer?) (num_groups_y exact-nonnegative-integer?) (num_groups_z exact-nonnegative-integer?)) any]{
Version 4.3.
}
@defproc[(glDispatchComputeIndirect (indirect exact-integer?)) any]{
Version 4.3.
}
@defproc[(glDrawArrays (mode exact-integer?) (first exact-integer?) (count exact-integer?)) any]{
Version 1.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawArrays.xhtml"]{glDrawArrays manpage}.
}
@defproc[(glDrawArraysEXT (mode exact-integer?) (first exact-integer?) (count exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/vertex_array.txt"]{@racket[GL_EXT_vertex_array]}.

Alias of @racket[glDrawArrays].
}
@defproc[(glDrawArraysIndirect (mode exact-integer?) (indirect gl-pointer?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawArraysIndirect.xhtml"]{glDrawArraysIndirect manpage}.
}
@defproc[(glDrawArraysInstanced (mode exact-integer?) (first exact-integer?) (count exact-integer?) (instancecount exact-integer?)) any]{
Version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawArraysInstanced.xhtml"]{glDrawArraysInstanced manpage}.
}
@defproc[(glDrawArraysInstancedARB (mode exact-integer?) (first exact-integer?) (count exact-integer?) (primcount exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/draw_instanced.txt"]{@racket[GL_ARB_draw_instanced]}.

Alias of @racket[glDrawArraysInstanced].
}
@defproc[(glDrawArraysInstancedBaseInstance (mode exact-integer?) (first exact-integer?) (count exact-integer?) (instancecount exact-integer?) (baseinstance exact-nonnegative-integer?)) any]{
Version 4.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawArraysInstancedBaseInstance.xhtml"]{glDrawArraysInstancedBaseInstance manpage}.
}
@defproc[(glDrawArraysInstancedEXT (mode exact-integer?) (start exact-integer?) (count exact-integer?) (primcount exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/draw_instanced.txt"]{@racket[GL_EXT_draw_instanced]}.

Alias of @racket[glDrawArraysInstancedARB].
}
@defproc[(glDrawBuffer (mode exact-integer?)) any]{

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawBuffer.xhtml"]{glDrawBuffer manpage}.
}
@defproc[(glDrawBuffers (n exact-integer?) (bufs s32vector?)) any]{
Version 2.0.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawBuffers.xhtml"]{glDrawBuffers manpage}.
}
@defproc[(glDrawBuffersARB (n exact-integer?) (bufs s32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/draw_buffers.txt"]{@racket[GL_ARB_draw_buffers]}.

Alias of @racket[glDrawBuffers].
}
@defproc[(glDrawBuffersATI (n exact-integer?) (bufs s32vector?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ATI/draw_buffers.txt"]{@racket[GL_ATI_draw_buffers]}.

Alias of @racket[glDrawBuffers].
}
@defproc[(glDrawElementArrayAPPLE (mode exact-integer?) (first exact-integer?) (count exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/APPLE/element_array.txt"]{@racket[GL_APPLE_element_array]}.
}
@defproc[(glDrawElementArrayATI (mode exact-integer?) (count exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ATI/element_array.txt"]{@racket[GL_ATI_element_array]}.
}
@defproc[(glDrawElements (mode exact-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?)) any]{
Version 1.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawElements.xhtml"]{glDrawElements manpage}.
}
@defproc[(glDrawElementsBaseVertex (mode exact-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?) (basevertex exact-integer?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawElementsBaseVertex.xhtml"]{glDrawElementsBaseVertex manpage}.
}
@defproc[(glDrawElementsIndirect (mode exact-integer?) (type exact-integer?) (indirect gl-pointer?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawElementsIndirect.xhtml"]{glDrawElementsIndirect manpage}.
}
@defproc[(glDrawElementsInstanced (mode exact-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?) (instancecount exact-integer?)) any]{
Version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawElementsInstanced.xhtml"]{glDrawElementsInstanced manpage}.
}
@defproc[(glDrawElementsInstancedARB (mode exact-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?) (primcount exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ARB/draw_instanced.txt"]{@racket[GL_ARB_draw_instanced]}.

Alias of @racket[glDrawElementsInstanced].
}
@defproc[(glDrawElementsInstancedBaseInstance (mode exact-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?) (instancecount exact-integer?) (baseinstance exact-nonnegative-integer?)) any]{
Version 4.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawElementsInstancedBaseInstance.xhtml"]{glDrawElementsInstancedBaseInstance manpage}.
}
@defproc[(glDrawElementsInstancedBaseVertex (mode exact-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?) (instancecount exact-integer?) (basevertex exact-integer?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawElementsInstancedBaseVertex.xhtml"]{glDrawElementsInstancedBaseVertex manpage}.
}
@defproc[(glDrawElementsInstancedBaseVertexBaseInstance (mode exact-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?) (instancecount exact-integer?) (basevertex exact-integer?) (baseinstance exact-nonnegative-integer?)) any]{
Version 4.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawElementsInstancedBaseVertexBaseInstance.xhtml"]{glDrawElementsInstancedBaseVertexBaseInstance manpage}.
}
@defproc[(glDrawElementsInstancedEXT (mode exact-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?) (primcount exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/draw_instanced.txt"]{@racket[GL_EXT_draw_instanced]}.

Alias of @racket[glDrawElementsInstancedARB].
}
@defproc[(glDrawMeshArraysSUN (mode exact-integer?) (first exact-integer?) (count exact-integer?) (width exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/SUN/mesh_array.txt"]{@racket[GL_SUN_mesh_array]}.
}
@defproc[(glDrawPixels (width exact-integer?) (height exact-integer?) (format exact-integer?) (type exact-integer?) (pixels gl-pointer?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glDrawPixels.xhtml"]{glDrawPixels manpage}.
}
@defproc[(glDrawRangeElementArrayAPPLE (mode exact-integer?) (start exact-nonnegative-integer?) (end exact-nonnegative-integer?) (first exact-integer?) (count exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/APPLE/element_array.txt"]{@racket[GL_APPLE_element_array]}.
}
@defproc[(glDrawRangeElementArrayATI (mode exact-integer?) (start exact-nonnegative-integer?) (end exact-nonnegative-integer?) (count exact-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/ATI/element_array.txt"]{@racket[GL_ATI_element_array]}.
}
@defproc[(glDrawRangeElements (mode exact-integer?) (start exact-nonnegative-integer?) (end exact-nonnegative-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawRangeElements.xhtml"]{glDrawRangeElements manpage}.
}
@defproc[(glDrawRangeElementsBaseVertex (mode exact-integer?) (start exact-nonnegative-integer?) (end exact-nonnegative-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?) (basevertex exact-integer?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawRangeElementsBaseVertex.xhtml"]{glDrawRangeElementsBaseVertex manpage}.
}
@defproc[(glDrawRangeElementsEXT (mode exact-integer?) (start exact-nonnegative-integer?) (end exact-nonnegative-integer?) (count exact-integer?) (type exact-integer?) (indices gl-pointer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/EXT/draw_range_elements.txt"]{@racket[GL_EXT_draw_range_elements]}.

Alias of @racket[glDrawRangeElements].
}
@defproc[(glDrawTransformFeedback (mode exact-integer?) (id exact-nonnegative-integer?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawTransformFeedback.xhtml"]{glDrawTransformFeedback manpage}.
}
@defproc[(glDrawTransformFeedbackInstanced (mode exact-integer?) (id exact-nonnegative-integer?) (instancecount exact-integer?)) any]{
Version 4.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawTransformFeedbackInstanced.xhtml"]{glDrawTransformFeedbackInstanced manpage}.
}
@defproc[(glDrawTransformFeedbackNV (mode exact-integer?) (id exact-nonnegative-integer?)) any]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/NV/transform_feedback2.txt"]{@racket[GL_NV_transform_feedback2]}.
}
@defproc[(glDrawTransformFeedbackStream (mode exact-integer?) (id exact-nonnegative-integer?) (stream exact-nonnegative-integer?)) any]{
Version 1.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawTransformFeedbackStream.xhtml"]{glDrawTransformFeedbackStream manpage}.
}
@defproc[(glDrawTransformFeedbackStreamInstanced (mode exact-integer?) (id exact-nonnegative-integer?) (stream exact-nonnegative-integer?) (instancecount exact-integer?)) any]{
Version 4.2.

See the @hyperlink["https://www.khronos.org/sdk/docs/man4/html/glDrawTransformFeedbackStreamInstanced.xhtml"]{glDrawTransformFeedbackStreamInstanced manpage}.
}
