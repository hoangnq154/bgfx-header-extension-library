static const uint8_t vs_atmosphere_frag_bin_glsl[] = {
  0x56, 0x53, 0x48, 0x05, 0x81, 0x1b, 0x1a, 0x54, 0x03, 0x00, 0x0b, 0x75, 0x5f, 0x6d, 0x6f, 0x64,  // VSH....T...u_mod
  0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d,  // elView.......u_m
  0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00,  // odelViewProj....
  0x01, 0x00, 0x11, 0x75, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x50, 0x6f, 0x73, 0x41, 0x6e, 0x64,  // ...u_worldPosAnd
  0x53, 0x69, 0x7a, 0x65, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x28, 0x02, 0x00, 0x00, 0x61, 0x74,  // Size......(...at
  0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70,  // tribute vec3 a_p
  0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67,  // osition;.varying
  0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a,  //  vec3 v_normal;.
  0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x74,  // varying vec3 v_t
  0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20,  // angent;.uniform 
  0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77,  // mat4 u_modelView
  0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75,  // ;.uniform mat4 u
  0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a,  // _modelViewProj;.
  0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x77,  // uniform vec4 u_w
  0x6f, 0x72, 0x6c, 0x64, 0x50, 0x6f, 0x73, 0x41, 0x6e, 0x64, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a,  // orldPosAndSize;.
  0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20,  // void main ().{. 
  0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b,  //  float tmpvar_1;
  0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x31,  // .  tmpvar_1 = (1
  0x2e, 0x30, 0x32, 0x35, 0x36, 0x34, 0x31, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x77, 0x6f, 0x72, 0x6c,  // .025641 * u_worl
  0x64, 0x50, 0x6f, 0x73, 0x41, 0x6e, 0x64, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x77, 0x29, 0x3b, 0x0a,  // dPosAndSize.w);.
  0x20, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f,  //   v_normal = (u_
  0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x20, 0x2a, 0x20, 0x76, 0x65, 0x63, 0x34,  // modelView * vec4
  0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20,  // (0.0, 0.0, 0.0, 
  0x31, 0x2e, 0x30, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63,  // 1.0)).xyz;.  vec
  0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d,  // 4 tmpvar_2;.  tm
  0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a,  // pvar_2.w = 1.0;.
  0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d,  //   tmpvar_2.xyz =
  0x20, 0x28, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x2a, 0x20, 0x74,  //  (a_position * t
  0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x61,  // mpvar_1);.  v_ta
  0x6e, 0x67, 0x65, 0x6e, 0x74, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c,  // ngent = (u_model
  0x56, 0x69, 0x65, 0x77, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29,  // View * tmpvar_2)
  0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70,  // .xyz;.  vec4 tmp
  0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f,  // var_3;.  tmpvar_
  0x33, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70,  // 3.w = 1.0;.  tmp
  0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x70,  // var_3.xyz = (a_p
  0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72,  // osition * tmpvar
  0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69,  // _1);.  gl_Positi
  0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65,  // on = (u_modelVie
  0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33,  // wProj * tmpvar_3
  0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00 };                                                      //  tmpvar_3);.}...
unsigned int vs_atmosphere_frag_bin_glsl_size = 631;

