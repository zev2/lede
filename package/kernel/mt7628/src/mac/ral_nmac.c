/*
 ***************************************************************************
 * Ralink Tech Inc.
 * 4F, No. 2 Technology 5th Rd.
 * Science-based Industrial Park
 * Hsin-chu, Taiwan, R.O.C.
 *
 * (c) Copyright 2002-2004, Ralink Technology, Inc.
 *
 * All rights reserved. Ralink's source code is an unpublished work and the
 * use of a copyright notice does not imply otherwise. This source code
 * contains confidential trade secret material of Ralink Tech. Any attemp
 * or participation in deciphering, decoding, reverse engineering or in any
 * way altering the source code is stricitly prohibited, unless the prior
 * written consent of Ralink Technology, Inc. is obtained.
 ***************************************************************************

	Module Name:

	Abstract:

	Revision History:
	Who 		When			What
	--------	----------		----------------------------------------------
*/

#include "rt_config.h"


#if 0
VOID dump_rlt_rxinfo(RTMP_ADAPTER *pAd, RXINFO_STRUC *pRxInfo)
{
	if (pAd->chipCap.hif_type == HIF_RLT) {
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tBA=%d\n", pRxInfo->BA));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tDATA=%d\n", pRxInfo->DATA));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tNULLDATA=%d\n", pRxInfo->NULLDATA));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tFRAG=%d\n", pRxInfo->FRAG));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tU2M=%d\n", pRxInfo->U2M));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tMcast=%d\n", pRxInfo->Mcast));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tBcast=%d\n", pRxInfo->Bcast));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tMyBss=%d\n", pRxInfo->MyBss));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tCrc=%d\n", pRxInfo->Crc));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tCipherErr=%d\n", pRxInfo->CipherErr));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tAMSDU=%d\n", pRxInfo->AMSDU));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tHTC=%d\n", pRxInfo->HTC));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tRSSI=%d\n", pRxInfo->RSSI));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tL2PAD=%d\n", pRxInfo->L2PAD));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tAMPDU=%d\n", pRxInfo->AMPDU));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tDecrypted=%d\n", pRxInfo->Decrypted));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tBssIdx3=%d\n", pRxInfo->BssIdx3));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\twapi_kidx=%d\n", pRxInfo->wapi_kidx));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tpn_len=%d\n", pRxInfo->pn_len));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\ttcp_sum_bypass=%d\n", pRxInfo->tcp_sum_bypass));
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tip_sum_bypass=%d\n", pRxInfo->ip_sum_bypass));
	}
}
#endif


#ifdef RLT_MAC
VOID dumpRxFCEInfo(RTMP_ADAPTER *pAd, RXFCE_INFO *pRxFceInfo)
{
	hex_dump("RxFCEInfo Raw Data", (UCHAR *)pRxFceInfo, sizeof(RXFCE_INFO));

	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("RxFCEInfo Fields:\n"));

	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tinfo_type=%d\n", pRxFceInfo->info_type));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\ts_port=%d\n", pRxFceInfo->s_port));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tqsel=%d\n", pRxFceInfo->qsel));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tpcie_intr=%d\n", pRxFceInfo->pcie_intr));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tmac_len=%d\n", pRxFceInfo->mac_len));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tl3l4_done=%d\n", pRxFceInfo->l3l4_done));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tpkt_80211=%d\n", pRxFceInfo->pkt_80211));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tip_err=%d\n", pRxFceInfo->ip_err));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\ttcp_err=%d\n", pRxFceInfo->tcp_err));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tudp_err=%d\n", pRxFceInfo->udp_err));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tpkt_len=%d\n", pRxFceInfo->pkt_len));
}
#endif /* RLT_MAC */


static UCHAR *txwi_txop_str[]={"HT_TXOP", "PIFS", "SIFS", "BACKOFF", "Invalid"};
#define TXWI_TXOP_STR(_x)	((_x) <= 3 ? txwi_txop_str[(_x)]: txwi_txop_str[4])

