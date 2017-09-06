/*
 * voip_flash_mib.h: VoIP MIB Header
 *
 * Authors: Rock <shaofu@realtek.com.tw>
 *
 */

#ifndef __VOIP_FLASH_MIB_H
#define __VOIP_FLASH_MIB_H

/* Use MIB_VOIP_TABLE_LIST to inform init procedure that it is a table when loading from tlv to bin file. */
#ifdef VOIP_SUPPORT_TLV_CFG
#define MIB_VOIP_TABLE_LIST 0x8000
#else
#define MIB_VOIP_TABLE_LIST 0x0
#endif

// voip flash info
#define MIB_VOIP_SIGNATURE				1
#define MIB_VOIP_VERSION				2
#define MIB_VOIP_FEATURE				3
#define MIB_VOIP_EXTEND_FEATURE			4

// port setting
#define MIB_VOIP_PORT					(5|MIB_VOIP_TABLE_LIST)

// proxy setting - account
#define MIB_VOIP_PROXY_DISPLAY_NAME		6
#define MIB_VOIP_PROXY_NUMBER			7
#define MIB_VOIP_PROXY_LOGIN_ID			8
#define MIB_VOIP_PROXY_PASSWORD			9

// proxy setting - register server
#define MIB_VOIP_PROXY_ENABLE			10
#define MIB_VOIP_PROXY_ADDR				11
#define MIB_VOIP_PROXY_PORT				12
#define MIB_VOIP_PROXY_DOMAIN_NAME		13
#define MIB_VOIP_PROXY_REG_EXPIRE		14

// proxy setting - nat traversal server
#define MIB_VOIP_PROXY_OUTBOUND_ENABLE	15
#define MIB_VOIP_PROXY_OUTBOUND_ADDR	16
#define MIB_VOIP_PROXY_OUTBOUND_PORT	17

// NAT Traversal
#define MIB_VOIP_STUN_ENABLE			18
#define MIB_VOIP_STUN_ADDR				19
#define MIB_VOIP_STUN_PORT				20

// port setting - advanced
#define MIB_VOIP_SIP_PORT				21
#define MIB_VOIP_MEDIA_PORT				22
#define MIB_VOIP_DTMF_MODE				23
#define MIB_VOIP_DTMF_RFC2833_PAYLOAD_TYPE		24
#define MIB_VOIP_CALL_WAITING_ENABLE	25

// port setting - forward
#define MIB_VOIP_UC_FORWARD_ENABLE		26
#define MIB_VOIP_UC_FORWARD				27
#define MIB_VOIP_BUSY_FORWARD_ENABLE	28
#define MIB_VOIP_BUSY_FORWARD			29
#define MIB_VOIP_NA_FORWARD_ENABLE		30
#define MIB_VOIP_NA_FORWARD				31
#define MIB_VOIP_NA_FORWARD_TIME		32

// port setting - speed dial
#define MIB_VOIP_SPEED_DIAL				(33|MIB_VOIP_TABLE_LIST)
#define MIB_VOIP_SPEED_DIAL_NAME		34
#define MIB_VOIP_SPEED_DIAL_URL			35

// port setting - codec
#define MIB_VOIP_FRAME_SIZE				36
#define MIB_VOIP_PRECEDENCE				37
#define MIB_VOIP_VAD					38
#define MIB_VOIP_G7231_RATE				39

// port setting - DSP
#define MIB_VOIP_SLIC_TX_VOLUME			40
#define MIB_VOIP_SLIC_RX_VOLUME			41
						/*42-43 is used by daa volume*/
#define MIB_VOIP_MAX_DELAY				44
#define MIB_VOIP_ECHO_TAIL				45
#define MIB_VOIP_CALLER_ID_MODE			46
#define MIB_VOIP_CALL_WAITING_CID		47

// flash hook time
#define MIB_VOIP_FLASH_HOOK_TIME		48

// RFC flags
#define MIB_VOIP_RFC_FLAGS				49

// tone
#define MIB_VOIP_TONE_OF_COUNTRY		50
#define MIB_VOIP_TONE_OF_CUSTDIAL		51
#define MIB_VOIP_TONE_OF_CUSTRING		52
#define MIB_VOIP_TONE_OF_CUSTBUSY		53
#define MIB_VOIP_TONE_OF_CUSTWAITING	54
#define MIB_VOIP_TONE_OF_CUSTOMIZE		55

// customize tone
#define MIB_VOIP_CUST_TONE				(56|MIB_VOIP_TABLE_LIST)
#define MIB_VOIP_CUST_TONE_TYPE			57
#define MIB_VOIP_CUST_TONE_CYCLE		58
#define MIB_VOIP_CUST_TONE_CAD_NUM		59
#define MIB_VOIP_CUST_TONE_CAD_ON0		60
#define MIB_VOIP_CUST_TONE_CAD_ON1		61
#define MIB_VOIP_CUST_TONE_CAD_ON2		62
#define MIB_VOIP_CUST_TONE_CAD_ON3		63
#define MIB_VOIP_CUST_TONE_CAD_OFF0		64
#define MIB_VOIP_CUST_TONE_CAD_OFF1		65
#define MIB_VOIP_CUST_TONE_CAD_OFF2		66
#define MIB_VOIP_CUST_TONE_CAD_OFF3		67
#define MIB_VOIP_CUST_TONE_PATTERN_OFF	68
#define MIB_VOIP_CUST_TONE_NUM			69
#define MIB_VOIP_CUST_TONE_FREQ0		70
#define MIB_VOIP_CUST_TONE_FREQ1		71
#define MIB_VOIP_CUST_TONE_FREQ2		72
#define MIB_VOIP_CUST_TONE_FREQ3		73
#define MIB_VOIP_CUST_TONE_GAIN0		74
#define MIB_VOIP_CUST_TONE_GAIN1		75
#define MIB_VOIP_CUST_TONE_GAIN2		76
#define MIB_VOIP_CUST_TONE_GAIN3		77
//#define MIB_VOIP_CUST_TONE_DUMMY		223

// ring
#define MIB_VOIP_RING_CAD				78
#define MIB_VOIP_RING_GROUP				79
#define MIB_VOIP_RING_PHONE_NUM			80
#define MIB_VOIP_RING_CADENCE_USE		81
#define MIB_VOIP_RING_CADENCE_SEL		82
#define MIB_VOIP_RING_CAD_ON			83
#define MIB_VOIP_RING_CAD_OFF			84

// function key
#define MIB_VOIP_FUNCKEY_PSTN			85
#define MIB_VOIP_FUNCKEY_TRANSFER		86

