#ifndef GPT_H__
#define GPT_H__

#define GPT_NUMBER_OF_CHANNELS   2u
#define GPT_VERSION_INFO_API     STD_ON
#define GPT_SET_NOTIFICATION_API STD_ON

typedef struct _Gpt_ConfigType
{
    uint8 Channel;
    uint8 NotificationMode;
    uint8 ChannelMode;
    uint16 Prescaler;
    void ( *Notifications[ 2u ] )( void );
} Gpt_ConfigType;

typedef enum
{
    GPT_CHANNEL_0 = 0,
    GPT_CHANNEL_1,
} Gpt_ChannelType;

typedef enum
{
    GPT_CH_MODE_CONTINUOUS = 0,
    GPT_CH_MODE_ONESHOT,
} Gpt_ChannelMode;

typedef enum
{
    GPT_NOTIFICATION_ENABLED = 0,
    GPT_NOTIFICATION_DISABLED,
} Gpt_NotificationMode;

typedef uint32 Gpt_ValueType;

void Gpt_Init( const Gpt_ConfigType *ConfigPtr );
void Gpt_DeInit( void );
Gpt_ValueType Gpt_GetTimeElapsed( Gpt_ChannelType Channel );
Gpt_ValueType Gpt_GetTimeRemaining( Gpt_ChannelType Channel );
void Gpt_StartTimer( Gpt_ChannelType Channel, Gpt_ValueType Value );
void Gpt_StopTimer( Gpt_ChannelType Channel );

#if GPT_VERSION_INFO_API == STD_ON /* cppcheck-suppress misra-c2012-20.9 ; it is necesary to use a define for this function */
void Gpt_GetVersionInfo( Std_VersionInfoType *versioninfo );
#endif

#if GPT_SET_NOTIFICATION_API == STD_ON /* cppcheck-suppress misra-c2012-20.9 ; it is necesary to use a define for this function */
void Gpt_EnableNotification( Gpt_ChannelType Channel );
#endif

#if GPT_SET_NOTIFICATION_API == STD_ON /* cppcheck-suppress misra-c2012-20.9 ; it is necesary to use a define for this function */
void Gpt_DisableNotification( Gpt_ChannelType Channel );
#endif

#if GPT_SET_NOTIFICATION_API == STD_ON /* cppcheck-suppress misra-c2012-20.9 ; it is necesary to use a define for this function */
void Gpt_Notification_Channel0( void );
#endif

#if GPT_SET_NOTIFICATION_API == STD_ON /* cppcheck-suppress misra-c2012-20.9 ; it is necesary to use a define for this function */
void Gpt_Notification_Channel1( void );
#endif

#endif