VOID dump_rlt_txwi(RTMP_ADAPTER *pAd, TXWI_STRUC *pTxWI)
{
	struct _TXWI_NMAC *txwi_nmac = (struct _TXWI_NMAC *)pTxWI;

	ASSERT((sizeof(struct _TXWI_NMAC) == pAd->chipCap.TXWISize));

	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tPHYMODE=%d(%s)\n", txwi_nmac->PHYMODE,  get_phymode_str(txwi_nmac->PHYMODE)));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tITxBf=%d\n", txwi_nmac->iTxBF));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tETxBf=%d\n", txwi_nmac->eTxBF));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tSounding=%d\n", txwi_nmac->Sounding));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tNDP Sounding BW=%d\n", txwi_nmac->NDPSndBW));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tNDP Sounding Rate=%d\n", txwi_nmac->NDPSndRate));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tSTBC=%d\n", txwi_nmac->STBC));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tShortGI=%d\n", txwi_nmac->ShortGI));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tBW=%d(%sMHz)\n", txwi_nmac->BW, get_bw_str(txwi_nmac->BW)));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tMCS=%d\n", txwi_nmac->MCS));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tTxOP=%d(%s)\n", txwi_nmac->txop, TXWI_TXOP_STR(txwi_nmac->txop)));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tMpduDensity=%d\n", txwi_nmac->MpduDensity));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tAMPDU=%d\n", txwi_nmac->AMPDU));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tTS=%d\n", txwi_nmac->TS));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tCF-ACK=%d\n", txwi_nmac->CFACK));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tMIMO-PS=%d\n", txwi_nmac->MIMOps));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tNSEQ=%d\n", txwi_nmac->NSEQ));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tACK=%d\n", txwi_nmac->ACK));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tFRAG=%d\n", txwi_nmac->FRAG));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tWCID=%d\n", txwi_nmac->wcid));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tBAWinSize=%d\n", txwi_nmac->BAWinSize));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tMPDUtotalByteCnt=%d\n", txwi_nmac->MPDUtotalByteCnt));	
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tPID=%d\n", txwi_nmac->TxPktId));	
}


VOID dump_rlt_rxwi(RTMP_ADAPTER *pAd, RXWI_STRUC *pRxWI)
{
	struct _RXWI_NMAC *rxwi_n = (struct _RXWI_NMAC *)pRxWI;

	ASSERT((sizeof(struct _RXWI_NMAC) == pAd->chipCap.RXWISize));
	
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tWCID=%d\n", rxwi_n->wcid));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tPhyMode=%d(%s)\n", rxwi_n->phy_mode, get_phymode_str(rxwi_n->phy_mode)));

	if (rxwi_n->phy_mode == MODE_VHT)
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tMCS=%d(Nss:%d, MCS:%d)\n",
					rxwi_n->mcs, (rxwi_n->mcs >> 4), (rxwi_n->mcs & 0xf)));
	else
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tMCS=%d\n", rxwi_n->mcs));

	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tBW=%d\n", rxwi_n->bw));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tSGI=%d\n", rxwi_n->sgi));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tMPDUtotalByteCnt=%d\n", rxwi_n->MPDUtotalByteCnt));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tTID=%d\n", rxwi_n->tid));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tSTBC=%d\n", rxwi_n->stbc));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tkey_idx=%d\n", rxwi_n->key_idx));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tBSS_IDX=%d\n", rxwi_n->bss_idx));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF,("\tRSSI=%d:%d:%d!\n", (CHAR)(rxwi_n->rssi[0]), (CHAR)(rxwi_n->rssi[1]), (CHAR)(rxwi_n->rssi[2])));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF,("\tSNR=%d:%d:%d!\n", (CHAR)rxwi_n->bbp_rxinfo[0], (CHAR)rxwi_n->bbp_rxinfo[1], (CHAR)rxwi_n->bbp_rxinfo[2]));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF,("\tFreqOffset=%d!\n", (CHAR)rxwi_n->bbp_rxinfo[4]));
}


static UCHAR *txinfo_type_str[]={"PKT", "", "CMD", "RSV", "Invalid"};
static UCHAR *txinfo_d_port_str[]={"WLAN", "CPU_RX", "CPU_TX", "HOST", "VIRT_RX", "VIRT_TX", "DROP", "Invalid"};
static UCHAR *txinfo_que_str[]={"MGMT", "HCCA", "EDCA_1", "EDCA_2", "Invalid"};