// other
#define MIB_VOIP_AUTO_DIAL			87
#define MIB_VOIP_OFF_HOOK_ALARM			88

// mib version
#define MIB_VOIP_MIB_VERSION			89

// auto config
#define MIB_VOIP_AUTO_CFG_VER			90
#define MIB_VOIP_AUTO_CFG_MODE			91
#define MIB_VOIP_AUTO_CFG_HTTP_ADDR		92
#define MIB_VOIP_AUTO_CFG_HTTP_PORT		93
#define MIB_VOIP_AUTO_CFG_FILE_PATH		94
#define MIB_VOIP_AUTO_CFG_EXPIRE		95

// port setting - DSP
#define MIB_VOIP_JITTER_DELAY			96

#define MIB_VOIP_VOICE_QOS			97

// flash hook min time
#define MIB_VOIP_FLASH_HOOK_TIME_MIN		98

//caller id dtmf start/end digit configruation
#define MIB_VOIP_CID_DTMF_MODE			99

// port setting - DIAL PLAN
#define MIB_VOIP_REPLACE_RULE_OPTION	100
#define MIB_VOIP_REPLACE_RULE_SOURCE	101
#define MIB_VOIP_REPLACE_RULE_TARGET	102
#define MIB_VOIP_DIAL_PLAN              103
#define MIB_VOIP_AUTO_PREFIX			104
#define MIB_VOIP_PREFIX_UNSET_PLAN		105

// sip info duration
#define MIB_VOIP_SIP_INFO_DURATION	      	106

//AGC config
#define MIB_VOIP_SPEAKERAGC			107
#define MIB_VOIP_SPK_AGC_LVL			108
#define MIB_VOIP_SPK_AGC_GU			109
#define MIB_VOIP_SPK_AGC_GD			110
#define MIB_VOIP_MICAGC				111
#define MIB_VOIP_MIC_AGC_LVL			112
#define MIB_VOIP_MIC_AGC_GU			113
#define MIB_VOIP_MIC_AGC_GD			114

#define MIB_VOIP_CALLER_ID_DET_MODE		115
#define MIB_VOIP_CALLER_ID_AUTO_DET_SELECT	116
#define MIB_VOIP_PULSE_DIAL_GENERATE	148
#define MIB_VOIP_PULSE_GEN_PPS			149
#define MIB_VOIP_PULSE_GEN_MAKE_TIME		150
#define MIB_VOIP_PULSE_GEN_INTERDIGIT_PAUSE	151
#define	MIB_VOIP_PULSE_DIAL_DETECT			152
#define MIB_VOIP_PULSE_DET_PAUSE		153
#define MIB_VOIP_DAA_TX_VOLUME			42
#define MIB_VOIP_DAA_RX_VOLUME			43

// VLAN setting
#define MIB_VOIP_WAN_VLAN_ENABLE		117
#define MIB_VOIP_WAN_VLAN_ID_VOICE		118
#define MIB_VOIP_WAN_VLAN_PRIORITY_VOICE	119
#define MIB_VOIP_WAN_VLAN_CFI_VOICE		120

//fsk cid gen mode
#define MIB_VOIP_FSK_GEN_MODE			121

//T.38 config
#define MIB_VOIP_T38_USET38			122
#define MIB_VOIP_T38_PORT			123

//voice gain
#define MIB_VOIP_SPK_VOICE_GAIN			124
#define MIB_VOIP_MIC_VOICE_GAIN			125

// DSCP setting
#define MIB_VOIP_RTP_DSCP			126
#define MIB_VOIP_SIP_DSCP			127

// HOT Line
#define MIB_VOIP_HOTLINE_ENABLE			128
#define MIB_VOIP_HOTLINE_NUMBER			129

// DND
#define MIB_VOIP_DND_MODE			130
#define MIB_VOIP_DND_FROM_HOUR			131
#define MIB_VOIP_DND_FROM_MIN			132
#define MIB_VOIP_DND_TO_HOUR			133
#define MIB_VOIP_DND_TO_MIN			134

// VLAN setting part2
#define MIB_VOIP_WAN_VLAN_ID_DATA		135
#define MIB_VOIP_WAN_VLAN_PRIORITY_DATA		136
#define MIB_VOIP_WAN_VLAN_CFI_DATA		137

// VLAN setting part3
#define MIB_VOIP_WAN_VLAN_ID_VIDEO		138
#define MIB_VOIP_WAN_VLAN_PRIORITY_VIDEO	139
#define MIB_VOIP_WAN_VLAN_CFI_VIDEO		140

// port setting - DSP
#define MIB_VOIP_JITTER_FACTOR			141

// port setting - codec
#define MIB_VOIP_ILBC_MODE			142

// proxy
#define MIB_VOIP_PROXIES			(143|MIB_VOIP_TABLE_LIST)
#define MIB_VOIP_DEFAULT_PROXY			144

// security
#define MIB_VOIP_SECURITY_ENABLE		145
#define MIB_VOIP_TLS_ENABLE			146
#define MIB_VOIP_KEY_EXCHANGE_MODE		147

//fax modem det
#define MIB_VOIP_FAX_MODEM_DET			154

// off hook passwd
#define MIB_VOIP_OFFHOOK_PASSWD			155

// one stage dial
#define MIB_VOIP_ONE_STAGE_DIAL			156

// port setting - abbreviated dial
#define MIB_VOIP_ABBREVIATED_DIAL		(157|MIB_VOIP_TABLE_LIST)
#define MIB_VOIP_ABBREVIATED_DIAL_NAME		158
#define MIB_VOIP_ABBREVIATED_DIAL_URL		159

// port setting - alarm
#define MIB_VOIP_ALARM_ENABLE			160
#define MIB_VOIP_ALARM_TIME_HH			161
#define MIB_VOIP_ALARM_TIME_MM			162
#define MIB_VOIP_ALARM_RING_LAST_DAY		163
#define MIB_VOIP_ALARM_RING_DEFER		164

// port setting - PSTN Routing Prefix
#define MIB_VOIP_PSTN_ROUTING_PREFIX		188

