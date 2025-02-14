#lang scribble/manual
@title{glO...}
@defproc[(glObjectLabel (identifier exact-integer?) (name exact-nonnegative-integer?) (length exact-integer?) (label (or/c string? bytes?))) any]{
Version 4.3.
}
@defproc[(glObjectPtrLabel (ptr gl-pointer?) (length exact-integer?) (label (or/c string? bytes?))) any]{
Version 4.3.
}
@defproc[(glObjectPurgeableAPPLE (objectType exact-integer?) (name exact-nonnegative-integer?) (option exact-integer?)) exact-integer?]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/APPLE/object_purgeable.txt"]{@racket[GL_APPLE_object_purgeable]}.
}
@defproc[(glObjectUnpurgeableAPPLE (objectType exact-integer?) (name exact-nonnegative-integer?) (option exact-integer?)) exact-integer?]{
Extension @hyperlink["https://www.khronos.org/registry/OpenGL/extensions/APPLE/object_purgeable.txt"]{@racket[GL_APPLE_object_purgeable]}.
}
@defproc[(glOrtho (left real?) (right real?) (bottom real?) (top real?) (zNear real?) (zFar real?)) any]{
Deprecated in version 3.1.

See the @hyperlink["https://www.khronos.org/sdk/docs/man2/html/glOrtho.xhtml"]{glOrtho manpage}.
}