#define TXINFO_TYPE_STR(_x)  	((_x)<=3 ?  txinfo_type_str[_x] : txinfo_type_str[4])
#define TXINFO_DPORT_STR(_x)	((_x) <= 6 ? txinfo_d_port_str[_x]: txinfo_d_port_str[7])
#define TXINFO_QUE_STR(_x)		((_x) <= 3 ? txinfo_que_str[_x]: txinfo_que_str[4])

VOID dump_rlt_txinfo(RTMP_ADAPTER *pAd, TXINFO_STRUC *pTxInfo)
{
	struct _TXINFO_NMAC_PKT *pkt_txinfo = (struct _TXINFO_NMAC_PKT *)pTxInfo;

	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tInfo_Type=%d(%s)\n", pkt_txinfo->info_type, TXINFO_TYPE_STR(pkt_txinfo->info_type)));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\td_port=%d(%s)\n", pkt_txinfo->d_port, TXINFO_DPORT_STR(pkt_txinfo->d_port)));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tQSEL=%d(%s)\n", pkt_txinfo->QSEL, TXINFO_QUE_STR(pkt_txinfo->QSEL)));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tWIV=%d\n", pkt_txinfo->wiv));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\t802.11=%d\n", pkt_txinfo->pkt_80211));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tcso=%d\n", pkt_txinfo->cso));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\ttso=%d\n", pkt_txinfo->tso));
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("\tpkt_len=0x%x\n", pkt_txinfo->pkt_len));
}


#ifdef RTMP_MAC_PCI
VOID rlt_asic_init_txrx_ring(RTMP_ADAPTER *pAd)
{
	DELAY_INT_CFG_STRUC IntCfg;
	UINT32 phy_addr, offset;
	INT i;

	/* Reset DMA Index */
	RTMP_IO_WRITE32(pAd, WPDMA_RST_IDX, 0xFFFFFFFF);

	/*
		Write Tx Ring base address registers 
		
		The Tx Ring arrangement:
		RingIdx	SwRingIdx	AsicPriority	WMM QID
		0 		TxSw0		L			QID_AC_BE
		1		TxSw1		L			QID_AC_BK
		2		TxSw2		L			QID_AC_VI
		3		TxSw3		L			QID_AC_VO

		4		CTRL		M			-
		5		MGMT		H			-

		6		-			L			QID_AC_BE
		7		-			L			QID_AC_BK
		8		-			L			QID_AC_VI
		9		-			L			QID_AC_VO

		Ring 0~3 for TxChannel 0
		Ring 6~9 for TxChannel 1
	*/
	for (i = 0; i < NUM_OF_TX_RING; i++) {
		offset = i * 0x10;
		phy_addr = RTMP_GetPhysicalAddressLow(pAd->TxRing[i].Cell[0].AllocPa);
		pAd->TxRing[i].TxSwFreeIdx = 0;
		pAd->TxRing[i].TxCpuIdx = 0;
		pAd->TxRing[i].hw_desc_base = TX_RING_BASE + offset;
		pAd->TxRing[i].hw_cidx_addr = TX_RING_CIDX + offset;
		pAd->TxRing[i].hw_didx_addr = TX_RING_DIDX + offset;
		pAd->TxRing[i].hw_cnt_addr = TX_RING_CNT + offset;
		RTMP_IO_WRITE32(pAd, pAd->TxRing[i].hw_desc_base, phy_addr);
		RTMP_IO_WRITE32(pAd, pAd->TxRing[i].hw_cidx_addr, pAd->TxRing[i].TxCpuIdx);
		RTMP_IO_WRITE32(pAd, pAd->TxRing[i].hw_cnt_addr, TX_RING_SIZE);
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_TRACE, ("-->TX_RING_%d[0x%x]: Base=0x%x, Cnt=%d!\n",
					i, pAd->TxRing[i].hw_desc_base, phy_addr, TX_RING_SIZE));
	}

	/* init MGMT ring Base/Size/Index pointer CSR */
	phy_addr = RTMP_GetPhysicalAddressLow(pAd->MgmtRing.Cell[0].AllocPa);
	pAd->MgmtRing.TxSwFreeIdx = 0;
	pAd->MgmtRing.TxCpuIdx = 0;