// FwUpdate setting
#define MIB_VOIP_FW_UPDATE_MODE			189
#define MIB_VOIP_FW_UPDATE_TFTP_ADDR		190
#define MIB_VOIP_FW_UPDATE_HTTP_ADDR		191
#define MIB_VOIP_FW_UPDATE_HTTP_PORT		192
#define MIB_VOIP_FW_UPDATE_FTP_ADDR		193
#define MIB_VOIP_FW_UPDATE_FTP_USER		194
#define MIB_VOIP_FW_UPDATE_FTP_PASSWD		195
#define MIB_VOIP_FW_UPDATE_FILE_PATH		196
#define MIB_VOIP_FW_UPDATE_POWER_ON		197
#define MIB_VOIP_FW_UPDATE_SCHEDULING_DAY	198
#define MIB_VOIP_FW_UPDATE_SCHEDULING_TIME	199
#define MIB_VOIP_FW_UPDATE_AUTO			200
#define MIB_VOIP_FW_UPDATE_FILE_PREFIX		201
#define MIB_VOIP_FW_UPDATE_NEXT_TIME		202
#define MIB_VOIP_FW_UPDATE_FW_VERSION		203

// disconnect tone detect
#define	MIB_VOIP_DISTONE_NUM			166
#define	MIB_VOIP_D1FREQNUM			167
#define	MIB_VOIP_D1FREQ1			168
#define	MIB_VOIP_D1FREQ2			169
#define	MIB_VOIP_D1ACCUR			170
#define	MIB_VOIP_D1LEVEL			171
#define	MIB_VOIP_D1ONUP				172
#define	MIB_VOIP_D1ONLOW			173
#define	MIB_VOIP_D1OFFUP			174
#define	MIB_VOIP_D1OFFLOW			175
#define	MIB_VOIP_D2FREQNUM			176
#define	MIB_VOIP_D2FREQ1			177
#define	MIB_VOIP_D2FREQ2			178
#define	MIB_VOIP_D2ACCUR			179
#define	MIB_VOIP_D2LEVEL			180
#define	MIB_VOIP_D2ONUP				181
#define	MIB_VOIP_D2ONLOW			182
#define	MIB_VOIP_D2OFFUP			183
#define	MIB_VOIP_D2OFFLOW			184

#define MIB_VOIP_HWNAT_ENABLE			185
// auto_bypass_relay
#define MIB_VOIP_AUTO_BYPASS_RELAY		204

// two_stage_dial
#define MIB_VOIP_TWO_STAGE_DIAL			205

// direct ip call
#define MIB_VOIP_DIRECT_IP_CALL			206

/*+++++added by Jack for auto provision for tftp and ftp+++++*/
#define MIB_VOIP_AUTO_CFG_TFTP_ADDR		207
#define MIB_VOIP_AUTO_CFG_FTP_ADDR		208
#define MIB_VOIP_AUTO_CFG_FTP_USER		209
#define MIB_VOIP_AUTO_CFG_FTP_PASSWD		210
/*-----end-----*/

// port setting - codec
#define MIB_VOIP_G726_PACK			211

// bandwidth mgr
#define MIB_VOIP_BANDWIDTH_LANPORT0_EGRESS	212
#define MIB_VOIP_BANDWIDTH_LANPORT1_EGRESS	213
#define MIB_VOIP_BANDWIDTH_LANPORT2_EGRESS	214
#define MIB_VOIP_BANDWIDTH_LANPORT3_EGRESS	215
#define MIB_VOIP_BANDWIDTH_WANPORT_EGRESS	216
#define MIB_VOIP_BANDWIDTH_LANPORT0_INGRESS	217
#define MIB_VOIP_BANDWIDTH_LANPORT1_INGRESS	218
#define MIB_VOIP_BANDWIDTH_LANPORT2_INGRESS	219
#define MIB_VOIP_BANDWIDTH_LANPORT3_INGRESS	220
#define MIB_VOIP_BANDWIDTH_WANPORT_INGRESS	221

// port setting - speex nb codec
#define MIB_VOIP_SPEEX_NB_RATE			222

// customize tone
#define MIB_VOIP_CUST_TONE_DUMMY		223

// V.152
#define MIB_VOIP_USE_V152		224
#define MIB_VOIP_V152_PAYLOAD_TYPE	225
#define MIB_VOIP_V152_CODEC_TYPE	226

// RTP redundant
#define MIB_VOIP_RTP_RED_PAYLOAD_TYPE	227
#define MIB_VOIP_RTP_RED_CODEC		228

//WAN VLAN TAG
#define MIB_VOIP_VLAN_ENABLE             229
#define MIB_VOIP_VLAN_TAG                230
#define MIB_VOIP_VLAN_BRIDGE_ENABLE      231
#define MIB_VOIP_VLAN_BRIDGE_TAG         232
#define MIB_VOIP_VLAN_BRIDGE_PORT        233
#define MIB_VOIP_VLAN_BRIDGE_MULTICAST_ENABLE 234
#define MIB_VOIP_VLAN_BRIDGE_MULTICAST_TAG    235
#define MIB_VOIP_VLAN_HOST_ENABLE          236
#define MIB_VOIP_VLAN_HOST_TAG          237
#define MIB_VOIP_VLAN_HOST_PRI          238
#define MIB_VOIP_VLAN_WIFI_ENABLE       239
#define MIB_VOIP_VLAN_WIFI_TAG          240
#define MIB_VOIP_VLAN_WIFI_PRI          241
#define MIB_VOIP_VLAN_WIFI_VAP0_ENABLE  242
#define MIB_VOIP_VLAN_WIFI_VAP0_TAG     243
#define MIB_VOIP_VLAN_WIFI_VAP0_PRI     244
#define MIB_VOIP_VLAN_WIFI_VAP1_ENABLE  245
#define MIB_VOIP_VLAN_WIFI_VAP1_TAG     246
#define MIB_VOIP_VLAN_WIFI_VAP1_PRI     247
#define MIB_VOIP_VLAN_WIFI_VAP2_ENABLE  248
#define MIB_VOIP_VLAN_WIFI_VAP2_TAG     249
#define MIB_VOIP_VLAN_WIFI_VAP2_PRI     250
#define MIB_VOIP_VLAN_WIFI_VAP3_ENABLE  251
#define MIB_VOIP_VLAN_WIFI_VAP3_TAG     252
#define MIB_VOIP_VLAN_WIFI_VAP3_PRI     253

// reserve 254-269 for VLAN

#define MIB_VOIP_ECHO_LEC		270

// T.38 parameters
#define MIB_VOIP_T38_PARAM_ENABLE		271
#define MIB_VOIP_T38_MAX_BUFFER			272
#define MIB_VOIP_T38_RATE_MGT			273
#define MIB_VOIP_T38_MAX_RATE			274
#define MIB_VOIP_T38_ENABLE_ECM			275
#define MIB_VOIP_T38_ECC_SIGNAL			276
#define MIB_VOIP_T38_ECC_DATA			277

