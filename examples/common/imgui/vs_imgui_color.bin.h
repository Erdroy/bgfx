static const uint8_t vs_imgui_color_glsl[324] =
{
	0x56, 0x53, 0x48, 0x05, 0xa4, 0x8b, 0xef, 0x49, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH....I...u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x24, 0x01, 0x00, 0x00, 0x61, // wProj......$...a
	0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, // ttribute highp v
	0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x61, 0x74, // ec4 a_color0;.at
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, // tribute highp ve
	0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x76, // c3 a_position;.v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // arying highp vec
	0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, // 4 v_color0;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, // orm highp mat4 u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, // _viewProj;.void 
	0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, // main ().{.  high
	0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, // p vec4 tmpvar_1;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, // .  tmpvar_1.zw =
	0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, //  vec2(0.0, 1.0);
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x20, 0x3d, // .  tmpvar_1.xy =
	0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x78, 0x79, 0x3b, 0x0a, //  a_position.xy;.
	0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, //   gl_Position = 
	0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, // (u_viewProj * tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, // pvar_1);.  v_col
	0x6f, 0x72, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, // or0 = a_color0;.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};
static const uint8_t vs_imgui_color_spv[2796] =
{
	0x56, 0x53, 0x48, 0x05, 0xa4, 0x8b, 0xef, 0x49, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH....I...u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0xcc, 0x0a, 0x00, 0x00, 0x03, // wProj...........
	0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, 0x54, 0x61, 0x00, 0x00, 0x00, // .#.........Ta...
	0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, // ...GLSL.std.450.
	0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, // ................
	0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, // ...........main.
	0x00, 0x00, 0x00, 0x89, 0x14, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0xcd, // ................
	0x0f, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, // ................
	0x00, 0x04, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, // .......main.....
	0x00, 0x04, 0x00, 0x38, 0x04, 0x00, 0x00, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x06, // ...8...Output...
	0x00, 0x06, 0x00, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x50, 0x6f, // ...8.......gl_Po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x06, 0x00, 0x06, 0x00, 0x38, 0x04, 0x00, 0x00, 0x01, // sition.....8....
	0x00, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, // ...v_color0.....
	0x00, 0x06, 0x00, 0x0e, 0x0c, 0x00, 0x00, 0x40, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x76, 0x66, 0x34, // .......@main(vf4
	0x3b, 0x76, 0x66, 0x33, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xf5, 0x48, 0x00, 0x00, 0x61, // ;vf3;.......H..a
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x2c, // _color0........,
	0x47, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, // G..a_position...
	0x00, 0x05, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x5f, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x5f, // ......._varying_
	0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, // .......;...$Glob
	0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, // al.....;.......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, // _viewRect......;
	0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, // .......u_viewTex
	0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, // el.....;.......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x03, // _view......;....
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x06, // ...u_invView....
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, // ...;.......u_pro
	0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x75, // j......;.......u
	0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, // _invProj.......;
	0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, // .......u_viewPro
	0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x75, // j......;.......u
	0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, // _invViewProj....
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // ...;.......u_mod
	0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x75, // el.....;.......u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0x3b, // _modelView.....;
	0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, // .......u_modelVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0b, // ewProj.....;....
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x05, // ...u_alphaRef4..
	0x00, 0x03, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xcb, // ...B............
	0x41, 0x00, 0x00, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, // A..a_color0.....
	0x00, 0x05, 0x00, 0x89, 0x14, 0x00, 0x00, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, // .......a_color0.
	0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, // .......,?..a_pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x61, // ition..........a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x08, // _position.......
	0x10, 0x00, 0x00, 0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x54, 0x65, 0x6d, 0x70, 0x00, 0x05, // ...flattenTemp..
	0x00, 0x04, 0x00, 0xab, 0x55, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, // ....U..param....
	0x00, 0x04, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, // .......param....
	0x00, 0x0a, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, // .......@entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, // ntOutput_gl_Posi
	0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xf9, 0x03, 0x00, 0x00, 0x4f, // tion...........O
	0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0xf9, 0x03, 0x00, 0x00, 0x00, // utput...........
	0x00, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, // ...v_color0.....
	0x00, 0x07, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, // .......@entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x94, // ntOutput...G....
	0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // .......@...H...;
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, // .......#.......H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, // ...;.......#....
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, // ...H...;........
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, // ...H...;.......#
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, // ... ...H...;....
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, // ...........H...;
	0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // ...........H...;
	0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, // .......#...`...H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ...;............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, // ...H...;........
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, // ...H...;.......#
	0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x04, // .......H...;....
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, // ...........H...;
	0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // ...........H...;
	0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, // .......#.......H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ...;............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, // ...H...;........
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, // ...H...;.......#
	0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x06, // ... ...H...;....
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, // ...........H...;
	0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // ...........H...;
	0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, // .......#...`...H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ...;............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, // ...H...;........
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, // ...H...;.......#
	0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x08, // .......H...;....
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, // ...........H...;
	0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // ...........H...;
	0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, // .......#.......H
	0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ...;............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, // ...H...;........
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, // ...H...;.......#
	0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x0a, // .......H...;....
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x3b, // ...........H...;
	0x06, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x47, // .......#... ...G
	0x00, 0x03, 0x00, 0x3b, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, // ...;.......G...B
	0x13, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x89, // ...".......G....
	0x14, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xa6, // ...........G....
	0x14, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xd8, // ...........G....
	0x0c, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xcd, // ...........G....
	0x0f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, // ................
	0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x02, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, // ...!............
	0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, // ....... ........
	0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, // ........... ....
	0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x18, // ................
	0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x95, // ........... ....
	0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x04, 0x00, 0x38, // ...............8
	0x04, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x21, 0x00, 0x05, 0x00, 0xc6, // ...........!....
	0x07, 0x00, 0x00, 0x38, 0x04, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x95, 0x02, 0x00, 0x00, 0x20, // ...8........... 
	0x00, 0x04, 0x00, 0xb5, 0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x38, 0x04, 0x00, 0x00, 0x15, // ...........8....
	0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, // ....... .......+
	0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, // ...............+
	0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x2b, // ..............?+
	0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, // ...............,
	0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x88, 0x05, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x0c, // ................
	0x0a, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, // ...........+....
	0x00, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x13, // ................
	0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x65, // ...............e
	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, // ................
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, // ... .......+....
	0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x94, // ...j... ........
	0x02, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x3b, // ...e...j.......;
	0x06, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, // ...........e...e
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, // ...e...e...e...e
	0x00, 0x00, 0x00, 0x94, 0x02, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, // .......e...e....
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xb8, 0x08, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x3b, // ... ...........;
	0x06, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xb8, 0x08, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x02, // ...;.......B....
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1d, 0x0a, 0x00, 0x00, 0x06, // ...+............
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xe2, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, // ... ...........e
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1d, // ... ............
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x89, 0x14, 0x00, 0x00, 0x01, // ...;............
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x96, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, // ... ............
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x96, 0x02, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x01, // ...;............
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1d, // ... ............
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0xd8, 0x0c, 0x00, 0x00, 0x03, // ...;............
	0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0xf9, 0x03, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, // ............... 
	0x00, 0x04, 0x00, 0x76, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf9, 0x03, 0x00, 0x00, 0x3b, // ...v...........;
	0x00, 0x04, 0x00, 0x76, 0x06, 0x00, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, // ...v...........6
	0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, // ................
	0x05, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x53, 0x61, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xb5, // .......Sa..;....
	0x06, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, // ...........;....
	0x02, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x95, // ....U......;....
	0x02, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, // ...........=....
	0x00, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x89, 0x14, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, // ....A......=....
	0x00, 0x00, 0x00, 0x2c, 0x3f, 0x00, 0x00, 0xa6, 0x14, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xab, // ...,?......>....
	0x55, 0x00, 0x00, 0xcb, 0x41, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x2c, // U...A..>.......,
	0x3f, 0x00, 0x00, 0x39, 0x00, 0x06, 0x00, 0x38, 0x04, 0x00, 0x00, 0x49, 0x26, 0x00, 0x00, 0x0e, // ?..9...8...I&...
	0x0c, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x08, // ....U......>....
	0x10, 0x00, 0x00, 0x49, 0x26, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x54, // ...I&..A.......T
	0x34, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, // 4..........=....
	0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x54, 0x34, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xd8, // .......T4..>....
	0x0c, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x27, // .......A.......'
	0x41, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, // A..........=....
	0x00, 0x00, 0x00, 0xdf, 0x1c, 0x00, 0x00, 0x27, 0x41, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x9c, // .......'A..A....
	0x02, 0x00, 0x00, 0x01, 0x5c, 0x00, 0x00, 0xcd, 0x0f, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3e, // ...............>
	0x00, 0x03, 0x00, 0x01, 0x5c, 0x00, 0x00, 0xdf, 0x1c, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, // ...............8
	0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x38, 0x04, 0x00, 0x00, 0x0e, 0x0c, 0x00, 0x00, 0x00, // ...6...8........
	0x00, 0x00, 0x00, 0xc6, 0x07, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x9a, 0x02, 0x00, 0x00, 0xf5, // .......7........
	0x48, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x95, 0x02, 0x00, 0x00, 0x2c, 0x47, 0x00, 0x00, 0xf8, // H..7.......,G...
	0x00, 0x02, 0x00, 0x51, 0x1d, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xb5, 0x06, 0x00, 0x00, 0x0f, // ...Q...;........
	0x12, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x50, // .......A.......P
	0x24, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x50, // $..........>...P
	0x24, 0x00, 0x00, 0x88, 0x05, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x81, // $......=........
	0x29, 0x00, 0x00, 0x2c, 0x47, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, 0x13, 0x00, 0x00, 0x00, 0x2f, // )..,G..O......./
	0x40, 0x00, 0x00, 0x81, 0x29, 0x00, 0x00, 0x81, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // @...)...).......
	0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x6e, 0x59, 0x00, 0x00, 0x2f, // ...Q.......nY../
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x4f, // @......Q.......O
	0x5d, 0x00, 0x00, 0x2f, 0x40, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x1d, // ]../@......P....
	0x00, 0x00, 0x00, 0xf5, 0x42, 0x00, 0x00, 0x6e, 0x59, 0x00, 0x00, 0x4f, 0x5d, 0x00, 0x00, 0x0c, // ....B..nY..O]...
	0x0a, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0xe2, 0x02, 0x00, 0x00, 0x61, // .......A.......a
	0x23, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x1d, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x65, // #..B.......=...e
	0x00, 0x00, 0x00, 0x2b, 0x34, 0x00, 0x00, 0x61, 0x23, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x1d, // ...+4..a#.......
	0x00, 0x00, 0x00, 0xd7, 0x32, 0x00, 0x00, 0xf5, 0x42, 0x00, 0x00, 0x2b, 0x34, 0x00, 0x00, 0x41, // ....2...B..+4..A
	0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x97, 0x2f, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0b, // ......../.......
	0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x97, 0x2f, 0x00, 0x00, 0xd7, 0x32, 0x00, 0x00, 0x3d, // ...>..../...2..=
	0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x8e, 0x31, 0x00, 0x00, 0xf5, 0x48, 0x00, 0x00, 0x41, // ........1...H..A
	0x00, 0x05, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x9e, 0x4c, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0x0e, // ........L.......
	0x0a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x9e, 0x4c, 0x00, 0x00, 0x8e, 0x31, 0x00, 0x00, 0x3d, // ...>....L...1..=
	0x00, 0x04, 0x00, 0x38, 0x04, 0x00, 0x00, 0x30, 0x19, 0x00, 0x00, 0x0f, 0x12, 0x00, 0x00, 0xfe, // ...8...0........
	0x00, 0x02, 0x00, 0x30, 0x19, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                         // ...0...8....
};
static const uint8_t vs_imgui_color_dx9[284] =
{
	0x56, 0x53, 0x48, 0x05, 0xa4, 0x8b, 0xef, 0x49, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH....I...u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, // wProj...........
	0x03, 0xfe, 0xff, 0xfe, 0xff, 0x20, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, // ..... .CTAB....S
	0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, // ................
	0x91, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, // ...L...0........
	0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, // ...<.......u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0xab, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, // wProj...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, // .......vs_3_0.Mi
	0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, // crosoft (R) HLSL
	0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, //  Shader Compiler
	0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, //  10.1...........
	0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x0a, // ................
	0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, // ................
	0x00, 0xe4, 0xa0, 0x01, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, // .....U..........
	0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, // ................
	0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00,                         // ............
};
static const uint8_t vs_imgui_color_dx11[467] =
{
	0x56, 0x53, 0x48, 0x05, 0xa4, 0x8b, 0xef, 0x49, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH....I...u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0xac, 0x01, 0x00, 0x00, 0x44, // wProj..........D
	0x58, 0x42, 0x43, 0xbc, 0xb2, 0x28, 0xa7, 0xd2, 0xab, 0xc3, 0x2f, 0xa4, 0xe4, 0xbc, 0x67, 0xff, // XBC..(..../...g.
	0xa4, 0xcf, 0x66, 0x01, 0x00, 0x00, 0x00, 0xac, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, // ..f............,
	0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x48, // ...|.......ISGNH
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, // ...........8....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, // ................
	0x0f, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, // ...>............
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x03, 0x00, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, // ...........COLOR
	0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x4c, // .POSITION..OSGNL
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, // ...........8....
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, // ................
	0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, // ...D............
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, // ...........SV_PO
	0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0xab, 0xab, 0x53, // SITION.COLOR...S
	0x48, 0x44, 0x52, 0xd4, 0x00, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x35, 0x00, 0x00, 0x00, 0x59, // HDR....@...5...Y
	0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5f, // ...F. ........._
	0x00, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, // ..........._...2
	0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, // .......g.... ...
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x01, // .......e.... ...
	0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, // ...h.......8....
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, // .......V.......F
	0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, // . .........2....
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .......F. ......
	0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, // ...........F....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, // ........ ......F
	0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, // .......F. ......
	0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, // ...6.... ......F
	0x1e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x05, 0x00, 0x01, // .......>........
	0x00, 0x40, 0x00,                                                                               // .@.
};
static const uint8_t vs_imgui_color_mtl[674] =
{
	0x56, 0x53, 0x48, 0x05, 0xa4, 0x8b, 0xef, 0x49, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH....I...u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x82, 0x02, 0x00, 0x00, 0x75, // wProj..........u
	0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, // sing namespace m
	0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, // etal;.struct xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, // tMtlShaderInput 
	0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, // {.  float4 a_col
	0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, // or0 [[attribute(
	0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, // 0)]];.  float3 a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, // _position [[attr
	0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, // ibute(1)]];.};.s
	0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, // truct xlatMtlSha
	0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, // derOutput {.  fl
	0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // oat4 gl_Position
	0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, //  [[position]];. 
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, //  float4 v_color0
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // ;.};.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // MtlShaderUniform
	0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, //  {.  float4x4 u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x76, 0x65, 0x72, // viewProj;.};.ver
	0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, // tex xlatMtlShade
	0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, // rOutput xlatMtlM
	0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, // ain (xlatMtlShad
	0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, // erInput _mtl_i [
	0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, // [stage_in]], con
	0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, // stant xlatMtlSha
	0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // derUniform& _mtl
	0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, // _u [[buffer(0)]]
	0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, // ).{.  xlatMtlSha
	0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, // derOutput _mtl_o
	0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ;.  float4 tmpva
	0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // r_1 = 0;.  tmpva
	0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x77, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, // r_1.zw = float2(
	0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // 0.0, 1.0);.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // var_1.xy = _mtl_
	0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x78, 0x79, 0x3b, // i.a_position.xy;
	0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, // .  _mtl_o.gl_Pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // ition = (_mtl_u.
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, // u_viewProj * tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, // var_1);.  _mtl_o
	0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // .v_color0 = _mtl
	0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x72, // _i.a_color0;.  r
	0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, // eturn _mtl_o;.}.
	0x0a, 0x00,                                                                                     // ..
};
extern const uint8_t* vs_imgui_color_pssl;
extern const uint32_t vs_imgui_color_pssl_size;