#define TX_MGMT_CNT	(pAd->MgmtRing.hw_desc_base + 0x04)
#define TX_MGMT_CIDX	(pAd->MgmtRing.hw_desc_base + 0x08)
#define TX_MGMT_DIDX	(pAd->MgmtRing.hw_desc_base + 0x0c)

	if (IS_RT8592(pAd))
		pAd->MgmtRing.hw_desc_base = (TX_RING_BASE  + RLT_RINGREG_DIFF * 5);
	else
		pAd->MgmtRing.hw_desc_base = (TX_RING_BASE  + RLT_RINGREG_DIFF * 9);
	pAd->MgmtRing.hw_cidx_addr = TX_MGMT_CIDX;
	pAd->MgmtRing.hw_didx_addr = TX_MGMT_DIDX;
	pAd->MgmtRing.hw_cnt_addr = TX_MGMT_CNT;
	RTMP_IO_WRITE32(pAd, pAd->MgmtRing.hw_desc_base, phy_addr);
	RTMP_IO_WRITE32(pAd, pAd->MgmtRing.hw_cidx_addr, pAd->MgmtRing.TxCpuIdx);
	RTMP_IO_WRITE32(pAd, pAd->MgmtRing.hw_cnt_addr, MGMT_RING_SIZE);
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_TRACE, ("-->TX_RING_MGMT[0x%x]: Base=0x%x, Cnt=%d!\n",
					pAd->MgmtRing.hw_desc_base, phy_addr, MGMT_RING_SIZE));

#ifdef CONFIG_ANDES_SUPPORT
	/* init CTRL ring index pointer */
	phy_addr = RTMP_GetPhysicalAddressLow(pAd->CtrlRing.Cell[0].AllocPa);
	pAd->CtrlRing.TxSwFreeIdx = 0;
	pAd->CtrlRing.TxCpuIdx = 0;

#define TX_CTRL_CNT		(pAd->CtrlRing.hw_desc_base + 0x04)
#define TX_CTRL_CIDX	(pAd->CtrlRing.hw_desc_base + 0x08)
#define TX_CTRL_DIDX	(pAd->CtrlRing.hw_desc_base + 0x0c)

	if (IS_RT8592(pAd))
		pAd->CtrlRing.hw_desc_base = (TX_RING_BASE  + RLT_RINGREG_DIFF * 4);
	else
		pAd->CtrlRing.hw_desc_base = (TX_RING_BASE  + RLT_RINGREG_DIFF * 8);
	pAd->CtrlRing.hw_cidx_addr = TX_CTRL_CIDX;
	pAd->CtrlRing.hw_didx_addr = TX_CTRL_DIDX;
	pAd->CtrlRing.hw_cnt_addr = TX_CTRL_CNT;
	RTMP_IO_WRITE32(pAd, pAd->CtrlRing.hw_desc_base, phy_addr);
	RTMP_IO_WRITE32(pAd, pAd->CtrlRing.hw_cidx_addr,  pAd->CtrlRing.TxCpuIdx);
	RTMP_IO_WRITE32(pAd, pAd->CtrlRing.hw_cnt_addr, MGMT_RING_SIZE);
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_TRACE, ("-->TX_RING_CTRL: Base=0x%x, Cnt=%d!\n",
					phy_addr, TX_RING_SIZE));