#define MIB_VOIP_PLC				278
#define MIB_VOIP_RTCPXR				279
#define MIB_VOIP_ANSTONE			280
#define MIB_VOIP_ECHO_NLP			281
#define MIB_VOIP_VAD_THRESHOLD			282
#define MIB_VOIP_CNG				283
#define MIB_VOIP_CNG_THRESHOLD			284
#define MIB_VOIP_G7111_PRECEDENCE		285
#define MIB_VOIP_SID_MODE			286
#define MIB_VOIP_SID_LEVEL			287
#define MIB_VOIP_SID_GAIN			288
#define MIB_VOIP_FAX_MODEM_RFC2833		289
#define MIB_VOIP_RTCP_INTERVAL			290
#define MIB_VOIP_FAXMODEM_RFC2833_PT		291
#define MIB_VOIP_DTMF_RFC2833_PI		292
#define MIB_VOIP_FAXMODEM_RFC2833_PI		293
#define MIB_VOIP_FAXMODEM_RFC2833_PT_SAME_DTMF	294
#define MIB_VOIP_T38_ENABLE_SPOOF	295		// T.38 parameters 
#define MIB_VOIP_T38_DUPLICATE_NUM	296		// T.38 parameters
#define MIB_VOIP_ROOT				297		

#define MIB_VOIP_CUST_TONE_C1_FREQ0		298
#define MIB_VOIP_CUST_TONE_C1_FREQ1		299
#define MIB_VOIP_CUST_TONE_C1_FREQ2		300
#define MIB_VOIP_CUST_TONE_C1_FREQ3		301
#define MIB_VOIP_CUST_TONE_C1_GAIN0		302
#define MIB_VOIP_CUST_TONE_C1_GAIN1		303
#define MIB_VOIP_CUST_TONE_C1_GAIN2		304
#define MIB_VOIP_CUST_TONE_C1_GAIN3		305

#define MIB_VOIP_CUST_TONE_C2_FREQ0		306
#define MIB_VOIP_CUST_TONE_C2_FREQ1		307
#define MIB_VOIP_CUST_TONE_C2_FREQ2		308
#define MIB_VOIP_CUST_TONE_C2_FREQ3		309
#define MIB_VOIP_CUST_TONE_C2_GAIN0		310
#define MIB_VOIP_CUST_TONE_C2_GAIN1		311
#define MIB_VOIP_CUST_TONE_C2_GAIN2		312
#define MIB_VOIP_CUST_TONE_C2_GAIN3		313

#define MIB_VOIP_CUST_TONE_C3_FREQ0		314
#define MIB_VOIP_CUST_TONE_C3_FREQ1		315
#define MIB_VOIP_CUST_TONE_C3_FREQ2		316
#define MIB_VOIP_CUST_TONE_C3_FREQ3		317
#define MIB_VOIP_CUST_TONE_C3_GAIN0		318
#define MIB_VOIP_CUST_TONE_C3_GAIN1		319
#define MIB_VOIP_CUST_TONE_C3_GAIN2		320
#define MIB_VOIP_CUST_TONE_C3_GAIN3		321

#define MIB_VOIP_CUST_TONE_CAD_ON4              322
#define MIB_VOIP_CUST_TONE_CAD_ON5              323
#define MIB_VOIP_CUST_TONE_CAD_ON6              324
#define MIB_VOIP_CUST_TONE_CAD_ON7              325
#define MIB_VOIP_CUST_TONE_CAD_OFF4             326
#define MIB_VOIP_CUST_TONE_CAD_OFF5             327
#define MIB_VOIP_CUST_TONE_CAD_OFF6             328
#define MIB_VOIP_CUST_TONE_CAD_OFF7             329

#define MIB_VOIP_CUST_TONE_C4_FREQ0		330
#define MIB_VOIP_CUST_TONE_C4_FREQ1		331
#define MIB_VOIP_CUST_TONE_C4_FREQ2		332
#define MIB_VOIP_CUST_TONE_C4_FREQ3		333
#define MIB_VOIP_CUST_TONE_C4_GAIN0		334
#define MIB_VOIP_CUST_TONE_C4_GAIN1		335
#define MIB_VOIP_CUST_TONE_C4_GAIN2		336
#define MIB_VOIP_CUST_TONE_C4_GAIN3		337

#define MIB_VOIP_CUST_TONE_C5_FREQ0		338
#define MIB_VOIP_CUST_TONE_C5_FREQ1		339
#define MIB_VOIP_CUST_TONE_C5_FREQ2		340
#define MIB_VOIP_CUST_TONE_C5_FREQ3		341
#define MIB_VOIP_CUST_TONE_C5_GAIN0		342
#define MIB_VOIP_CUST_TONE_C5_GAIN1		343
#define MIB_VOIP_CUST_TONE_C5_GAIN2		344
#define MIB_VOIP_CUST_TONE_C5_GAIN3		345

#define MIB_VOIP_CUST_TONE_C6_FREQ0		346
#define MIB_VOIP_CUST_TONE_C6_FREQ1		347
#define MIB_VOIP_CUST_TONE_C6_FREQ2		348
#define MIB_VOIP_CUST_TONE_C6_FREQ3		349
#define MIB_VOIP_CUST_TONE_C6_GAIN0		350
#define MIB_VOIP_CUST_TONE_C6_GAIN1		351
#define MIB_VOIP_CUST_TONE_C6_GAIN2		352
#define MIB_VOIP_CUST_TONE_C6_GAIN3		353

#define MIB_VOIP_CUST_TONE_C7_FREQ0		354
#define MIB_VOIP_CUST_TONE_C7_FREQ1		355
#define MIB_VOIP_CUST_TONE_C7_FREQ2		356
#define MIB_VOIP_CUST_TONE_C7_FREQ3		357
#define MIB_VOIP_CUST_TONE_C7_GAIN0		358
#define MIB_VOIP_CUST_TONE_C7_GAIN1		359
#define MIB_VOIP_CUST_TONE_C7_GAIN2		360
#define MIB_VOIP_CUST_TONE_C7_GAIN3		361


#define MIB_VOIP_CUST_TONE_CAD_ON8              362
#define MIB_VOIP_CUST_TONE_CAD_ON9              363
#define MIB_VOIP_CUST_TONE_CAD_ON10             364
#define MIB_VOIP_CUST_TONE_CAD_ON11             365
#define MIB_VOIP_CUST_TONE_CAD_OFF8             366
#define MIB_VOIP_CUST_TONE_CAD_OFF9             367
#define MIB_VOIP_CUST_TONE_CAD_OFF10            368
#define MIB_VOIP_CUST_TONE_CAD_OFF11            369