BX_UNUSED(vs_atmosphere_frag_bin_glsl)
BX_UNUSED(vs_atmosphere_frag_bin_glsl_size)
static const uint8_t vs_atmosphere_frag_bin_dx9[] = {
  0x56, 0x53, 0x48, 0x05, 0x81, 0x1b, 0x1a, 0x54, 0x03, 0x00, 0x0b, 0x75, 0x5f, 0x6d, 0x6f, 0x64,  // VSH....T...u_mod
  0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0f, 0x75, 0x5f, 0x6d,  // elView.......u_m
  0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x40, 0x00,  // odelViewProj..@.
  0x04, 0x00, 0x11, 0x75, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x50, 0x6f, 0x73, 0x41, 0x6e, 0x64,  // ...u_worldPosAnd
  0x53, 0x69, 0x7a, 0x65, 0x02, 0x00, 0x80, 0x00, 0x01, 0x00, 0xa8, 0x02, 0x00, 0x00, 0x44, 0x58,  // Size..........DX
  0x42, 0x43, 0x27, 0x48, 0xc6, 0x39, 0x32, 0x5d, 0xdd, 0x38, 0x82, 0xb0, 0x7c, 0xef, 0xd1, 0xe5,  // BC'H.92].8..|...
  0x74, 0x54, 0x01, 0x00, 0x00, 0x00, 0xa8, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00,  // tT............,.
  0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x2c, 0x00,  // ..`.......ISGN,.
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,  // .......... .....
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07,  // ................
  0x00, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0xab, 0xab, 0xab, 0x4f, 0x53,  // ..POSITION....OS
  0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00,  // GNl...........P.
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x63, 0x00,  // ..............c.
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00,  // ................
  0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f,  // ......SV_POSITIO
  0x4e, 0x00, 0x4e, 0x4f, 0x52, 0x4d, 0x41, 0x4c, 0x00, 0x54, 0x41, 0x4e, 0x47, 0x45, 0x4e, 0x54,  // N.NORMAL.TANGENT
  0x00, 0xab, 0x53, 0x48, 0x44, 0x52, 0xcc, 0x01, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x73, 0x00,  // ..SHDR....@...s.
  0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00,  // ..Y...F. .......
  0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00,  // .._...r.......g.
  0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00,  // ... ..........e.
  0x00, 0x03, 0x72, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x72, 0x20,  // ..r ......e...r 
  0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00,  // ......h.......8.
  0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x80, 0x20, 0x00, 0x00, 0x00,  // ..........:. ...
  0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x35, 0x48, 0x83, 0x3f, 0x38, 0x00,  // .......@..5H.?8.
  0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00,  // ..r.............
  0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00,  // ..F.......8.....
  0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e,  // ......V.......F.
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00,  //  .........2.....
  0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,  // ......F. .......
  0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00,  // ..........F.....
  0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e,  // ..2...........F.
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00,  //  ...............
  0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20,  // ..F............ 
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e,  // ......F.......F.
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x72, 0x20,  //  .........6...r 
  0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // ......F. .......
  0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05,  // ..8...r.......V.
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,  // ......F. .......
  0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xb2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x88,  // ..2...........F.
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00,  //  ...............
  0x00, 0x00, 0x46, 0x08, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00,  // ..F.......2...r.
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,  // ......F. .......
  0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x03, 0x10, 0x00, 0x00, 0x00,  // ..........F.....
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x72, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02,  // ......r ......F.
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // ......F. .......
  0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x90, 0x00 };                        // ......>.........
unsigned int vs_atmosphere_frag_bin_dx9_size = 764;

BX_UNUSED(vs_atmosphere_frag_bin_dx9)
BX_UNUSED(vs_atmosphere_frag_bin_dx9_size)
static const uint8_t vs_atmosphere_frag_bin_dx11[] = {
  0x56, 0x53, 0x48, 0x05, 0x81, 0x1b, 0x1a, 0x54, 0x03, 0x00, 0x0b, 0x75, 0x5f, 0x6d, 0x6f, 0x64,  // VSH....T...u_mod
  0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0f, 0x75, 0x5f, 0x6d,  // elView.......u_m
  0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x40, 0x00,  // odelViewProj..@.
  0x04, 0x00, 0x11, 0x75, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x50, 0x6f, 0x73, 0x41, 0x6e, 0x64,  // ...u_worldPosAnd
  0x53, 0x69, 0x7a, 0x65, 0x02, 0x00, 0x80, 0x00, 0x01, 0x00, 0xa8, 0x02, 0x00, 0x00, 0x44, 0x58,  // Size..........DX
  0x42, 0x43, 0x27, 0x48, 0xc6, 0x39, 0x32, 0x5d, 0xdd, 0x38, 0x82, 0xb0, 0x7c, 0xef, 0xd1, 0xe5,  // BC'H.92].8..|...
  0x74, 0x54, 0x01, 0x00, 0x00, 0x00, 0xa8, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00,  // tT............,.
  0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x2c, 0x00,  // ..`.......ISGN,.
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,  // .......... .....
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07,  // ................
  0x00, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0xab, 0xab, 0xab, 0x4f, 0x53,  // ..POSITION....OS
  0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00,  // GNl...........P.
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x63, 0x00,  // ..............c.
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00,  // ................
  0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f,  // ......SV_POSITIO
  0x4e, 0x00, 0x4e, 0x4f, 0x52, 0x4d, 0x41, 0x4c, 0x00, 0x54, 0x41, 0x4e, 0x47, 0x45, 0x4e, 0x54,  // N.NORMAL.TANGENT
  0x00, 0xab, 0x53, 0x48, 0x44, 0x52, 0xcc, 0x01, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x73, 0x00,  // ..SHDR....@...s.
  0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00,  // ..Y...F. .......
  0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00,  // .._...r.......g.
  0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00,  // ... ..........e.
  0x00, 0x03, 0x72, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x72, 0x20,  // ..r ......e...r 
  0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00,  // ......h.......8.
  0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x80, 0x20, 0x00, 0x00, 0x00,  // ..........:. ...
  0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x35, 0x48, 0x83, 0x3f, 0x38, 0x00,  // .......@..5H.?8.
  0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00,  // ..r.............
  0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00,  // ..F.......8.....
  0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e,  // ......V.......F.
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00,  //  .........2.....
  0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,  // ......F. .......
  0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00,  // ..........F.....
  0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e,  // ..2...........F.
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00,  //  ...............
  0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20,  // ..F............ 
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e,  // ......F.......F.
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x72, 0x20,  //  .........6...r 
  0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // ......F. .......
  0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05,  // ..8...r.......V.
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,  // ......F. .......
  0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xb2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x88,  // ..2...........F.
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00,  //  ...............
  0x00, 0x00, 0x46, 0x08, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00,  // ..F.......2...r.
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,  // ......F. .......
  0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x03, 0x10, 0x00, 0x00, 0x00,  // ..........F.....
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x72, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02,  // ......r ......F.
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // ......F. .......
  0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x00, 0x90, 0x00 };                        // ......>.........