#endif /* CONFIG_ANDES_SUPPORT */

	/* Init RX Ring0 Base/Size/Index pointer CSR */
	for (i = 0; i < NUM_OF_RX_RING; i++) {
		offset = i * 0x10;
		phy_addr = RTMP_GetPhysicalAddressLow(pAd->RxRing[i].Cell[0].AllocPa);
		pAd->RxRing[i].RxSwReadIdx = 0;
		pAd->RxRing[i].RxCpuIdx = RX_RING_SIZE - 1;
		pAd->RxRing[i].hw_desc_base = RX_RING_BASE + offset;
		pAd->RxRing[i].hw_cidx_addr = RX_RING_CIDX + offset;
		pAd->RxRing[i].hw_didx_addr = RX_RING_DIDX + offset;
		pAd->RxRing[i].hw_cnt_addr = RX_RING_CNT + offset;
		RTMP_IO_WRITE32(pAd, pAd->RxRing[i].hw_desc_base, phy_addr);
		RTMP_IO_WRITE32(pAd, pAd->RxRing[i].hw_cidx_addr, pAd->RxRing[i].RxCpuIdx);
		RTMP_IO_WRITE32(pAd, pAd->RxRing[i].hw_cnt_addr, RX_RING_SIZE);
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_TRACE, ("-->RX_RING%d[0x%x]: Base=0x%x, Cnt=%d\n",
					i, pAd->RxRing[i].hw_desc_base, phy_addr, RX_RING_SIZE));
	}

	/* Set DMA global configuration except TX_DMA_EN and RX_DMA_EN bits */
	AsicWaitPDMAIdle(pAd, 100, 1000);
	AsicSetWPDMA(pAd, PDMA_TX_RX, FALSE);

	IntCfg.word = 0;
	RTMP_IO_WRITE32(pAd, DELAY_INT_CFG, IntCfg.word);
}
#endif /* RTMP_MAC_PCI */


static UINT32 asic_set_wlan_func(RTMP_ADAPTER *pAd, BOOLEAN enable)
{
	UINT32 reg;

	RTMP_IO_FORCE_READ32(pAd, WLAN_FUN_CTRL, &reg);

	if (enable == TRUE)
	{
		/*
			Enable WLAN function and clock
			WLAN_FUN_CTRL[1:0] = 0x3
		*/
		reg |= WLAN_FUN_CTRL_WLAN_CLK_EN;
		reg |= WLAN_FUN_CTRL_WLAN_EN; 
	}
	else
	{
		/*
			Diable WLAN function and clock
			WLAN_FUN_CTRL[1:0] = 0x0
		*/
		if (IS_PCIE_INF(pAd))
			reg &= ~WLAN_FUN_CTRL_PCIE_APP0_CLK_REQ;
		
		reg &= ~WLAN_FUN_CTRL_WLAN_EN;
		reg &= ~WLAN_FUN_CTRL_WLAN_CLK_EN;	
	}

	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_TRACE, ("WlanFunCtrl= 0x%x\n", reg));
	RTMP_IO_FORCE_WRITE32(pAd, WLAN_FUN_CTRL, reg);
	RtmpusecDelay(20);

	return reg;
}


#define MAX_CHECK_COUNT 200

INT rlt_wlan_chip_onoff(RTMP_ADAPTER *pAd, BOOLEAN bOn, BOOLEAN bResetWLAN)
{
	UINT32 reg = 0;

#ifdef RTMP_FLASH_SUPPORT
#ifdef MT76x0
	if (IS_MT76x0(pAd))
		MT76x0_ReadFlashAndInitAsic(pAd);
#endif /* MT76x0 */
#endif /* RTMP_FLASH_SUPPORT */

#ifdef RTMP_PCI_SUPPORT
	if (IS_PCI_INF(pAd))
		RTMP_SEM_LOCK(&pAd->WlanEnLock);
#endif /* RTMP_PCI_SUPPORT */

#ifdef RTMP_MAC_USB
	if (IS_USB_INF(pAd)) {
		UINT32 ret;

		RTMP_SEM_EVENT_WAIT(&pAd->hw_atomic, ret);
		if (ret != 0) {
			MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_ERROR, ("reg_atomic get failed(ret=%d)\n", ret));
			return STATUS_UNSUCCESSFUL;
		}
	}