#define MIB_VOIP_CUST_TONE_C8_FREQ0		370
#define MIB_VOIP_CUST_TONE_C8_FREQ1		371
#define MIB_VOIP_CUST_TONE_C8_FREQ2		372
#define MIB_VOIP_CUST_TONE_C8_FREQ3		373
#define MIB_VOIP_CUST_TONE_C8_GAIN0		374
#define MIB_VOIP_CUST_TONE_C8_GAIN1		375
#define MIB_VOIP_CUST_TONE_C8_GAIN2		376
#define MIB_VOIP_CUST_TONE_C8_GAIN3		377

#define MIB_VOIP_CUST_TONE_C9_FREQ0		378
#define MIB_VOIP_CUST_TONE_C9_FREQ1		379
#define MIB_VOIP_CUST_TONE_C9_FREQ2		380
#define MIB_VOIP_CUST_TONE_C9_FREQ3		381
#define MIB_VOIP_CUST_TONE_C9_GAIN0		382
#define MIB_VOIP_CUST_TONE_C9_GAIN1		383
#define MIB_VOIP_CUST_TONE_C9_GAIN2		384
#define MIB_VOIP_CUST_TONE_C9_GAIN3		385

#define MIB_VOIP_CUST_TONE_C10_FREQ0		386
#define MIB_VOIP_CUST_TONE_C10_FREQ1		387
#define MIB_VOIP_CUST_TONE_C10_FREQ2		388
#define MIB_VOIP_CUST_TONE_C10_FREQ3		389
#define MIB_VOIP_CUST_TONE_C10_GAIN0		390
#define MIB_VOIP_CUST_TONE_C10_GAIN1		391
#define MIB_VOIP_CUST_TONE_C10_GAIN2		392
#define MIB_VOIP_CUST_TONE_C10_GAIN3		393

#define MIB_VOIP_CUST_TONE_C11_FREQ0		394
#define MIB_VOIP_CUST_TONE_C11_FREQ1		395
#define MIB_VOIP_CUST_TONE_C11_FREQ2		396
#define MIB_VOIP_CUST_TONE_C11_FREQ3		397
#define MIB_VOIP_CUST_TONE_C11_GAIN0		398
#define MIB_VOIP_CUST_TONE_C11_GAIN1		399
#define MIB_VOIP_CUST_TONE_C11_GAIN2		400
#define MIB_VOIP_CUST_TONE_C11_GAIN3		401

#define MIB_VOIP_CUST_TONE_CAD_ON12              402
#define MIB_VOIP_CUST_TONE_CAD_ON13              403
#define MIB_VOIP_CUST_TONE_CAD_ON14              404
#define MIB_VOIP_CUST_TONE_CAD_ON15              405
#define MIB_VOIP_CUST_TONE_CAD_OFF12             406
#define MIB_VOIP_CUST_TONE_CAD_OFF13             407
#define MIB_VOIP_CUST_TONE_CAD_OFF14             408
#define MIB_VOIP_CUST_TONE_CAD_OFF15             409

#define MIB_VOIP_CUST_TONE_C12_FREQ0		410
#define MIB_VOIP_CUST_TONE_C12_FREQ1		411
#define MIB_VOIP_CUST_TONE_C12_FREQ2		412
#define MIB_VOIP_CUST_TONE_C12_FREQ3		413
#define MIB_VOIP_CUST_TONE_C12_GAIN0		414
#define MIB_VOIP_CUST_TONE_C12_GAIN1		415
#define MIB_VOIP_CUST_TONE_C12_GAIN2		416
#define MIB_VOIP_CUST_TONE_C12_GAIN3		417

#define MIB_VOIP_CUST_TONE_C13_FREQ0		418
#define MIB_VOIP_CUST_TONE_C13_FREQ1		419
#define MIB_VOIP_CUST_TONE_C13_FREQ2		420
#define MIB_VOIP_CUST_TONE_C13_FREQ3		421
#define MIB_VOIP_CUST_TONE_C13_GAIN0		422
#define MIB_VOIP_CUST_TONE_C13_GAIN1		423
#define MIB_VOIP_CUST_TONE_C13_GAIN2		424
#define MIB_VOIP_CUST_TONE_C13_GAIN3		425

#define MIB_VOIP_CUST_TONE_C14_FREQ0		426
#define MIB_VOIP_CUST_TONE_C14_FREQ1		427
#define MIB_VOIP_CUST_TONE_C14_FREQ2		428
#define MIB_VOIP_CUST_TONE_C14_FREQ3		429
#define MIB_VOIP_CUST_TONE_C14_GAIN0		430
#define MIB_VOIP_CUST_TONE_C14_GAIN1		431
#define MIB_VOIP_CUST_TONE_C14_GAIN2		432
#define MIB_VOIP_CUST_TONE_C14_GAIN3		433

#define MIB_VOIP_CUST_TONE_C15_FREQ0		434
#define MIB_VOIP_CUST_TONE_C15_FREQ1		435
#define MIB_VOIP_CUST_TONE_C15_FREQ2		436
#define MIB_VOIP_CUST_TONE_C15_FREQ3		437
#define MIB_VOIP_CUST_TONE_C15_GAIN0		438
#define MIB_VOIP_CUST_TONE_C15_GAIN1		439
#define MIB_VOIP_CUST_TONE_C15_GAIN2		440
#define MIB_VOIP_CUST_TONE_C15_GAIN3		441

#define MIB_VOIP_CUST_TONE_CAD_ON16             442
#define MIB_VOIP_CUST_TONE_CAD_ON17             443
#define MIB_VOIP_CUST_TONE_CAD_ON18             444
#define MIB_VOIP_CUST_TONE_CAD_ON19             445
#define MIB_VOIP_CUST_TONE_CAD_OFF16            446
#define MIB_VOIP_CUST_TONE_CAD_OFF17            447
#define MIB_VOIP_CUST_TONE_CAD_OFF18            448
#define MIB_VOIP_CUST_TONE_CAD_OFF19            449

#define MIB_VOIP_CUST_TONE_C16_FREQ0		450
#define MIB_VOIP_CUST_TONE_C16_FREQ1		451
#define MIB_VOIP_CUST_TONE_C16_FREQ2		452
#define MIB_VOIP_CUST_TONE_C16_FREQ3		453
#define MIB_VOIP_CUST_TONE_C16_GAIN0		454
#define MIB_VOIP_CUST_TONE_C16_GAIN1		455
#define MIB_VOIP_CUST_TONE_C16_GAIN2		456
#define MIB_VOIP_CUST_TONE_C16_GAIN3		457