unsigned int vs_atmosphere_frag_bin_dx11_size = 764;

BX_UNUSED(vs_atmosphere_frag_bin_dx11)
BX_UNUSED(vs_atmosphere_frag_bin_dx11_size)
static const uint8_t vs_atmosphere_frag_bin_metal[] = {
  0x56, 0x53, 0x48, 0x05, 0x81, 0x1b, 0x1a, 0x54, 0x03, 0x00, 0x0b, 0x75, 0x5f, 0x6d, 0x6f, 0x64,  // VSH....T...u_mod
  0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d,  // elView.......u_m
  0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00,  // odelViewProj....
  0x01, 0x00, 0x11, 0x75, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x50, 0x6f, 0x73, 0x41, 0x6e, 0x64,  // ...u_worldPosAnd
  0x53, 0x69, 0x7a, 0x65, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0xb5, 0x03, 0x00, 0x00, 0x75, 0x73,  // Size..........us
  0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65,  // ing namespace me
  0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74,  // tal;.struct xlat
  0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b,  // MtlShaderInput {
  0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69,  // .  float3 a_posi
  0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65,  // tion [[attribute
  0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74,  // (0)]];.};.struct
  0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75,  //  xlatMtlShaderOu
  0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20,  // tput {.  float4 
  0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f,  // gl_Position [[po
  0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61,  // sition]];.  floa
  0x74, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x20, 0x20, 0x66,  // t3 v_normal;.  f
  0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b,  // loat3 v_tangent;
  0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d,  // .};.struct xlatM
  0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20,  // tlShaderUniform 
  0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d,  // {.  float4x4 u_m
  0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61,  // odelView;.  floa
  0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77,  // t4x4 u_modelView
  0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75,  // Proj;.  float4 u
  0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x50, 0x6f, 0x73, 0x41, 0x6e, 0x64, 0x53, 0x69, 0x7a, 0x65,  // _worldPosAndSize
  0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74,  // ;.};.vertex xlat
  0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20,  // MtlShaderOutput 
  0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61,  // xlatMtlMain (xla
  0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20,  // tMtlShaderInput 
  0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69,  // _mtl_i [[stage_i
  0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c,  // n]], constant xl
  0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f,  // atMtlShaderUnifo
  0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66,  // rm& _mtl_u [[buf
  0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c,  // fer(0)]]).{.  xl
  0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75,  // atMtlShaderOutpu
  0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61,  // t _mtl_o;.  floa
  0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a,  // t tmpvar_1 = 0;.
  0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x31, 0x2e,  //   tmpvar_1 = (1.
  0x30, 0x32, 0x35, 0x36, 0x34, 0x31, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e,  // 025641 * _mtl_u.
  0x75, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x50, 0x6f, 0x73, 0x41, 0x6e, 0x64, 0x53, 0x69, 0x7a,  // u_worldPosAndSiz
  0x65, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x76,  // e.w);.  _mtl_o.v
  0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f,  // _normal = (_mtl_
  0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x20, 0x2a, 0x20,  // u.u_modelView * 
  0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c,  // float4(0.0, 0.0,
  0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b,  //  0.0, 1.0)).xyz;
  0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72,  // .  float4 tmpvar
  0x5f, 0x32, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72,  // _2 = 0;.  tmpvar
  0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d,  // _2.w = 1.0;.  tm
  0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d,  // pvar_2.xyz = (_m
  0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20,  // tl_i.a_position 
  0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x5f,  // * tmpvar_1);.  _
  0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x20,  // mtl_o.v_tangent 
  0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65,  // = (_mtl_u.u_mode
  0x6c, 0x56, 0x69, 0x65, 0x77, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32,  // lView * tmpvar_2
  0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20,  // ).xyz;.  float4 
  0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20,  // tmpvar_3 = 0;.  
  0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30,  // tmpvar_3.w = 1.0
  0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x78, 0x79, 0x7a,  // ;.  tmpvar_3.xyz
  0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73,  //  = (_mtl_i.a_pos
  0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31,  // ition * tmpvar_1
  0x29, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x50,  // );.  _mtl_o.gl_P
  0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f,  // osition = (_mtl_
  0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f,  // u.u_modelViewPro
  0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x3b, 0x0a, 0x20,  // j * tmpvar_3);. 
  0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a,  //  return _mtl_o;.
  0x7d, 0x0a, 0x0a, 0x00 };                                                                        // urn _mtl_o;.}...
