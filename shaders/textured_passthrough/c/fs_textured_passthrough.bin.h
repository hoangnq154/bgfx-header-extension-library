static const uint8_t fs_textured_passthrough_bin_glsl[] = {
  0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78,  // FSH.o.><...s_tex
  0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x00, 0x00, 0x76,  // Color..........v
  0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65,  // arying vec2 v_te
  0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d,  // xcoord0;.uniform
  0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78,  //  sampler2D s_tex
  0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e,  // Color;.void main
  0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43,  //  ().{.  gl_FragC
  0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44,  // olor = texture2D
  0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f,  //  (s_texColor, v_
  0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00 };                                                                                                // texcoord0);.}...
unsigned int fs_textured_passthrough_bin_glsl_size = 160;

BX_UNUSED(fs_textured_passthrough_bin_glsl)
BX_UNUSED(fs_textured_passthrough_bin_glsl_size)
static const uint8_t fs_textured_passthrough_bin_dx9[] = {
  0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78,  // FSH.o.><...s_tex
  0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x24, 0x01, 0x00, 0x00, 0x44,  // Color0.....$...D
  0x58, 0x42, 0x43, 0xd2, 0x06, 0xf2, 0xc5, 0xaf, 0x16, 0x4c, 0x7f, 0x92, 0xa3, 0x07, 0x81, 0x5d,  // XBC......L.....]
  0x0d, 0x15, 0x05, 0x01, 0x00, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c,  // .......$.......,
  0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50,  // ...........ISGNP
  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00,  // ...........8....
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,  // ................
  0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,  // ...D............
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f,  // ...........SV_PO
  0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00,  // SITION.TEXCOORD.
  0xab, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08,  // ...OSGN,........
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,  // ... ............
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41,  // ...........SV_TA
  0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x64, 0x00, 0x00, 0x00, 0x40,  // RGET...SHDRd...@
  0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00,  // .......Z....`...
  0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55,  // ...X....p......U
  0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65,  // U..b...2.......e
  0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2,  // .... ......E....
  0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46,  //  ......F.......F
  0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e,  // ~.......`......>
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 };                                                      // .`......>.......
unsigned int fs_textured_passthrough_bin_dx9_size = 327;

BX_UNUSED(fs_textured_passthrough_bin_dx9)
BX_UNUSED(fs_textured_passthrough_bin_dx9_size)
static const uint8_t fs_textured_passthrough_bin_dx11[] = {
  0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78,  // FSH.o.><...s_tex
  0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x24, 0x01, 0x00, 0x00, 0x44,  // Color0.....$...D
  0x58, 0x42, 0x43, 0xd2, 0x06, 0xf2, 0xc5, 0xaf, 0x16, 0x4c, 0x7f, 0x92, 0xa3, 0x07, 0x81, 0x5d,  // XBC......L.....]
  0x0d, 0x15, 0x05, 0x01, 0x00, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c,  // .......$.......,
  0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50,  // ...........ISGNP
  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00,  // ...........8....
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,  // ................
  0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,  // ...D............
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f,  // ...........SV_PO
  0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00,  // SITION.TEXCOORD.
  0xab, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08,  // ...OSGN,........
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,  // ... ............
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41,  // ...........SV_TA
  0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x64, 0x00, 0x00, 0x00, 0x40,  // RGET...SHDRd...@
  0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00,  // .......Z....`...
  0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55,  // ...X....p......U
  0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65,  // U..b...2.......e
  0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2,  // .... ......E....
  0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46,  //  ......F.......F
  0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e,  // ~.......`......>
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 };                                                      // .`......>.......
unsigned int fs_textured_passthrough_bin_dx11_size = 327;