#define MIB_VOIP_CUST_TONE_C17_FREQ0		458
#define MIB_VOIP_CUST_TONE_C17_FREQ1		459
#define MIB_VOIP_CUST_TONE_C17_FREQ2		460
#define MIB_VOIP_CUST_TONE_C17_FREQ3		461
#define MIB_VOIP_CUST_TONE_C17_GAIN0		462
#define MIB_VOIP_CUST_TONE_C17_GAIN1		463
#define MIB_VOIP_CUST_TONE_C17_GAIN2		464
#define MIB_VOIP_CUST_TONE_C17_GAIN3		465

#define MIB_VOIP_CUST_TONE_C18_FREQ0		466
#define MIB_VOIP_CUST_TONE_C18_FREQ1		467
#define MIB_VOIP_CUST_TONE_C18_FREQ2		468
#define MIB_VOIP_CUST_TONE_C18_FREQ3		469
#define MIB_VOIP_CUST_TONE_C18_GAIN0		470
#define MIB_VOIP_CUST_TONE_C18_GAIN1		471
#define MIB_VOIP_CUST_TONE_C18_GAIN2		472
#define MIB_VOIP_CUST_TONE_C18_GAIN3		473

#define MIB_VOIP_CUST_TONE_C19_FREQ0		474
#define MIB_VOIP_CUST_TONE_C19_FREQ1		475
#define MIB_VOIP_CUST_TONE_C19_FREQ2		476
#define MIB_VOIP_CUST_TONE_C19_FREQ3		477
#define MIB_VOIP_CUST_TONE_C19_GAIN0		478
#define MIB_VOIP_CUST_TONE_C19_GAIN1		479
#define MIB_VOIP_CUST_TONE_C19_GAIN2		480
#define MIB_VOIP_CUST_TONE_C19_GAIN3		481

#define MIB_VOIP_CUST_TONE_CAD_ON20             482
#define MIB_VOIP_CUST_TONE_CAD_ON21             483
#define MIB_VOIP_CUST_TONE_CAD_ON22             484
#define MIB_VOIP_CUST_TONE_CAD_ON23             485
#define MIB_VOIP_CUST_TONE_CAD_OFF20            486
#define MIB_VOIP_CUST_TONE_CAD_OFF21            487
#define MIB_VOIP_CUST_TONE_CAD_OFF22            488
#define MIB_VOIP_CUST_TONE_CAD_OFF23            489

#define MIB_VOIP_CUST_TONE_C20_FREQ0		490
#define MIB_VOIP_CUST_TONE_C20_FREQ1		491
#define MIB_VOIP_CUST_TONE_C20_FREQ2		492
#define MIB_VOIP_CUST_TONE_C20_FREQ3		493
#define MIB_VOIP_CUST_TONE_C20_GAIN0		494
#define MIB_VOIP_CUST_TONE_C20_GAIN1		495
#define MIB_VOIP_CUST_TONE_C20_GAIN2		496
#define MIB_VOIP_CUST_TONE_C20_GAIN3		497

#define MIB_VOIP_CUST_TONE_C21_FREQ0		498
#define MIB_VOIP_CUST_TONE_C21_FREQ1		499
#define MIB_VOIP_CUST_TONE_C21_FREQ2		500
#define MIB_VOIP_CUST_TONE_C21_FREQ3		501
#define MIB_VOIP_CUST_TONE_C21_GAIN0		502
#define MIB_VOIP_CUST_TONE_C21_GAIN1		503
#define MIB_VOIP_CUST_TONE_C21_GAIN2		504
#define MIB_VOIP_CUST_TONE_C21_GAIN3		505

#define MIB_VOIP_CUST_TONE_C22_FREQ0		506
#define MIB_VOIP_CUST_TONE_C22_FREQ1		507
#define MIB_VOIP_CUST_TONE_C22_FREQ2		508
#define MIB_VOIP_CUST_TONE_C22_FREQ3		509
#define MIB_VOIP_CUST_TONE_C22_GAIN0		510
#define MIB_VOIP_CUST_TONE_C22_GAIN1		511
#define MIB_VOIP_CUST_TONE_C22_GAIN2		512
#define MIB_VOIP_CUST_TONE_C22_GAIN3		513

#define MIB_VOIP_CUST_TONE_C23_FREQ0		514
#define MIB_VOIP_CUST_TONE_C23_FREQ1		515
#define MIB_VOIP_CUST_TONE_C23_FREQ2		516
#define MIB_VOIP_CUST_TONE_C23_FREQ3		517
#define MIB_VOIP_CUST_TONE_C23_GAIN0		518
#define MIB_VOIP_CUST_TONE_C23_GAIN1		519
#define MIB_VOIP_CUST_TONE_C23_GAIN2		520
#define MIB_VOIP_CUST_TONE_C23_GAIN3		521

#define MIB_VOIP_CUST_TONE_CAD_ON24              522
#define MIB_VOIP_CUST_TONE_CAD_ON25              523
#define MIB_VOIP_CUST_TONE_CAD_ON26              524
#define MIB_VOIP_CUST_TONE_CAD_ON27              525
#define MIB_VOIP_CUST_TONE_CAD_OFF24             526
#define MIB_VOIP_CUST_TONE_CAD_OFF25             527
#define MIB_VOIP_CUST_TONE_CAD_OFF26             528
#define MIB_VOIP_CUST_TONE_CAD_OFF27             529

#define MIB_VOIP_CUST_TONE_C24_FREQ0		530
#define MIB_VOIP_CUST_TONE_C24_FREQ1		531
#define MIB_VOIP_CUST_TONE_C24_FREQ2		532
#define MIB_VOIP_CUST_TONE_C24_FREQ3		533
#define MIB_VOIP_CUST_TONE_C24_GAIN0		534
#define MIB_VOIP_CUST_TONE_C24_GAIN1		535
#define MIB_VOIP_CUST_TONE_C24_GAIN2		536
#define MIB_VOIP_CUST_TONE_C24_GAIN3		537

#define MIB_VOIP_CUST_TONE_C25_FREQ0		538
#define MIB_VOIP_CUST_TONE_C25_FREQ1		539
#define MIB_VOIP_CUST_TONE_C25_FREQ2		540
#define MIB_VOIP_CUST_TONE_C25_FREQ3		541
#define MIB_VOIP_CUST_TONE_C25_GAIN0		542
#define MIB_VOIP_CUST_TONE_C25_GAIN1		543
#define MIB_VOIP_CUST_TONE_C25_GAIN2		544
#define MIB_VOIP_CUST_TONE_C25_GAIN3		545

