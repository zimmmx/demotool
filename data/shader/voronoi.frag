#version 330 core

uniform vec2 iResolution;
uniform float iTime;

void main(void)
{
    vec2 uv = gl_FragCoord.xy/iResolution;
    vec2 kar = (uv-0.5)*vec2(iResolution.x/iResolution.y, 1.0);

    vec3 color = 0.5 + 0.5*cos(iTime+uv.xyx+vec3(0,2,4));

    float r = 0.5;
    color *= smoothstep(r, r+0.01, length(kar));

    gl_FragColor = vec4(color, 1.0);
}
