#include "ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b.h"
#include "ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5.h"
#include "ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82.h"
#include "ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae.h"
#include "ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169.h"
#include "ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef.h"
#include "ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae.h"
#include "ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386.h"
#include "ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23.h"
#include "ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563.h"
#include "ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746.h"
#include "ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc.h"
#include "ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a.h"
#include "ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5.h"
#include "ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133.h"
#include "ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc.h"
#include "ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec.h"
#include "ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822.h"
#include "ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb.h"
#include "ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8.h"
#include "ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8.h"
#include "ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e.h"
#include "ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b.h"
#include "ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661.h"
#include "ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6.h"
#include "ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3.h"
#include "ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced.h"
#include "ffx_blur_pass_16bit_a779de0428ca77552550182162e91170.h"
#include "ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51.h"
#include "ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343.h"

typedef union ffx_blur_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_BLUR_OPTION_KERNEL_DIMENSION : 4;
        uint32_t FFX_BLUR_OPTION_KERNEL_PERMUTATION : 2;
    };
    uint32_t index;
} ffx_blur_pass_16bit_PermutationKey;

typedef struct ffx_blur_pass_16bit_PermutationInfo {
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
} ffx_blur_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_blur_pass_16bit_IndirectionTable[] = {
    28,
    25,
    23,
    21,
    18,
    16,
    13,
    14,
    7,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    29,
    26,
    22,
    19,
    17,
    10,
    11,
    5,
    4,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    27,
    24,
    20,
    15,
    9,
    6,
    12,
    3,
    8,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

static const ffx_blur_pass_16bit_PermutationInfo g_ffx_blur_pass_16bit_PermutationInfo[] = {
    { g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_size, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_data, 1, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_CBVResourceNames, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_CBVResourceBindings, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_CBVResourceCounts, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_CBVResourceSets, 1, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_TextureSRVResourceNames, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_TextureUAVResourceNames, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_618bda43b0ebf26d9a8b3d55960ab11b_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_size, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_data, 1, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_CBVResourceNames, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_CBVResourceBindings, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_CBVResourceCounts, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_CBVResourceSets, 1, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_TextureSRVResourceNames, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_TextureUAVResourceNames, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_45e77d64ff30a668ae0875f8052aa6d5_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_size, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_data, 1, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_CBVResourceNames, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_CBVResourceBindings, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_CBVResourceCounts, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_CBVResourceSets, 1, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_TextureSRVResourceNames, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_TextureUAVResourceNames, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_0b3884833bdb5b1759b2cd481dd15a82_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_size, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_data, 1, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_CBVResourceNames, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_CBVResourceBindings, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_CBVResourceCounts, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_CBVResourceSets, 1, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_TextureSRVResourceNames, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_TextureUAVResourceNames, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_1ffb7f00d7a0f7cb7a657421adc881ae_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_size, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_data, 1, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_CBVResourceNames, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_CBVResourceBindings, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_CBVResourceCounts, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_CBVResourceSets, 1, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_TextureSRVResourceNames, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_TextureUAVResourceNames, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_8752f8ecfb9771ed735306503b734169_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_size, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_data, 1, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_CBVResourceNames, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_CBVResourceBindings, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_CBVResourceCounts, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_CBVResourceSets, 1, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_TextureSRVResourceNames, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_TextureUAVResourceNames, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_28d62953944245793e722a0c091ae2ef_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_size, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_data, 1, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_CBVResourceNames, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_CBVResourceBindings, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_CBVResourceCounts, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_CBVResourceSets, 1, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_TextureSRVResourceNames, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_TextureUAVResourceNames, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_175a0d12f69b0f58c07bb15aadf9bdae_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_size, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_data, 1, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_CBVResourceNames, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_CBVResourceBindings, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_CBVResourceCounts, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_CBVResourceSets, 1, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_TextureSRVResourceNames, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_TextureUAVResourceNames, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_ddd65283385cd9ae93f92c8810a0b386_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_size, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_data, 1, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_CBVResourceNames, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_CBVResourceBindings, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_CBVResourceCounts, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_CBVResourceSets, 1, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_TextureSRVResourceNames, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_TextureUAVResourceNames, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_ae2b6fb9e3211cc1111ac6607e50ee23_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_size, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_data, 1, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_CBVResourceNames, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_CBVResourceBindings, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_CBVResourceCounts, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_CBVResourceSets, 1, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_TextureSRVResourceNames, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_TextureUAVResourceNames, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_41e4ab2ef999db9c444304ca55c39563_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_size, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_data, 1, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_CBVResourceNames, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_CBVResourceBindings, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_CBVResourceCounts, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_CBVResourceSets, 1, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_TextureSRVResourceNames, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_TextureUAVResourceNames, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_49e1794b22a460ea5c04532e58bda746_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_size, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_data, 1, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_CBVResourceNames, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_CBVResourceBindings, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_CBVResourceCounts, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_CBVResourceSets, 1, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_TextureSRVResourceNames, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_TextureUAVResourceNames, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_81a5c6a0cb4c781b3f12a6a3a03180bc_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_size, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_data, 1, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_CBVResourceNames, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_CBVResourceBindings, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_CBVResourceCounts, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_CBVResourceSets, 1, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_TextureSRVResourceNames, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_TextureUAVResourceNames, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_b4390e5af68a647984c919143dcaf66a_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_size, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_data, 1, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_CBVResourceNames, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_CBVResourceBindings, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_CBVResourceCounts, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_CBVResourceSets, 1, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_TextureSRVResourceNames, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_TextureUAVResourceNames, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_0b5daae9a618c3325b6897410e7abfb5_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_size, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_data, 1, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_CBVResourceNames, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_CBVResourceBindings, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_CBVResourceCounts, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_CBVResourceSets, 1, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_TextureSRVResourceNames, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_TextureUAVResourceNames, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_bbc25a89aa7b5f504de3dfd33fe4e133_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_size, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_data, 1, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_CBVResourceNames, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_CBVResourceBindings, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_CBVResourceCounts, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_CBVResourceSets, 1, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_TextureSRVResourceNames, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_TextureUAVResourceNames, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_fcacc252582c151bfbcb9bfb718d0abc_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_size, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_data, 1, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_CBVResourceNames, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_CBVResourceBindings, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_CBVResourceCounts, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_CBVResourceSets, 1, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_TextureSRVResourceNames, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_TextureUAVResourceNames, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_a5c7086b5cab60d6283335f0adb868ec_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_size, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_data, 1, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_CBVResourceNames, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_CBVResourceBindings, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_CBVResourceCounts, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_CBVResourceSets, 1, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_TextureSRVResourceNames, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_TextureUAVResourceNames, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_6674ce486791e0b6e31ac60c69481822_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_size, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_data, 1, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_CBVResourceNames, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_CBVResourceBindings, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_CBVResourceCounts, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_CBVResourceSets, 1, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_TextureSRVResourceNames, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_TextureUAVResourceNames, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_aed08a7046c7f78adc248d78d9f46fdb_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_size, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_data, 1, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_CBVResourceNames, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_CBVResourceBindings, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_CBVResourceCounts, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_CBVResourceSets, 1, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_TextureSRVResourceNames, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_TextureUAVResourceNames, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_ceb30705cbf1bca9e0d330cc0a2cbed8_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_size, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_data, 1, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_CBVResourceNames, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_CBVResourceBindings, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_CBVResourceCounts, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_CBVResourceSets, 1, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_TextureSRVResourceNames, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_TextureUAVResourceNames, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_20af91e6eb67e724e464b25c79a3bde8_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_size, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_data, 1, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_CBVResourceNames, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_CBVResourceBindings, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_CBVResourceCounts, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_CBVResourceSets, 1, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_TextureSRVResourceNames, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_TextureUAVResourceNames, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_24649cf8e4cd44b22fa5617b4de7de5e_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_size, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_data, 1, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_CBVResourceNames, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_CBVResourceBindings, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_CBVResourceCounts, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_CBVResourceSets, 1, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_TextureSRVResourceNames, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_TextureUAVResourceNames, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_4bbbd426998ce4e10143e6ecee64860b_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_size, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_data, 1, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_CBVResourceNames, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_CBVResourceBindings, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_CBVResourceCounts, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_CBVResourceSets, 1, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_TextureSRVResourceNames, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_TextureUAVResourceNames, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_d8b6062a16dfdb1bb766c10cba207661_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_size, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_data, 1, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_CBVResourceNames, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_CBVResourceBindings, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_CBVResourceCounts, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_CBVResourceSets, 1, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_TextureSRVResourceNames, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_TextureUAVResourceNames, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_780604d4f74e4dc367e15b37e151eed6_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_size, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_data, 1, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_CBVResourceNames, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_CBVResourceBindings, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_CBVResourceCounts, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_CBVResourceSets, 1, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_TextureSRVResourceNames, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_TextureUAVResourceNames, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_466f453608719779b74190bd8e8140e3_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_size, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_data, 1, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_CBVResourceNames, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_CBVResourceBindings, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_CBVResourceCounts, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_CBVResourceSets, 1, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_TextureSRVResourceNames, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_TextureUAVResourceNames, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_6de3f74f1ac5e7340c13c2a5b6841ced_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_size, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_data, 1, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_CBVResourceNames, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_CBVResourceBindings, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_CBVResourceCounts, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_CBVResourceSets, 1, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_TextureSRVResourceNames, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_TextureUAVResourceNames, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_a779de0428ca77552550182162e91170_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_size, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_data, 1, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_CBVResourceNames, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_CBVResourceBindings, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_CBVResourceCounts, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_CBVResourceSets, 1, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_TextureSRVResourceNames, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_TextureUAVResourceNames, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_7e27063ad6ef494180b56ed7df9f6e51_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_size, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_data, 1, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_CBVResourceNames, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_CBVResourceBindings, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_CBVResourceCounts, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_CBVResourceSets, 1, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_TextureSRVResourceNames, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_TextureSRVResourceBindings, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_TextureSRVResourceCounts, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_TextureSRVResourceSets, 1, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_TextureUAVResourceNames, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_TextureUAVResourceBindings, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_TextureUAVResourceCounts, g_ffx_blur_pass_16bit_2d2477cd8f89de124ee546a629d62343_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