#define MIB_VOIP_CUST_TONE_C26_FREQ0		546
#define MIB_VOIP_CUST_TONE_C26_FREQ1		547
#define MIB_VOIP_CUST_TONE_C26_FREQ2		548
#define MIB_VOIP_CUST_TONE_C26_FREQ3		549
#define MIB_VOIP_CUST_TONE_C26_GAIN0		550
#define MIB_VOIP_CUST_TONE_C26_GAIN1		551
#define MIB_VOIP_CUST_TONE_C26_GAIN2		552
#define MIB_VOIP_CUST_TONE_C26_GAIN3		553

#define MIB_VOIP_CUST_TONE_C27_FREQ0		554
#define MIB_VOIP_CUST_TONE_C27_FREQ1		555
#define MIB_VOIP_CUST_TONE_C27_FREQ2		556
#define MIB_VOIP_CUST_TONE_C27_FREQ3		557
#define MIB_VOIP_CUST_TONE_C27_GAIN0		558
#define MIB_VOIP_CUST_TONE_C27_GAIN1		559
#define MIB_VOIP_CUST_TONE_C27_GAIN2		560
#define MIB_VOIP_CUST_TONE_C27_GAIN3		561

#define MIB_VOIP_CUST_TONE_CAD_ON28             562
#define MIB_VOIP_CUST_TONE_CAD_ON29             563
#define MIB_VOIP_CUST_TONE_CAD_ON30             564
#define MIB_VOIP_CUST_TONE_CAD_ON31             565
#define MIB_VOIP_CUST_TONE_CAD_OFF28            566
#define MIB_VOIP_CUST_TONE_CAD_OFF29            567
#define MIB_VOIP_CUST_TONE_CAD_OFF30            568
#define MIB_VOIP_CUST_TONE_CAD_OFF31            569

#define MIB_VOIP_CUST_TONE_C28_FREQ0		570
#define MIB_VOIP_CUST_TONE_C28_FREQ1		571
#define MIB_VOIP_CUST_TONE_C28_FREQ2		572
#define MIB_VOIP_CUST_TONE_C28_FREQ3		573
#define MIB_VOIP_CUST_TONE_C28_GAIN0		574
#define MIB_VOIP_CUST_TONE_C28_GAIN1		575
#define MIB_VOIP_CUST_TONE_C28_GAIN2		576
#define MIB_VOIP_CUST_TONE_C28_GAIN3		577

#define MIB_VOIP_CUST_TONE_C29_FREQ0		578
#define MIB_VOIP_CUST_TONE_C29_FREQ1		579
#define MIB_VOIP_CUST_TONE_C29_FREQ2		580
#define MIB_VOIP_CUST_TONE_C29_FREQ3		581
#define MIB_VOIP_CUST_TONE_C29_GAIN0		582
#define MIB_VOIP_CUST_TONE_C29_GAIN1		583
#define MIB_VOIP_CUST_TONE_C29_GAIN2		584
#define MIB_VOIP_CUST_TONE_C29_GAIN3		585

#define MIB_VOIP_CUST_TONE_C30_FREQ0		586
#define MIB_VOIP_CUST_TONE_C30_FREQ1		587
#define MIB_VOIP_CUST_TONE_C30_FREQ2		588
#define MIB_VOIP_CUST_TONE_C30_FREQ3		589
#define MIB_VOIP_CUST_TONE_C30_GAIN0		590
#define MIB_VOIP_CUST_TONE_C30_GAIN1		591
#define MIB_VOIP_CUST_TONE_C30_GAIN2		592
#define MIB_VOIP_CUST_TONE_C30_GAIN3		593

#define MIB_VOIP_CUST_TONE_C31_FREQ0		594
#define MIB_VOIP_CUST_TONE_C31_FREQ1		595
#define MIB_VOIP_CUST_TONE_C31_FREQ2		596
#define MIB_VOIP_CUST_TONE_C31_FREQ3		597
#define MIB_VOIP_CUST_TONE_C31_GAIN0		598
#define MIB_VOIP_CUST_TONE_C31_GAIN1		599
#define MIB_VOIP_CUST_TONE_C31_GAIN2		600
#define MIB_VOIP_CUST_TONE_C31_GAIN3		601



// Config Setting
#define	VOIP_NONE_SETTING		0
#define	VOIP_CURRENT_SETTING	1
#define	VOIP_DEFAULT_SETTING	2
#define	VOIP_ALL_SETTING		(VOIP_CURRENT_SETTING | VOIP_DEFAULT_SETTING)

enum {
	V_INT = 0,
	V_UINT,
	// 1 byte
	V_CHAR,
	V_BYTE,
	// 2 byte
	V_SHORT,
	V_WORD,
	// 4 byte
	V_LONG,
	V_DWORD,
	// other
	V_IP4,
	V_MAC6,
	V_MIB,
	//--------------------------------------
	//------------- Array type -------------
	//--------------------------------------
	V_STRING, // string is a special byte array
	V_BYTE_ARRAY,
	//--------------------------------------
	//------------- List Type --------------
	//--------------------------------------
	V_INT_LIST,
	V_UINT_LIST,
	V_CHAR_LIST,
	V_BYTE_LIST,
	V_SHORT_LIST,
	V_WORD_LIST,
	V_LONG_LIST,
	V_DWORD_LIST,
	V_IP4_LIST,
	V_MAC6_LIST,
	V_MIB_LIST,
	V_END
};

typedef struct voipMibEntry_S voipMibEntry_T;

struct voipMibEntry_S {
	int id;
	char name[32];
	int type;
	int offset;
	int total_size;						// if type is V_XXX_LIST (total_size)
	int unit_size;						
	voipMibEntry_T *next_mib_table;		// if type is V_MIB or V_MIB_LIST
    const unsigned char *default_value;
};

#ifndef FIELD_OFFSET
#define FIELD_OFFSET(type, field)	((unsigned long)(long *)&(((type *)0)->field))
#endif

#ifndef NULL
#define NULL ((void *) 0)
#endif

#define VOIP_OFFSET(field)					((int)FIELD_OFFSET(voipCfgParam_t,field))
#define VOIP_SIZE(field)					sizeof(((voipCfgParam_t *)0)->field)
#define VOIP_FIELD(field)					VOIP_OFFSET(field), VOIP_SIZE(field), 0, NULL
#define VOIP_MIB_FIELD(field, mib)			VOIP_OFFSET(field), VOIP_SIZE(field), 0, mib
#define VOIP_LIST_FIELD(field)				VOIP_OFFSET(field), VOIP_SIZE(field), \
											VOIP_SIZE(field[0]), NULL
