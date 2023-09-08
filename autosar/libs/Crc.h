#ifndef CRC_H_
#define CRC_H_

uint8 Crc_CalculateCRC8( const uint8 *Crc_DataPtr, uint32 Crc_Length, uint8 Crc_StartValue8, boolean Crc_IsFirstCall );
uint8 Crc_CalculateCRC8H2F( const uint8 *Crc_DataPtr, uint32 Crc_Length, uint8 Crc_StartValue8H2F, boolean Crc_IsFirstCall );
uint16 Crc_CalculateCRC16( const uint8 *Crc_DataPtr, uint32 Crc_Length, uint16 Crc_StartValue16, boolean Crc_IsFirstCall );
uint16 Crc_CalculateCRC16ARC( const uint8 *Crc_DataPtr, uint32 Crc_Length, uint16 Crc_StartValue16, boolean Crc_IsFirstCall );
uint32 Crc_CalculateCRC32( const uint8 *Crc_DataPtr, uint32 Crc_Length, uint32 Crc_StartValue32, boolean Crc_IsFirstCall );
uint32 Crc_CalculateCRC32P4( const uint8 *Crc_DataPtr, uint32 Crc_Length, uint32 Crc_StartValue32, boolean Crc_IsFirstCall );
uint64 Crc_CalculateCRC64( const uint8 *Crc_DataPtr, uint32 Crc_Length, uint64 Crc_StartValue64, boolean Crc_IsFirstCall );
void Crc_GetVersionInfo( Std_VersionInfoType *Versioninfo );

#endif