BX_UNUSED(fs_textured_passthrough_bin_dx11)
BX_UNUSED(fs_textured_passthrough_bin_dx11_size)
static const uint8_t fs_textured_passthrough_bin_metal[] = {
  0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0x75, 0x73,  // FSH.o.><......us
  0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65,  // ing namespace me
  0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74,  // tal;.struct xlat
  0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b,  // MtlShaderInput {
  0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63,  // .  float2 v_texc
  0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74,  // oord0;.};.struct
  0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75,  //  xlatMtlShaderOu
  0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20,  // tput {.  float4 
  0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x7d, 0x3b,  // gl_FragColor;.};
  0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53,  // .struct xlatMtlS
  0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x7d,  // haderUniform {.}
  0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d,  // ;.fragment xlatM
  0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78,  // tlShaderOutput x
  0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74,  // latMtlMain (xlat
  0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f,  // MtlShaderInput _
  0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e,  // mtl_i [[stage_in
  0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61,  // ]], constant xla
  0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72,  // tMtlShaderUnifor
  0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66,  // m& _mtl_u [[buff
  0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x20, 0x20, 0x74, 0x65,  // er(0)]].  ,   te
  0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73,  // xture2d<float> s
  0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74,  // _texColor [[text
  0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65,  // ure(0)]], sample
  0x72, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43,  // r _mtlsmp_s_texC
  0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x30,  // olor [[sampler(0
  0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c,  // )]]).{.  xlatMtl
  0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74,  // ShaderOutput _mt
  0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c,  // l_o;.  _mtl_o.gl
  0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x73, 0x5f, 0x74,  // _FragColor = s_t
  0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x5f,  // exColor.sample(_
  0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f,  // mtlsmp_s_texColo
  0x72, 0x2c, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x29, 0x28, 0x5f, 0x6d, 0x74, 0x6c,  // r, (float2)(_mtl
  0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x29,  // _i.v_texcoord0))
  0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f,  // ;.  return _mtl_
  0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00 };                                                      // urn _mtl_o;.}...
unsigned int fs_textured_passthrough_bin_metal_size = 551;

BX_UNUSED(fs_textured_passthrough_bin_metal)
BX_UNUSED(fs_textured_passthrough_bin_metal_size)
static const uint8_t fs_textured_passthrough_bin_spirv[] = {
  0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x68, 0x02, 0x00, 0x00, 0x03, 0x02,  // FSH.o.><..h.....
  0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00,  // #...............
  0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00,  // ................
  0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00,  // ..GLSL.std.450..
  0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00,  // ................
  0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00,  // ..........main..
  0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00,  // ..J...S.........
  0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01,  // ................
  0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00,  // ..........main..
  0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x24, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43,  // ......$...s_texC
  0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00,  // olorTexture.....
  0x05, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64,  // ..J...v_texcoord
  0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0x53, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46,  // 0.....S...bgfx_F
  0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x24, 0x00,  // ragData0..G...$.
  0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x24, 0x00,  // ..".......G...$.
  0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4a, 0x00,  // ..!.......G...J.
  0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x53, 0x00,  // ..........G...S.
  0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00,  // ................
  0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00,  // ..!.............
  0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00,  // .............. .
  0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00,  // ................
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,  // ................
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00,  // ................
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00,  // ................
  0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00,  // ...... ...#.....
  0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x24, 0x00,  // ......;...#...$.
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, 0x30, 0x00, 0x00, 0x00, 0x08, 0x00,  // ..........0.....
  0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x49, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00,  // .. ...I.........
  0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x49, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x01, 0x00,  // ..;...I...J.....
  0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x52, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00,  // .. ...R.........
  0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x52, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x03, 0x00,  // ..;...R...S.....
  0x00, 0x00, 0x01, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x36, 0x00,  // ..............6.
  0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // ................
  0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00,  // ..........=.....
  0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0b, 0x00,  // ..%...$...=.....
  0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x30, 0x00,  // ..K...J...V...0.
  0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x57, 0x00,  // ..}...%.......W.
  0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x4b, 0x00,  // ..........}...K.
  0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x53, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0xfd, 0x00,  // ..>...S.........
  0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 };                                    // ........8.......
unsigned int fs_textured_passthrough_bin_spirv_size = 634;

BX_UNUSED(fs_textured_passthrough_bin_spirv)
BX_UNUSED(fs_textured_passthrough_bin_spirv_size)
static const uint8_t * fs_textured_passthrough_bin_esslandroid = NULL;
unsigned int fs_textured_passthrough_bin_esslandroid_size = 0;

BX_UNUSED(fs_textured_passthrough_bin_esslandroid)
BX_UNUSED(fs_textured_passthrough_bin_esslandroid_size)
static const uint8_t * fs_textured_passthrough_bin_pssl = NULL;
unsigned int fs_textured_passthrough_bin_pssl_size = 0;

BX_UNUSED(fs_textured_passthrough_bin_pssl)
BX_UNUSED(fs_textured_passthrough_bin_pssl_size)
static const uint8_t * fs_textured_passthrough_bin_esslnacl = NULL;
unsigned int fs_textured_passthrough_bin_esslnacl_size = 0;

BX_UNUSED(fs_textured_passthrough_bin_esslnacl)
BX_UNUSED(fs_textured_passthrough_bin_esslnacl_size)