#define VOIP_MIB_LIST_FIELD(field, mib)		VOIP_OFFSET(field), VOIP_SIZE(field), \
											VOIP_SIZE(field[0]), mib
#define VOIP_STRING_FIELD					VOIP_LIST_FIELD
#define VOIP_ARRAY_FIELD					VOIP_LIST_FIELD

#define VOIP_PORT_OFFSET(field)					((int)FIELD_OFFSET(voipCfgPortParam_t,field))
#define VOIP_PORT_SIZE(field)					sizeof(((voipCfgPortParam_t *)0)->field)
#define VOIP_PORT_FIELD(field)					VOIP_PORT_OFFSET(field), VOIP_PORT_SIZE(field), 0, NULL
#define VOIP_PORT_MIB_FIELD(field, mib)			VOIP_PORT_OFFSET(field), VOIP_PORT_SIZE(field), 0, mib
#define VOIP_PORT_LIST_FIELD(field)				VOIP_PORT_OFFSET(field), VOIP_PORT_SIZE(field), \
												VOIP_PORT_SIZE(field[0]), NULL
#define VOIP_PORT_MIB_LIST_FIELD(field, mib)	VOIP_PORT_OFFSET(field), VOIP_PORT_SIZE(field), \
												VOIP_PORT_SIZE(field[0]), mib
#define VOIP_PORT_STRING_FIELD					VOIP_PORT_LIST_FIELD
#define VOIP_PORT_ARRAY_FIELD					VOIP_PORT_LIST_FIELD

/* speed dial */
#define VOIP_SPEED_DIAL_OFFSET(field)			((int)FIELD_OFFSET(SpeedDialCfg_t,field))
#define VOIP_SPEED_DIAL_SIZE(field)				sizeof(((SpeedDialCfg_t *)0)->field)
#define VOIP_SPEED_DIAL_FIELD(field)			VOIP_SPEED_DIAL_OFFSET(field), VOIP_SPEED_DIAL_SIZE(field), 0, NULL
#define VOIP_SPEED_DIAL_LIST_FIELD(field)		VOIP_SPEED_DIAL_OFFSET(field), VOIP_SPEED_DIAL_SIZE(field), \
												VOIP_SPEED_DIAL_SIZE(field[0]), NULL
#define VOIP_SPEED_DIAL_STRING_FIELD			VOIP_SPEED_DIAL_LIST_FIELD

/* customer tone */
#define VOIP_CUST_TONE_OFFSET(field)		((int)FIELD_OFFSET(st_ToneCfgParam,field))
#define VOIP_CUST_TONE_SIZE(field)			sizeof(((st_ToneCfgParam *)0)->field)
#define VOIP_CUST_TONE_FIELD(field)			VOIP_CUST_TONE_OFFSET(field), VOIP_CUST_TONE_SIZE(field), 0, NULL
#define VOIP_CUST_TONE_LIST_FIELD(field)	VOIP_CUST_TONE_OFFSET(field), VOIP_CUST_TONE_SIZE(field), \
											VOIP_CUST_TONE_SIZE(field[0]), NULL
#define VOIP_CUST_TONE_STRING_FIELD			VOIP_CUST_TONE_LIST_FIELD

/* voip proxy */
#define VOIP_PROXY_OFFSET(field)			((int)FIELD_OFFSET(voipCfgProxy_t,field))
#define VOIP_PROXY_SIZE(field)				sizeof(((voipCfgProxy_t *)0)->field)
#define VOIP_PROXY_FIELD(field)				VOIP_PROXY_OFFSET(field), VOIP_PROXY_SIZE(field), 0, NULL
#define VOIP_PROXY_LIST_FIELD(field)		VOIP_PROXY_OFFSET(field), VOIP_PROXY_SIZE(field), \
											VOIP_PROXY_SIZE(field[0]), NULL
#define VOIP_PROXY_STRING_FIELD				VOIP_PROXY_LIST_FIELD

#define VOIP_ABBREVIATED_DIAL_OFFSET(field)			((int)FIELD_OFFSET(abbrDialCfg_t,field))
#define VOIP_ABBREVIATED_DIAL_SIZE(field)				sizeof(((abbrDialCfg_t *)0)->field)
#define VOIP_ABBREVIATED_DIAL_FIELD(field)			VOIP_ABBREVIATED_DIAL_OFFSET(field), VOIP_ABBREVIATED_DIAL_SIZE(field), 0, NULL
#define VOIP_ABBREVIATED_DIAL_LIST_FIELD(field)		VOIP_ABBREVIATED_DIAL_OFFSET(field), VOIP_ABBREVIATED_DIAL_SIZE(field), \
													VOIP_ABBREVIATED_DIAL_SIZE(field[0]), NULL
#define VOIP_ABBREVIATED_DIAL_STRING_FIELD			VOIP_ABBREVIATED_DIAL_LIST_FIELD

#ifdef __cplusplus
extern "C" {
#endif

// check mib table is correct
int voip_mibtbl_check(int *size);
// write mib table to fd
int voip_mibtbl_write(const void *data, int fd, int mode);
// read mib entry from line
int voip_mibtbl_read_line(voipCfgAll_t *cfg_all, char *line);
// get mib entry, and output result to fd
int voip_mibtbl_get(const char *mib_name, voipCfgAll_t *cfg_all, int fd);
// set mib entry, output result to fd
int voip_mibtbl_set(const char *mib_name, const char *mib_value, voipCfgAll_t *cfg_all, int fd);
// swap if exchange mib data between two different endian system
int voip_mibtbl_swap_value(void *data);

// mib operations
int voip_mibline_to(char *line, const char *name, const char *value);
int voip_mibline_from(const char *line, char *name, char *value);
int voip_mib_from(const voipMibEntry_T *mib_tbl, const char *name,
	const voipMibEntry_T **ppmib, int *offset);
int voip_mib_read(void *data, const char *name, const char *value);

#ifdef VOIP_SUPPORT_TLV_CFG
int voip_mib_write_to_tlv(const voipMibEntry_T *mib_tbl, void *data, unsigned char *pfile, unsigned int *idx);
unsigned int voip_mib_cfg_init_from_tlv(const voipMibEntry_T *mib_root_tbl, unsigned char *pdata_array, void *pfile, unsigned int data_size, unsigned int *pmib_root_offset);
#endif /* VOIP_SUPPORT_TLV_CFG */

// extern variables
extern voipMibEntry_T mibtbl_voip[];
#ifdef VOIP_SUPPORT_TLV_CFG
extern voipMibEntry_T mibtbl_voip_root[];
#endif

#ifdef __cplusplus
}
#endif

#endif // __VOIP_FLASH_MIB_H
