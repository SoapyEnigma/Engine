#include "ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52.h"
#include "ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5.h"
#include "ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42.h"
#include "ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7.h"
#include "ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665.h"
#include "ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68.h"
#include "ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db.h"
#include "ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258.h"

typedef union ffx_fsr2_depth_clip_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_depth_clip_pass_PermutationKey;

typedef struct ffx_fsr2_depth_clip_pass_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;


    const uint32_t  numConstantBuffers;
    const char**    constantBufferNames;
    const uint32_t* constantBufferBindings;
    const uint32_t* constantBufferCounts;
    const uint32_t* constantBufferSpaces;

    const uint32_t  numSRVTextures;
    const char**    srvTextureNames;
    const uint32_t* srvTextureBindings;
    const uint32_t* srvTextureCounts;
    const uint32_t* srvTextureSpaces;

    const uint32_t  numUAVTextures;
    const char**    uavTextureNames;
    const uint32_t* uavTextureBindings;
    const uint32_t* uavTextureCounts;
    const uint32_t* uavTextureSpaces;

    const uint32_t  numSRVBuffers;
    const char**    srvBufferNames;
    const uint32_t* srvBufferBindings;
    const uint32_t* srvBufferCounts;
    const uint32_t* srvBufferSpaces;

    const uint32_t  numUAVBuffers;
    const char**    uavBufferNames;
    const uint32_t* uavBufferBindings;
    const uint32_t* uavBufferCounts;
    const uint32_t* uavBufferSpaces;

    const uint32_t  numSamplers;
    const char**    samplerNames;
    const uint32_t* samplerBindings;
    const uint32_t* samplerCounts;
    const uint32_t* samplerSpaces;

    const uint32_t  numRTAccelerationStructures;
    const char**    rtAccelerationStructureNames;
    const uint32_t* rtAccelerationStructureBindings;
    const uint32_t* rtAccelerationStructureCounts;
    const uint32_t* rtAccelerationStructureSpaces;
} ffx_fsr2_depth_clip_pass_PermutationInfo;

static const uint32_t g_ffx_fsr2_depth_clip_pass_IndirectionTable[] = {
    7,
    7,
    7,
    7,
    3,
    3,
    3,
    3,
    6,
    6,
    6,
    6,
    0,
    0,
    0,
    0,
    4,
    4,
    4,
    4,
    2,
    2,
    2,
    2,
    5,
    5,
    5,
    5,
    1,
    1,
    1,
    1,
    7,
    7,
    7,
    7,
    3,
    3,
    3,
    3,
    6,
    6,
    6,
    6,
    0,
    0,
    0,
    0,
    4,
    4,
    4,
    4,
    2,
    2,
    2,
    2,
    5,
    5,
    5,
    5,
    1,
    1,
    1,
    1,
};

static const ffx_fsr2_depth_clip_pass_PermutationInfo g_ffx_fsr2_depth_clip_pass_PermutationInfo[] = {
    { g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_size, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_data, 1, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_CBVResourceSets, 9, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_TextureSRVResourceSets, 2, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_c463bf7b993e83ce2bfd40bb04a73a52_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_size, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_data, 1, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_CBVResourceSets, 9, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_TextureSRVResourceSets, 2, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_ca4757ee37d2efbe4fab82a8cca3f3e5_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_size, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_data, 1, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_CBVResourceSets, 9, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_TextureSRVResourceSets, 2, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_2e9135bf4631e278b4e935f8182a1b42_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_size, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_data, 1, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_CBVResourceSets, 9, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_TextureSRVResourceSets, 2, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_bdace09eabad9104ded34bc698d601d7_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_size, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_data, 1, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_CBVResourceSets, 9, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_TextureSRVResourceSets, 2, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_652cbd10962b9bff89f57632d3db4665_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_size, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_data, 1, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_CBVResourceSets, 9, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_TextureSRVResourceSets, 2, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_c1eb21fc940f3969839954b389328d68_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_size, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_data, 1, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_CBVResourceSets, 9, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_TextureSRVResourceSets, 2, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_b37ac32ed61bf8d861ee72d067e200db_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_size, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_data, 1, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_CBVResourceSets, 9, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_TextureSRVResourceSets, 2, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_501f8d5a21730dc23c8e35980113f258_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

