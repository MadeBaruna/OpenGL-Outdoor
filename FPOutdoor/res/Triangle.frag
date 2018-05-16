#version 330 core
in vec3 ourColor;
in vec2 TexCoord;

// Texture samplers
uniform sampler2D ourTexture;

void main()
{
	vec4 texel = texture(ourTexture, TexCoord);
     
	if(texel.a < 0.5)
		discard;
	gl_FragColor = texel;
}