unsigned int vs_atmosphere_frag_bin_metal_size = 1028;

BX_UNUSED(vs_atmosphere_frag_bin_metal)
BX_UNUSED(vs_atmosphere_frag_bin_metal_size)
static const uint8_t vs_atmosphere_frag_bin_spirv[] = {
  0x56, 0x53, 0x48, 0x05, 0x81, 0x1b, 0x1a, 0x54, 0x03, 0x00, 0x11, 0x75, 0x5f, 0x77, 0x6f, 0x72,  // VSH....T...u_wor
  0x6c, 0x64, 0x50, 0x6f, 0x73, 0x41, 0x6e, 0x64, 0x53, 0x69, 0x7a, 0x65, 0x02, 0x01, 0x80, 0x00,  // ldPosAndSize....
  0x01, 0x00, 0x0b, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x04, 0x01,  // ...u_modelView..
  0x00, 0x00, 0x04, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77,  // .....u_modelView
  0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x40, 0x00, 0x04, 0x00, 0xa4, 0x06, 0x00, 0x00, 0x03, 0x02,  // Proj..@.........
  0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00,  // #...............
  0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00,  // ................
  0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00,  // ..GLSL.std.450..
  0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00,  // ................
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00,  // ..........main..
  0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x61, 0x00,  // ..S...Z...^...a.
  0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00,  // ................
  0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00,  // ......main......
  0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00,  // ......$Global...
  0x06, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65,  // ..........u_mode
  0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x01, 0x00,  // lView...........
  0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f,  // ..u_modelViewPro
  0x6a, 0x00, 0x06, 0x00, 0x08, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f,  // j.............u_
  0x77, 0x6f, 0x72, 0x6c, 0x64, 0x50, 0x6f, 0x73, 0x41, 0x6e, 0x64, 0x53, 0x69, 0x7a, 0x65, 0x00,  // worldPosAndSize.
  0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00,  // ................
  0x05, 0x00, 0x53, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e,  // ..S...a_position
  0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79,  // ......Z...@entry
  0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50,  // PointOutput.gl_P
  0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x09, 0x00, 0x5e, 0x00,  // osition.......^.
  0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74,  // ..@entryPointOut
  0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x00, 0x00, 0x05, 0x00,  // put.v_normal....
  0x09, 0x00, 0x61, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e,  // ..a...@entryPoin
  0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e,  // tOutput.v_tangen
  0x74, 0x00, 0x48, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,  // t.H.............
  0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00,  // ..H...........#.
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00,  // ......H.........
  0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x1d, 0x00,  // ..........H.....
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1d, 0x00,  // ..........H.....
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x48, 0x00,  // ......#...@...H.
  0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00,  // ................
  0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00,  // ..H...........#.
  0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x02, 0x00,  // ......G.........
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..G.......".....
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x53, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..G...S.........
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..G...Z.........
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..G...^.........
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x61, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00,  // ..G...a.........
  0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00,  // ..........!.....
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00,  // .............. .
  0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00,  // ................
  0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00,  // ................
  0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x11, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00,  // .......... .....
  0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00,  // ..+.............
  0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..+.............
  0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..+.............
  0x80, 0x3f, 0x2b, 0x00, 0x04, 0x00, 0x11, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x02, 0x00,  // .?+.............
  0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00,  // ................
  0x00, 0x00, 0x1e, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00,  // ................
  0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x02, 0x00,  // ...... .........
  0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1f, 0x00,  // ......;.........
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00,  // .......... ... .
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x21, 0x00,  // ......+... ...!.
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x02, 0x00,  // ...... ...".....
  0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x26, 0x00,  // ......+.......&.
  0x00, 0x00, 0x35, 0x48, 0x83, 0x3f, 0x2c, 0x00, 0x07, 0x00, 0x09, 0x00, 0x00, 0x00, 0x29, 0x00,  // ..5H.?,.......).
  0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0x00,  // ................
  0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x11, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..+.......*.....
  0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00,  // .. ...+.........
  0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x52, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00,  // .. ...R.........
  0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x52, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x01, 0x00,  // ..;...R...S.....
  0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x59, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x09, 0x00,  // .. ...Y.........
  0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x59, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x03, 0x00,  // ..;...Y...Z.....
  0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00,  // .. ...].........
  0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x03, 0x00,  // ..;...]...^.....
  0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x03, 0x00,  // ..;...]...a.....
  0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..6.............
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00,  // ..............=.
  0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x41, 0x00,  // ......T...S...A.
  0x06, 0x00, 0x22, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x17, 0x00,  // .."...z.........
  0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x7b, 0x00,  // ..!...=.......{.
  0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x7d, 0x00,  // ..z...........}.
  0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x2b, 0x00,  // ..&...{...A...+.
  0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x3d, 0x00,  // ..~.......*...=.
  0x04, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x90, 0x00,  // ..........~.....
  0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x7f, 0x00,  // ..........).....
  0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x80, 0x00,  // ..O.............
  0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00,  // ................
  0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x54, 0x00,  // ..............T.
  0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x86, 0x00,  // ..}...Q.........
  0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00,  // ..........Q.....
  0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00,  // ..............Q.
  0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x02, 0x00,  // ................
  0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x09, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x86, 0x00,  // ..P.............
  0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x41, 0x00,  // ..............A.
  0x05, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x2a, 0x00,  // ..+...........*.
  0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x8a, 0x00,  // ..=.............
  0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x89, 0x00,  // ................
  0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x00, 0x8d, 0x00,  // ......O.........
  0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,  // ................
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x91, 0x00,  // ................
  0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00,  // ..T...}...Q.....
  0x00, 0x00, 0x92, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00,  // ..............Q.
  0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, 0x01, 0x00,  // ................
  0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x91, 0x00,  // ..Q.............
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x09, 0x00, 0x00, 0x00, 0x95, 0x00,  // ......P.........
  0x00, 0x00, 0x92, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x14, 0x00,  // ................
  0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x1f, 0x00,  // ..A...+.........
  0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x97, 0x00,  // ......=.........
  0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x98, 0x00,  // ................
  0x00, 0x00, 0x95, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00,  // ..........Q.....
  0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7f, 0x00,  // ................
  0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x52, 0x00,  // ..............R.
  0x06, 0x00, 0x09, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x98, 0x00,  // ................
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x5a, 0x00, 0x00, 0x00, 0xbb, 0x00,  // ......>...Z.....
  0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x3e, 0x00,  // ..>...^.......>.
  0x03, 0x00, 0x61, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00,  // ..a...........8.
  0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x90, 0x00 };                                                // ......8.........
unsigned int vs_atmosphere_frag_bin_spirv_size = 1784;

BX_UNUSED(vs_atmosphere_frag_bin_spirv)
BX_UNUSED(vs_atmosphere_frag_bin_spirv_size)
static const uint8_t * vs_atmosphere_frag_bin_esslandroid = NULL;
unsigned int vs_atmosphere_frag_bin_esslandroid_size = 0;

BX_UNUSED(vs_atmosphere_frag_bin_esslandroid)
BX_UNUSED(vs_atmosphere_frag_bin_esslandroid_size)
static const uint8_t * vs_atmosphere_frag_bin_pssl = NULL;
unsigned int vs_atmosphere_frag_bin_pssl_size = 0;

BX_UNUSED(vs_atmosphere_frag_bin_pssl)
BX_UNUSED(vs_atmosphere_frag_bin_pssl_size)
static const uint8_t * vs_atmosphere_frag_bin_esslnacl = NULL;
unsigned int vs_atmosphere_frag_bin_esslnacl_size = 0;

BX_UNUSED(vs_atmosphere_frag_bin_esslnacl)
BX_UNUSED(vs_atmosphere_frag_bin_esslnacl_size)