#endif /* RTMP_MAC_USB */

	RTMP_IO_FORCE_READ32(pAd, WLAN_FUN_CTRL, &reg);
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_OFF, ("==>%s(): OnOff:%d, Reset= %d, pAd->WlanFunCtrl:0x%x, Reg-WlanFunCtrl=0x%x\n",
				__FUNCTION__, bOn, bResetWLAN, pAd->WlanFunCtrl.word, reg));

	if (bResetWLAN == TRUE)
	{
#ifdef MT76x2
		if (!IS_MT76x2(pAd))
#endif /* MT76x2 */
			reg &= ~WLAN_FUN_CTRL_GPIO0_OUT_OE_N_MASK;

		reg &= ~WLAN_FUN_CTRL_FRC_WL_ANT_SEL;

		if (pAd->WlanFunCtrl.field.WLAN_EN)
		{
			/*
				Restore all HW default value and reset RF.
			*/
#ifdef MT76x2
			if (!IS_MT76x2(pAd))
#endif /* MT76x2 */
				reg |= WLAN_FUN_CTRL_WLAN_RESET;	
		
			reg |= WLAN_FUN_CTRL_WLAN_RESET_RF;
			MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_TRACE, ("Reset(1) WlanFunCtrl.word = 0x%x\n", reg));
			RTMP_IO_FORCE_WRITE32(pAd, WLAN_FUN_CTRL, reg);	
			RtmpusecDelay(20);

#ifdef MT76x2
			if (!IS_MT76x2(pAd))
#endif /* MT76x2 */
				reg &= ~WLAN_FUN_CTRL_WLAN_RESET;

			reg &= ~WLAN_FUN_CTRL_WLAN_RESET_RF;

			MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_TRACE, ("Reset(2) WlanFunCtrl.word = 0x%x\n", reg));
			RTMP_IO_FORCE_WRITE32(pAd, WLAN_FUN_CTRL, reg);
			RtmpusecDelay(20);
		} else
			RTMP_IO_FORCE_WRITE32(pAd, WLAN_FUN_CTRL, reg);
	}
	
	reg = asic_set_wlan_func(pAd, bOn);

	if (bOn)
	{
		RTMP_IO_FORCE_READ32(pAd, MAC_CSR0, &pAd->MACVersion);
		MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_TRACE, ("MACVersion = 0x%08x\n", pAd->MACVersion));
	}

	if (bOn == TRUE
#ifdef MT76x2
		&& (!IS_MT76x2(pAd))
#endif /* MT76x2 */
	)
	{
		UINT index = 0;		
		UINT32 value;
		
		do
		{
			do 
			{
				RTMP_IO_FORCE_READ32(pAd, CMB_CTRL, &value);

				/*
					Check status of PLL_LD & XTAL_RDY.
					HW issue: Must check PLL_LD&XTAL_RDY when setting EEP to disable PLL power down
				*/
				if (((value & CMB_CTRL_PLL_LD) == CMB_CTRL_PLL_LD) && 
						((value & CMB_CTRL_XTAL_RDY) == CMB_CTRL_XTAL_RDY))
					break;

				RtmpusecDelay(20);
			} while (index++ < MAX_CHECK_COUNT);

			if (index >= MAX_CHECK_COUNT)
			{
				MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_ERROR, 
						("Lenny:[boundary]Check PLL_LD ..CMB_CTRL 0x%08x, index=%d!\n",
						value, index));
				/*
					Disable WLAN then enable WLAN again
				*/
				reg = asic_set_wlan_func(pAd, 0);
				reg = asic_set_wlan_func(pAd, 1);
			}
			else
			{
				break;
			}
		} while (TRUE);
	}

	pAd->WlanFunCtrl.word = reg;
	RTMP_IO_FORCE_READ32(pAd, WLAN_FUN_CTRL, &reg);
	MTWF_LOG(DBG_CAT_ALL, DBG_SUBCAT_ALL, DBG_LVL_TRACE,
		("<== %s():pAd->WlanFunCtrl.word = 0x%x, Reg->WlanFunCtrl=0x%x!\n",
		__FUNCTION__, pAd->WlanFunCtrl.word, reg));
	
#ifdef RTMP_MAC_PCI
	if (IS_PCI_INF(pAd))
		RTMP_SEM_UNLOCK(&pAd->WlanEnLock);
#endif /* RTMP_MAC_PCI */

#ifdef RTMP_MAC_USB
	if (IS_USB_INF(pAd))
		RTMP_SEM_EVENT_UP(&pAd->hw_atomic);
#endif /* RTMP_MAC_USB */

	return 0;
}

