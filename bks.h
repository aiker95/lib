#ifndef BKS_2017_H_INCLUDED
#define BKS_2017_H_INCLUDED

#include "addefs.h"

/// БИТОВЫЕ СТРУКТУРЫ

///Структуры приёма///---------------------------------------------------

//слово 1
typedef struct w_1_b_t
{
    uint16_t PC_1:1;
    uint16_t PC_2:1;
    uint16_t PC_3:1;
    uint16_t PC_4:1;
    uint16_t PC_5:1;
    uint16_t PC_6:1;
    uint16_t PC_7:1;
    uint16_t PC_8:1;
    uint16_t PC_9:1;
    uint16_t PC_10:1;
    uint16_t PC_11:1;
    uint16_t PC_12:1;
    uint16_t PC_13:1;
    uint16_t PC_14:1;
    uint16_t PC_15:1;
    uint16_t PC_16:1;
}w_1_b_t;

//слово 2
typedef struct w_2_b_t
{
    uint16_t PC_17:1;
    uint16_t PC_18:1;
    uint16_t PC_19:1;
    uint16_t PC_20:1;
    uint16_t PC_21:1;
    uint16_t PC_22:1;
    uint16_t PC_23:1;
    uint16_t PC_24:1;
    uint16_t PC_25:1;
    uint16_t PC_26:1;
    uint16_t PC_27:1;
    uint16_t PC_28:1;
    uint16_t PC_29:1;
    uint16_t PC_30:1;
    uint16_t PC_31:1;
    uint16_t PC_32:1;
}w_2_b_t;

//слово 3
typedef struct w_3_b_t
{
    uint16_t PC_33:1;
    uint16_t PC_34:1;
    uint16_t PC_35:1;
    uint16_t PC_36:1;
    uint16_t PC_37:1;
    uint16_t PC_38:1;
    uint16_t PC_39:1;
    uint16_t PC_40:1;
    uint16_t PC_41:1;
    uint16_t PC_42:1;
    uint16_t PC_43:1;
    uint16_t PC_44:1;
    uint16_t PC_45:1;
    uint16_t PC_46:1;
    uint16_t PC_47:1;
    uint16_t PC_48:1;
}w_3_b_t;

//слово 4
typedef struct w_4_b_t
{
    uint16_t PC_49:1;
    uint16_t PC_50:1;
    uint16_t PC_51:1;
    uint16_t PC_52:1;
    uint16_t PC_53:1;
    uint16_t PC_54:1;
    uint16_t PC_55:1;
    uint16_t PC_56:1;
    uint16_t PC_57:1;
    uint16_t PC_58:1;
    uint16_t PC_59:1;
    uint16_t PC_60:1;
    uint16_t PC_61:1;
    uint16_t PC_62:1;
    uint16_t PC_63:1;
    uint16_t PC_64:1;
}w_4_b_t;

//слово 5
typedef struct w_5_b_t
{
    uint16_t PC_65:1;
    uint16_t PC_66:1;
    uint16_t PC_67:1;
    uint16_t PC_68:1;
    uint16_t PC_69:1;
    uint16_t PC_70:1;
    uint16_t PC_71:1;
    uint16_t PC_72:1;
    uint16_t PC_73:1;
    uint16_t PC_74:1;
    uint16_t PC_75:1;
    uint16_t PC_76:1;
    uint16_t PC_77:1;
    uint16_t PC_78:1;
    uint16_t PC_79:1;
    uint16_t PC_80:1;
}w_5_b_t;

//слово 6
typedef struct w_6_b_t
{
    uint16_t PC_81:1;
    uint16_t PC_82:1;
    uint16_t PC_83:1;
    uint16_t PC_84:1;
    uint16_t PC_85:1;
    uint16_t PC_86:1;
    uint16_t PC_87:1;
    uint16_t PC_88:1;
    uint16_t PC_89:1;
    uint16_t PC_90:1;
    uint16_t PC_91:1;
    uint16_t PC_92:1;
    uint16_t PC_93:1;
    uint16_t PC_94:1;
    uint16_t PC_95:1;
    uint16_t PC_96:1;
}w_6_b_t;

//слово 7
typedef struct w_7_b_t
{
    uint16_t PC_97:1;
    uint16_t PC_98:1;
    uint16_t PC_99:1;
    uint16_t PC_100:1;
    uint16_t PC_101:1;
    uint16_t PC_102:1;
    uint16_t PC_103:1;
    uint16_t PC_104:1;
    uint16_t PC_105:1;
    uint16_t PC_106:1;
    uint16_t PC_107:1;
    uint16_t PC_108:1;
    uint16_t PC_109:1;
    uint16_t PC_110:1;
    uint16_t PC_111:1;
    uint16_t PC_112:1;
}w_7_b_t;

//слово 8
typedef struct w_8_b_t
{
    uint16_t PC_113:1;
    uint16_t PC_114:1;
    uint16_t PC_115:1;
    uint16_t PC_116:1;
    uint16_t PC_117:1;
    uint16_t PC_118:1;
    uint16_t PC_119:1;
    uint16_t PC_120:1;
    uint16_t PC_121:1;
    uint16_t PC_122:1;
    uint16_t PC_123:1;
    uint16_t PC_124:1;
    uint16_t PC_125:1;
    uint16_t PC_126:1;
    uint16_t PC_127:1;
    uint16_t PC_128:1;
}w_8_b_t;

//слово 9
typedef struct w_9_b_t
{
    uint16_t PC_129:1;
    uint16_t PC_130:1;
    uint16_t PC_131:1;
    uint16_t PC_132:1;
    uint16_t PC_133:1;
    uint16_t PC_134:1;
    uint16_t PC_135:1;
    uint16_t PC_136:1;
    uint16_t PC_137:1;
    uint16_t PC_138:1;
    uint16_t PC_139:1;
    uint16_t PC_140:1;
    uint16_t PC_141:1;
    uint16_t PC_142:1;
    uint16_t PC_143:1;
    uint16_t PC_144:1;
}w_9_b_t;

//слово 10
typedef struct w_10_b_t
{
    uint16_t PC_145:1;
    uint16_t PC_146:1;
    uint16_t PC_147:1;
    uint16_t PC_148:1;
    uint16_t PC_149:1;
    uint16_t PC_150:1;
    uint16_t PC_151:1;
    uint16_t PC_152:1;
    uint16_t PC_153:1;
    uint16_t PC_154:1;
    uint16_t PC_155:1;
    uint16_t PC_156:1;
    uint16_t PC_157:1;
    uint16_t PC_158:1;
    uint16_t PC_159:1;
    uint16_t PC_160:1;
}w_10_b_t;

//слово 11
typedef struct w_11_b_t
{
    uint16_t PC_161:1;
    uint16_t PC_162:1;
    uint16_t PC_163:1;
    uint16_t PC_164:1;
    uint16_t PC_165:1;
    uint16_t PC_166:1;
    uint16_t PC_167:1;
    uint16_t PC_168:1;
    uint16_t PC_169:1;
    uint16_t PC_170:1;
    uint16_t PC_171:1;
    uint16_t PC_172:1;
    uint16_t PC_173:1;
    uint16_t PC_174:1;
    uint16_t PC_175:1;
    uint16_t PC_176:1;
}w_11_b_t;

//слово 12
typedef struct w_12_b_t
{
    uint16_t PC_177:1;
    uint16_t PC_178:1;
    uint16_t PC_179:1;
    uint16_t PC_180:1;
    uint16_t PC_181:1;
    uint16_t PC_182:1;
    uint16_t PC_183:1;
    uint16_t PC_184:1;
    uint16_t PC_185:1;
    uint16_t PC_186:1;
    uint16_t PC_187:1;
    uint16_t PC_188:1;
    uint16_t PC_189:1;
    uint16_t PC_190:1;
    uint16_t PC_191:1;
    uint16_t PC_192:1;
}w_12_b_t;

//слово 13
typedef struct w_13_b_t
{
    uint16_t PC_193:1;
    uint16_t PC_194:1;
    uint16_t PC_195:1;
    uint16_t PC_196:1;
    uint16_t PC_197:1;
    uint16_t PC_198:1;
    uint16_t PC_199:1;
    uint16_t PC_200:1;
    uint16_t PC_201:1;
    uint16_t PC_202:1;
    uint16_t PC_203:1;
    uint16_t PC_204:1;
    uint16_t PC_205:1;
    uint16_t PC_206:1;
    uint16_t PC_207:1;
    uint16_t PC_208:1;
}w_13_b_t;

//слово 14
typedef struct w_14_b_t
{
    uint16_t PC_209:1;
    uint16_t PC_210:1;
    uint16_t PC_211:1;
    uint16_t PC_212:1;
    uint16_t PC_213:1;
    uint16_t PC_214:1;
    uint16_t PC_215:1;
    uint16_t PC_216:1;
    uint16_t PC_217:1;
    uint16_t PC_218:1;
    uint16_t PC_219:1;
    uint16_t PC_220:1;
    uint16_t PC_221:1;
    uint16_t PC_222:1;
    uint16_t PC_223:1;
    uint16_t PC_224:1;
}w_14_b_t;

//Структура слов "Номера идентификаторов РС (слово 1...слово 4)"
typedef struct numid_pc_w_1_4_b_t
{
   w_1_b_t w_1_b;   //слово 1
   w_2_b_t w_2_b;   //слово 2
   w_3_b_t w_3_b;   //слово 3
   w_4_b_t w_4_b;   //слово 4
}numid_pc_w_1_4_b_t;

//Структура слова "Номера идентификаторов РС (слово 5...слово 8)"
typedef struct numid_pc_w_5_8_b_t
{
   w_5_b_t w_5_b;   //слово 5
   w_6_b_t w_6_b;   //слово 6
   w_7_b_t w_7_b;   //слово 7
   w_8_b_t w_8_b;   //слово 8
}numid_pc_w_5_8_b_t;

//Структура слова "Номера идентификаторов РС (слово 9...слово 12)"
typedef struct numid_pc_w_9_12_b_t
{
   w_9_b_t  w_9_b;  //слово 9
   w_10_b_t w_10_b; //слово 10
   w_11_b_t w_11_b; //слово 11
   w_12_b_t w_12_b; //слово 12
}numid_pc_w_9_12_b_t;

//Структура слова "Номера идентификатоPC_ров РС (слова 13, 14)"
typedef struct numid_pc_w_13_14_b_t
{
   w_13_b_t w_13_b; //слово 13
   w_14_b_t w_14_b; //слово 14
}numid_pc_w_13_14_b_t;

//Структура слова "Коды разрешения"
typedef struct codes_p_b_t
{
    uint16_t reserv:14;     //Резерв
    uint16_t gcpc:1;        //Питание аэрожромное
    uint16_t shassi_obj:1;  //Шасси обжато
}codes_p_b_t;

//Структура слова "ВРЕМЯ/ДАТА (слово 1)"
typedef struct td_w1_b_t
{
    uint16_t reserv:2;      //Резерв
    uint16_t hour:5;        //Часы          // 0 23
    uint16_t day:5;         //День месяца   // 1 31
    uint16_t month:4;       //Месяц         // 1 12
}td_w1_b_t;

//Структура слова "ВРЕМЯ/ДАТА (слово 2)"
typedef struct td_w2_b_t
{
    uint16_t reserv:4;      //Резерв
    uint16_t seconds:6;     //Секунды       // 0 59
    uint16_t minutes:6;     //Минуты        // 0 59
}td_w2_b_t;

//Структура слова "Идентификатор блока файла ППИ"
typedef struct id_bf_ppi_b_t
{
    uint16_t n_block:10;        //Номер передаваемого блока файла ППИ
    uint16_t reserv:5;          //Резерв
    uint16_t status_f_ppi:1;    //Статус файла ППИ
}id_bf_ppi_b_t;

//Структура слова "ППИ (слово (слово K), где K = {1...16})"
typedef struct ppi_k_b_t
{
    uint16_t word_k:16;          //Слово №K
}ppi_k_b_t;

//Структура слова "Контрольная сумма блока файла ППИ"
typedef struct ch_sum_ius_b_t
{
    uint16_t ch_sum_ius:16;     //Контрольная сумма
}ch_sum_ius_b_t;

//Структура слова "Слово идентификации сообщения"
typedef struct id_mess_in_b_t
{
    uint16_t en_type_mess:8;    //Контрольная сумма
    uint16_t reserv:8;          //Резерв
}id_mess_in_b_t;

///Структуры выдачи///---------------------------------------------------

//Структура слова "Слово состояния БКС"
typedef struct ws_b_t
{
    uint16_t reserv01:9;        //Резерв
    uint16_t regime:3;          //Режим взаимодействия
    uint16_t reserv02:4;        //Нет названия (Резерв)
}ws_b_t;

//Структура слова "Адресное слово приёмника информации"
typedef struct adrr_wrx_inf_b_t
{
    uint16_t reserv:1;          //Нет названия (Резерв)
    uint16_t q_sadr_as:2;       //Количество подадресов (Кол_ПАдр)
    uint16_t numb_appl:3;       //Номер заявки
    uint16_t sadr_rt_as:5;      //Подадрес приёмника (ПАдр_Прм)
    uint16_t adr_rt_s:5;        //Адрес приёмника на МКИО (Адр_Прм)
}adrr_wrx_inf_b_t;

//Структура слова "Адресное слово источника информации"
typedef struct adrr_wtx_inf_b_t
{
    uint16_t q_word_as:5;       //Количество слов (Кол_Слов)
    uint16_t sadr_at_as:5;      //Подадрес МУМ (ПАдр_МУМ)
    uint16_t const_AS:1;        //Константа
    uint16_t adr_at_as:5;       //Адрес МУМ на МКИО (Адр_МУМ)
}adrr_wtx_inf_b_t;

//Структура слова "Версия ПО МЦП (МУМ) С-505-45 (слово 1)"
typedef struct v_po_w1_b_t
{
    uint16_t n_po:16;           //Децимальный номер ПО МЦП // 0 65535
}v_po_w1_b_t;

//Структура слова "Версия ПО МЦП (МУМ) С-505-45 (слово 2)"
typedef struct v_po_w2_b_t
{
    uint16_t reserv01:1;        //Резерв
    uint16_t v_po:7;            //Версия ПО МЦП // 0 100
    uint16_t reserv02:1;        //Резерв
    uint16_t t_po:7;            //Версия ПО МЦП // 0 100
}v_po_w2_b_t;

//Структура слова "Версия ПО МЦП (МУМ) С-505-45 (слово 3)"
typedef struct v_po_w3_b_t
{
    uint16_t y_po:5;            //Год           // 0 100
    uint16_t mon_po:4;          //Месяц         // 1 12
    uint16_t day_po:7;          //Дата(день)    // 1 31
}v_po_w3_b_t;

//Структура слова "Серийный номер комплекса (БКС)"
typedef struct serial_num_b_t
{
    uint16_t serial_num:16;     //Серийный номер
}serial_num_b_t;

//Структура слова "Результаты встроенного контроля БКС (слово 1)"
typedef struct rez_ctrl_bks_w1_b_t
{
    uint16_t msrp_a_04_connect:1;   //Связь с МСРП-А-04
    uint16_t a_312m_connect:1;      //Связь с A-312M
    uint16_t vim_connect:1;         //Связь с VIM-95-29
    uint16_t ark_connect:1;         //Связь с АРК-40
    uint16_t r992m_connect:1;       //Связь с Р-992М
    uint16_t hn_connect:1;          //Связь с Чинар-М
    uint16_t tr_connect:1;          //Связь с Трио-М
    uint16_t at_connect:1;          //Связь с АТ-21
    uint16_t mk_connect:1;          //Связь с МК-111
    uint16_t reserv:3;              //Резерв
    uint16_t shms_connect:1;        //Связь с ШМС-505-45
    uint16_t b71_v_ok:1;            //Исправность блока Б71-В
    uint16_t bit_ready:2;           //Достоверность данных ВСК С-505-45
}rez_ctrl_bks_w1_b_t;

//Структура слова "Результаты встроенного контроля БКС (слово 2)" (Для ШМС-505-45)
typedef struct rez_ctrl_bks_w2_b_t
{
    uint16_t reserv:5;              //Резерв
    uint16_t b21_ok:1;              //Исправность блока Б21-505
    uint16_t hf_tb:1;               //ТБ защита                     (Для КВ)
    uint16_t hf_b5_ok:1;            //Исправность блока Б5-505      (Для КВ)
    uint16_t hf_b4a_ok:1;           //Исправность блока Б4А-505     (Для КВ)
    uint16_t hf_b70_ok:1;           //Исправность блока Б70-505 №1  (Для КВ)
    uint16_t vhf2_t:1;              //Перегрев                      (Для УКВ2)
    uint16_t vhf2_b4b_ok:1;         //Исправность блока Б4Б-505 №2  (Для УКВ2)
    uint16_t vhf2_b70_ok:1;         //Исправность блока Б70-505 №2  (Для УКВ2)
    uint16_t vhf1_t:1;              //Перегрев                      (Для УКВ1)
    uint16_t vhf1_b4b_ok:1;         //Исправность блока Б4Б-505 №1  (Для УКВ1)
    uint16_t vhf1_b70_ok:1;         //Исправность блока Б70-505 №1  (Для УКВ1)
}rez_ctrl_bks_w2_b_t;

//Структура слова "Результаты встроенного контроля БКС (слово 3)"
typedef struct rez_ctrl_bks_w3_b_t
{
    uint16_t b8_ok:1;               //Исправность Б8-505
    uint16_t b7ch2_ok:1;            //Исправность Б7Ш-505 №2
    uint16_t b7ch1_ok:1;            //Исправность Б7Ш-505 №1
    uint16_t b7l2_ok:1;             //Исправность Б7Л-505 №2
    uint16_t b7l1_ok:1;             //Исправность Б7Л-505 №1
    uint16_t mk_key:1;              //Ключевые данные       (Для МК)
    uint16_t mk_tlf_ok:1;           //Исправность ТЛФ       (Для МК)
    uint16_t mk_tlk_ok:1;           //Исправность ТЛК       (Для МК)
    uint16_t reserv:9;              //Резерв
}rez_ctrl_bks_w3_b_t;

//Структура слова "Результаты встроенного контроля БКС (слово 4)"
typedef struct rez_ctrl_bks_w4_b_t
{
    uint16_t reserv01:1;            //Резерв
    uint16_t uk2_ok:1;              //Исправность УК-Э №2
    uint16_t uk1_ok:1;              //Исправность УК-Э №1
    uint16_t hf3_b26_ok:1;          //Б26-ЧнрМ  (Канал №3)
    uint16_t hf3_b70_ok:1;          //Б70-ЧнрМ  (Канал №3)
    uint16_t hf2_b26_ok:1;          //Б26-ЧнрМ  (Канал №2)
    uint16_t hf2_b70_ok:1;          //Б70-ЧнрМ  (Канал №2)
    uint16_t hf1_b26_ok:1;          //Б26-ЧнрМ  (Канал №1)
    uint16_t hf1_b70_ok:1;          //Б70-ЧнрМ  (Канал №1)
    uint16_t vlf3_b26_ok:1;         //Б26-ТриМ  (Канал №3)
    uint16_t vlf3_b70_ok:1;         //Б70-ТриМ  (Канал №3)
    uint16_t vlf2_b26_ok:1;         //Б26-ТриМ  (Канал №2)
    uint16_t vlf2_b70_ok:1;         //Б70-ТриМ  (Канал №2)
    uint16_t reserv02:1;            //Резерв
    uint16_t vlf1_b26_ok:1;         //Б26-ТриМ  (Канал №1)
    uint16_t vlf1_b70_ok:1;         //Б70-ТриМ  (Канал №1)
}rez_ctrl_bks_w4_b_t;  //Канал №1

//Структура слова "Результаты встроенного контроля БКС (слово 5)"
typedef struct rez_ctrl_bks_w5_b_t
{
    uint16_t reserv01:4;            //Резерв
    uint16_t reserv02:1;            //Резерв
    uint16_t r992m_t:1;             //Перегрев
    uint16_t r992m_ok:1;            //Исправность
    uint16_t at_b4_fail:2;          //Исправность Б4
    uint16_t at_b1_fail:2;          //Исправность Б1
    uint16_t reserv03:2;            //Резерв
    uint16_t at_ok:2;               //Исправность в целом
    uint16_t at_availability:1;     //Признак готовности к работе
}rez_ctrl_bks_w5_b_t;

//Структура слова "Идентификатор квитанции"
typedef struct id_kvit_b_t
{
    uint16_t n_block_in:10;         //Номер полученного блока файла ППИ
    uint16_t reserv01:3;            //Резерв
    uint16_t reserv02:1;            //Резерв
    uint16_t load_overw:1;          //Загрузка/Перезапись
    uint16_t v_kvit:1;              //Достоверность квитанции
}id_kvit_b_t;

//Структура слова "Признак текущего состояния загрузки ППИ"
typedef struct tek_sost_ppi_b_t
{
    uint16_t reserv:4;              //Резерв
    uint16_t ow_to_aks:1;           //Перезапись в АКС
    uint16_t ow_to_hn:1;            //Перезапись в Чинар-М
    uint16_t ow_to_tr:1;            //Перезапись в Трио-М
    uint16_t ow_to_hf:1;            //Перезапись КВ
    uint16_t ow_to_vhf1:1;          //Перезапись в УКВ1
    uint16_t ow_to_vhf2:1;          //Перезапись в УКВ2
    uint16_t ow_to_mum:1;           //Перезапись в МУМ-505-45
    uint16_t ow_to_at:1;            //Перезапись в АТ-21
    uint16_t ow_mode:2;             //Состояние перезаписи ППИ в оборудование БКС
    uint16_t er_ch_sum:1;           //Ошибка контрольной суммы
    uint16_t er_ac_num:1;           //Ошибка бортового номера
}tek_sost_ppi_b_t;

typedef struct id_mess_out_b_t
{
    uint16_t type_mess:8;           //Тип сообщения
    uint16_t reserv01:8;            //Резерв
}id_mess_out_b_t;

///ПРИЁМ///---------------------------------------------------

/// Подадрес приема 01 Массив идентификаторов РС и полетные данные.
typedef struct bks_in_subaddress01_b_t
{
    numid_pc_w_1_4_b_t      numid_pc_w_1_4_b;   //Номера идентификаторов РС (слово 1...слово 4)
    numid_pc_w_5_8_b_t      numid_pc_w_5_8_b;   //Номера идентификаторов РС (слово 5...слово 8)
    numid_pc_w_9_12_b_t     numid_pc_w_9_12_b;  //Номера идентификаторов РС (слово 9...слово 12)
    numid_pc_w_13_14_b_t    numid_pc_w_13_14_b; //Номера идентификаторов РС (слова 13, 14)
    codes_p_b_t             codes_p_b;          //Коды разрешения
    td_w1_b_t               td_w1_b;            //ВРЕМЯ/ДАТА (слово 1)
    td_w2_b_t               td_w2_b;            //ВРЕМЯ/ДАТА (слово 2)
}bks_in_subaddress01_b_t;

/// Подадрес приема 02 Данные в БКС
typedef struct bks_in_subaddress02_b_t
{
    id_mess_in_b_t id_mess_in_b;   //Слово идентификации сообщения
    uint32_t    data_b;     //Данные
}bks_in_subaddress02_b_t;

/// Подадрес приема 03 Данные в БКС
typedef struct bks_in_subaddress03_b_t
{
    id_mess_in_b_t id_mess_in_b;        //Слово идентификации сообщения
    uint32_t    data_b;                 //Данные
}bks_in_subaddress03_b_t;

/// Подадрес приема 04 Данные в АТ-21
typedef struct bks_in_subaddress04_b_t
{

}bks_in_subaddress04_b_t;

/// Подадрес приема 05 Данные в АТ-21
typedef struct bks_in_subaddress05_b_t
{

}bks_in_subaddress05_b_t;

/// Подадрес приема 06 Данные в АТ-21
typedef struct bks_in_subaddress06_b_t
{

}bks_in_subaddress06_b_t;

/// Подадрес приема 07 Данные в АТ-21
typedef struct bks_in_subaddress07_b_t
{

}bks_in_subaddress07_b_t;

/// Подадрес приема 08 ППИ*
typedef struct bks_in_subaddress08_b_t
{
    id_bf_ppi_b_t   id_bf_ppi_b;    //Идентификатор блока файла ППИ
    ppi_k_b_t       ppi_1_b;        //ППИ (слово 1)
    ppi_k_b_t       ppi_2_b;        //ППИ (слово 2)
    ppi_k_b_t       ppi_3_b;        //ППИ (слово 3)
    ppi_k_b_t       ppi_4_b;        //ППИ (слово 4)
    ppi_k_b_t       ppi_5_b;        //ППИ (слово 5)
    ppi_k_b_t       ppi_6_b;        //ППИ (слово 6)
    ppi_k_b_t       ppi_7_b;        //ППИ (слово 7)
    ppi_k_b_t       ppi_8_b;        //ППИ (слово 8)
    ppi_k_b_t       ppi_9_b;        //ППИ (слово 9)
    ppi_k_b_t       ppi_10_b;       //ППИ (слово 10)
    ppi_k_b_t       ppi_11_b;       //ППИ (слово 11)
    ppi_k_b_t       ppi_12_b;       //ППИ (слово 12)
    ppi_k_b_t       ppi_13_b;       //ППИ (слово 13)
    ppi_k_b_t       ppi_14_b;       //ППИ (слово 14)
    ppi_k_b_t       ppi_15_b;       //ППИ (слово 15)
    ppi_k_b_t       ppi_16_b;       //ППИ (слово 16)
    ch_sum_ius_b_t  ch_sum_ius_b;   //Контрольная сумма блока файла ППИ
}bks_in_subaddress08_b_t;

///ВЫДАЧА///---------------------------------------------------

/// Подадрес выдачи 01 Состояние БКС
typedef struct bks_out_subaddress01_b_t
{
    ws_b_t ws_b;                     //Слово состояния БКС
    adrr_wrx_inf_b_t adrr_wrx_inf_b; //Адреесное слово приёмника информации
    adrr_wtx_inf_b_t adrr_wtx_inf_b; //Адреесное слово источника информации
}bks_out_subaddress01_b_t;

/// Подадрес выдачи 02 Версия ПО, серийный номер
typedef struct bks_out_subaddress02_b_t
{
    v_po_w1_b_t v_po_w1_b;          //Версия ПО МЦП (МУМ) С-505-45 (слово 1)
    v_po_w2_b_t v_po_w2_b;          //Версия ПО МЦП (МУМ) С-505-45 (слово 2)
    v_po_w3_b_t v_po_w3_b;          //Версия ПО МЦП (МУМ) С-505-45 (слово 3)
    serial_num_b_t serial_num_b;    //Серийный номер комплекса
}bks_out_subaddress02_b_t;

/// Подадрес выдачи 03 Результаты ВКС
typedef struct bks_out_subaddress03_b_t
{
    rez_ctrl_bks_w1_b_t rez_ctrl_bks_w1_b;  //Результаты встроенного контроля БКС (слово 1)
    rez_ctrl_bks_w2_b_t rez_ctrl_bks_w2_b;  //Результаты встроенного контроля БКС (слово 2)
    rez_ctrl_bks_w3_b_t rez_ctrl_bks_w3_b;  //Результаты встроенного контроля БКС (слово 3)
    rez_ctrl_bks_w4_b_t rez_ctrl_bks_w4_b;  //Результаты встроенного контроля БКС (слово 4)
    rez_ctrl_bks_w5_b_t rez_ctrl_bks_w5_b;  //Результаты встроенного контроля БКС (слово 5)
}bks_out_subaddress03_b_t;

/// Подадрес выдачи 04 Данные из БКС
typedef struct bks_out_subaddress04_b_t
{
    id_mess_out_b_t id_mess_out_b;  //Слово идентификации сообщения
    uint32_t    data_b;             //Данные
}bks_out_subaddress04_b_t;

/// Подадрес выдачи 05 Данные из БКС
typedef struct bks_out_subaddress05_b_t
{
    id_mess_out_b_t id_mess_out_b;  //Слово идентификации сообщения
    uint32_t    data_b;     //Данные
}bks_out_subaddress05_b_t;

/// Подадрес выдачи 06 Данные из АТ
typedef struct bks_out_subaddress06_b_t
{

}bks_out_subaddress06_b_t;

/// Подадрес выдачи 07 Данные из АТ
typedef struct bks_out_subaddress07_b_t
{

}bks_out_subaddress07_b_t;

/// Подадрес выдачи 08 Данные из АТ
typedef struct bks_out_subaddress08_b_t
{

}bks_out_subaddress08_b_t;

/// Подадрес выдачи 09 Данные из АТ
typedef struct bks_out_subaddress09_b_t
{

}bks_out_subaddress09_b_t;

/// Подадрес выдачи 10 Квитанция на ППИ*
typedef struct bks_out_subaddress10_b_t
{
    id_kvit_b_t id_kvit_b;          //Идентификатор квитанции
    tek_sost_ppi_b_t tek_sost_ppi_b;//Признак текущего состояния загрузки ППИ
}bks_out_subaddress10_b_t;

///---------------------------------------------------

typedef struct bks_in_b_t
{
    bks_in_subaddress01_b_t    bks_in_subaddress01_b;     // Подадрес приема 01
    bks_in_subaddress02_b_t    bks_in_subaddress02_b;     // Подадрес приема 02
    bks_in_subaddress03_b_t    bks_in_subaddress03_b;     // Подадрес приема 03
    bks_in_subaddress04_b_t    bks_in_subaddress04_b;     // Подадрес приема 04
    bks_in_subaddress05_b_t    bks_in_subaddress05_b;     // Подадрес приема 05
    bks_in_subaddress06_b_t    bks_in_subaddress06_b;     // Подадрес приема 06
    bks_in_subaddress07_b_t    bks_in_subaddress07_b;     // Подадрес приема 07
    bks_in_subaddress08_b_t    bks_in_subaddress08_b;     // Подадрес приема 08
}bks_in_b_t;

typedef struct bks_out_b_t
{
    bks_out_subaddress01_b_t    bks_out_subaddress01_b;     // Подадрес выдачи 01
    bks_out_subaddress02_b_t    bks_out_subaddress02_b;     // Подадрес выдачи 02
    bks_out_subaddress03_b_t    bks_out_subaddress03_b;     // Подадрес выдачи 03
    bks_out_subaddress04_b_t    bks_out_subaddress04_b;     // Подадрес выдачи 04
    bks_out_subaddress05_b_t    bks_out_subaddress05_b;     // Подадрес выдачи 05
    bks_out_subaddress06_b_t    bks_out_subaddress06_b;     // Подадрес выдачи 06
    bks_out_subaddress07_b_t    bks_out_subaddress07_b;     // Подадрес выдачи 07
    bks_out_subaddress08_b_t    bks_out_subaddress08_b;     // Подадрес выдачи 08
    bks_out_subaddress09_b_t    bks_out_subaddress09_b;     // Подадрес выдачи 09
    bks_out_subaddress10_b_t    bks_out_subaddress10_b;     // Подадрес выдачи 10
}bks_out_b_t;

/// БКС
typedef struct bks_b_t
{
    bks_in_b_t      bks_in_b;                       //Приём
    bks_out_b_t     bks_out_b;                      //Выдача
}bks_b_t;

/// СТРУКТУРЫ ДАННЫХ

///Структуры приёма///---------------------------------------------------

//слово 1
typedef struct w_1_t
{
    uint16_t PC_1;
    uint16_t PC_2;
    uint16_t PC_3;
    uint16_t PC_4;
    uint16_t PC_5;
    uint16_t PC_6;
    uint16_t PC_7;
    uint16_t PC_8;
    uint16_t PC_9;
    uint16_t PC_10;
    uint16_t PC_11;
    uint16_t PC_12;
    uint16_t PC_13;
    uint16_t PC_14;
    uint16_t PC_15;
    uint16_t PC_16;
}w_1_t;

//слово 2
typedef struct w_2_t
{
    uint16_t PC_17;
    uint16_t PC_18;
    uint16_t PC_19;
    uint16_t PC_20;
    uint16_t PC_21;
    uint16_t PC_22;
    uint16_t PC_23;
    uint16_t PC_24;
    uint16_t PC_25;
    uint16_t PC_26;
    uint16_t PC_27;
    uint16_t PC_28;
    uint16_t PC_29;
    uint16_t PC_30;
    uint16_t PC_31;
    uint16_t PC_32;
}w_2_t;

//слово 3
typedef struct w_3_t
{
    uint16_t PC_33;
    uint16_t PC_34;
    uint16_t PC_35;
    uint16_t PC_36;
    uint16_t PC_37;
    uint16_t PC_38;
    uint16_t PC_39;
    uint16_t PC_40;
    uint16_t PC_41;
    uint16_t PC_42;
    uint16_t PC_43;
    uint16_t PC_44;
    uint16_t PC_45;
    uint16_t PC_46;
    uint16_t PC_47;
    uint16_t PC_48;
}w_3_t;

//слово 4
typedef struct w_4_t
{
    uint16_t PC_49;
    uint16_t PC_50;
    uint16_t PC_51;
    uint16_t PC_52;
    uint16_t PC_53;
    uint16_t PC_54;
    uint16_t PC_55;
    uint16_t PC_56;
    uint16_t PC_57;
    uint16_t PC_58;
    uint16_t PC_59;
    uint16_t PC_60;
    uint16_t PC_61;
    uint16_t PC_62;
    uint16_t PC_63;
    uint16_t PC_64;
}w_4_t;

//слово 5
typedef struct w_5_t
{
    uint16_t PC_65;
    uint16_t PC_66;
    uint16_t PC_67;
    uint16_t PC_68;
    uint16_t PC_69;
    uint16_t PC_70;
    uint16_t PC_71;
    uint16_t PC_72;
    uint16_t PC_73;
    uint16_t PC_74;
    uint16_t PC_75;
    uint16_t PC_76;
    uint16_t PC_77;
    uint16_t PC_78;
    uint16_t PC_79;
    uint16_t PC_80;
}w_5_t;

//слово 6
typedef struct w_6_t
{
    uint16_t PC_81;
    uint16_t PC_82;
    uint16_t PC_83;
    uint16_t PC_84;
    uint16_t PC_85;
    uint16_t PC_86;
    uint16_t PC_87;
    uint16_t PC_88;
    uint16_t PC_89;
    uint16_t PC_90;
    uint16_t PC_91;
    uint16_t PC_92;
    uint16_t PC_93;
    uint16_t PC_94;
    uint16_t PC_95;
    uint16_t PC_96;
}w_6_t;

//слово 7
typedef struct w_7_t
{
    uint16_t PC_97;
    uint16_t PC_98;
    uint16_t PC_99;
    uint16_t PC_100;
    uint16_t PC_101;
    uint16_t PC_102;
    uint16_t PC_103;
    uint16_t PC_104;
    uint16_t PC_105;
    uint16_t PC_106;
    uint16_t PC_107;
    uint16_t PC_108;
    uint16_t PC_109;
    uint16_t PC_110;
    uint16_t PC_111;
    uint16_t PC_112;
}w_7_t;

//слово 8
typedef struct w_8_t
{
    uint16_t PC_113;
    uint16_t PC_114;
    uint16_t PC_115;
    uint16_t PC_116;
    uint16_t PC_117;
    uint16_t PC_118;
    uint16_t PC_119;
    uint16_t PC_120;
    uint16_t PC_121;
    uint16_t PC_122;
    uint16_t PC_123;
    uint16_t PC_124;
    uint16_t PC_125;
    uint16_t PC_126;
    uint16_t PC_127;
    uint16_t PC_128;
}w_8_t;

//слово 9
typedef struct w_9_t
{
    uint16_t PC_129;
    uint16_t PC_130;
    uint16_t PC_131;
    uint16_t PC_132;
    uint16_t PC_133;
    uint16_t PC_134;
    uint16_t PC_135;
    uint16_t PC_136;
    uint16_t PC_137;
    uint16_t PC_138;
    uint16_t PC_139;
    uint16_t PC_140;
    uint16_t PC_141;
    uint16_t PC_142;
    uint16_t PC_143;
    uint16_t PC_144;
}w_9_t;

//слово 10
typedef struct w_10_t
{
    uint16_t PC_145;
    uint16_t PC_146;
    uint16_t PC_147;
    uint16_t PC_148;
    uint16_t PC_149;
    uint16_t PC_150;
    uint16_t PC_151;
    uint16_t PC_152;
    uint16_t PC_153;
    uint16_t PC_154;
    uint16_t PC_155;
    uint16_t PC_156;
    uint16_t PC_157;
    uint16_t PC_158;
    uint16_t PC_159;
    uint16_t PC_160;
}w_10_t;

//слово 11
typedef struct w_11_t
{
    uint16_t PC_161;
    uint16_t PC_162;
    uint16_t PC_163;
    uint16_t PC_164;
    uint16_t PC_165;
    uint16_t PC_166;
    uint16_t PC_167;
    uint16_t PC_168;
    uint16_t PC_169;
    uint16_t PC_170;
    uint16_t PC_171;
    uint16_t PC_172;
    uint16_t PC_173;
    uint16_t PC_174;
    uint16_t PC_175;
    uint16_t PC_176;
}w_11_t;

//слово 12
typedef struct w_12_t
{
    uint16_t PC_177;
    uint16_t PC_178;
    uint16_t PC_179;
    uint16_t PC_180;
    uint16_t PC_181;
    uint16_t PC_182;
    uint16_t PC_183;
    uint16_t PC_184;
    uint16_t PC_185;
    uint16_t PC_186;
    uint16_t PC_187;
    uint16_t PC_188;
    uint16_t PC_189;
    uint16_t PC_190;
    uint16_t PC_191;
    uint16_t PC_192;
}w_12_t;

//слово 13
typedef struct w_13_t
{
    uint16_t PC_193;
    uint16_t PC_194;
    uint16_t PC_195;
    uint16_t PC_196;
    uint16_t PC_197;
    uint16_t PC_198;
    uint16_t PC_199;
    uint16_t PC_200;
    uint16_t PC_201;
    uint16_t PC_202;
    uint16_t PC_203;
    uint16_t PC_204;
    uint16_t PC_205;
    uint16_t PC_206;
    uint16_t PC_207;
    uint16_t PC_208;
}w_13_t;

//слово 14
typedef struct w_14_t
{
    uint16_t PC_209;
    uint16_t PC_210;
    uint16_t PC_211;
    uint16_t PC_212;
    uint16_t PC_213;
    uint16_t PC_214;
    uint16_t PC_215;
    uint16_t PC_216;
    uint16_t PC_217;
    uint16_t PC_218;
    uint16_t PC_219;
    uint16_t PC_220;
    uint16_t PC_221;
    uint16_t PC_222;
    uint16_t PC_223;
    uint16_t PC_224;
}w_14_t;

//Структура слов "Номера идентификаторов РС (слово 1...слово 4)"
typedef struct numid_pc_w_1_4_t
{
   w_1_t w_1;   //слово 1
   w_2_t w_2;   //слово 2
   w_3_t w_3;   //слово 3
   w_4_t w_4;   //слово 4
}numid_pc_w_1_4_t;

//Структура слова "Номера идентификаторов РС (слово 5...слово 8)"
typedef struct numid_pc_w_5_8_t
{
   w_5_t w_5;   //слово 5
   w_6_t w_6;   //слово 6
   w_7_t w_7;   //слово 7
   w_8_t w_8;   //слово 8
}numid_pc_w_5_8_t;

//Структура слова "Номера идентификаторов РС (слово 9...слово 12)"
typedef struct numid_pc_w_9_12_t
{
   w_9_t  w_9;  //слово 9
   w_10_t w_10; //слово 10
   w_11_t w_11; //слово 11
   w_12_t w_12; //слово 12
}numid_pc_w_9_12_t;

//Структура слова "Номера идентификатоPC_ров РС (слова 13, 14)"
typedef struct numid_pc_w_13_14_t
{
   w_13_t w_13; //слово 13
   w_14_t w_14; //слово 14
}numid_pc_w_13_14_t;

//Структура слова "Коды разрешения"
typedef struct codes_p_t
{
    uint16_t gcpc;        //Питание аэрожромное
    uint16_t shassi_obj;  //Шасси обжато
}codes_p_t;

//Структура слова "ВРЕМЯ/ДАТА (слово 1)"
typedef struct td_w1_t
{
    uint16_t hour;        //Часы          // 00 23
    uint16_t day;         //День месяца   // 01 31
    uint16_t month;       //Месяц         // 01 12
}td_w1_t;

//Структура слова "ВРЕМЯ/ДАТА (слово 2)"
typedef struct td_w2_t
{
    uint16_t seconds;     //Секунды       // 00 59
    uint16_t minutes;     //Минуты        // 00 59
}td_w2_t;

//Структура слова "Идентификатор блока файла ППИ"
typedef struct id_bf_ppi_t
{
    uint16_t n_block;        //Номер передаваемого блока файла ППИ
    uint16_t status_f_ppi;    //Статус файла ППИ
}id_bf_ppi_t;

//Структура слова "ППИ (слово (слово K), где K = {1...16})"
typedef struct ppi_k_t
{
    uint16_t word_k;          //Слово №K
}ppi_k_t;

//Структура слова "Контрольная сумма блока файла ППИ"
typedef struct ch_sum_ius_t
{
    uint16_t ch_sum_ius;     //Контрольная сумма
}ch_sum_ius_t;

//Структура слова "Слово идентификации сообщения"
typedef struct id_mess_in_t
{
    uint16_t en_type_mess;    //Контрольная сумма
}id_mess_in_t;

///Структуры выдачи///---------------------------------------------------

//Структура слова "Слово состояния БКС"
typedef struct ws_t
{
    uint16_t regime;          //Режим взаимодействия
}ws_t;

//Структура слова "Адресное слово приёмника информации"
typedef struct adrr_wrx_inf_t
{
    uint16_t q_sadr_as;       //Количество подадресов (Кол_ПАдр)
    uint16_t numb_appl;       //Номер заявки
    uint16_t sadr_rt_as;      //Подадрес приёмника (ПАдр_Прм)
    uint16_t adr_rt_s;        //Адрес приёмника на МКИО (Адр_Прм)
}adrr_wrx_inf_t;

//Структура слова "Адресное слово источника информации"
typedef struct adrr_wtx_inf_t
{
    uint16_t q_word_as;       //Количество слов (Кол_Слов)
    uint16_t sadr_at_as;      //Подадрес МУМ (ПАдр_МУМ)
    uint16_t const_AS;        //Константа (1)
    uint16_t adr_at_as;       //Адрес МУМ на МКИО (Адр_МУМ)
}adrr_wtx_inf_t;

//Структура слова "Версия ПО МЦП (МУМ) С-505-45 (слово 1)"
typedef struct v_po_w1_t
{
    uint16_t n_po;           //Децимальный номер ПО МЦП // 0 65535
}v_po_w1_t;

//Структура слова "Версия ПО МЦП (МУМ) С-505-45 (слово 2)"
typedef struct v_po_w2_t
{
    uint16_t v_po;            //Версия ПО МЦП // 0 100
    uint16_t t_po;            //Версия ПО МЦП // 0 100
}v_po_w2_t;

//Структура слова "Версия ПО МЦП (МУМ) С-505-45 (слово 3)"
typedef struct v_po_w3_t
{
    uint16_t y_po;            //Год           // 0- 100
    uint16_t mon_po;          //Месяц         // 1 12
    uint16_t day_po;          //Дата(день)    // 1 31
}v_po_w3_t;

//Структура слова "Серийный номер комплекса (БКС)"
typedef struct serial_num_t
{
    uint16_t serial_num;     //Серийный номер
}serial_num_t;

//Структура слова "Результаты встроенного контроля БКС (слово 1)"
typedef struct rez_ctrl_bks_w1_t
{
    uint16_t msrp_a_04_connect;   //Связь с МСРП-А-04
    uint16_t a_312m_connect;      //Связь с A-312M
    uint16_t vim_connect;         //Связь с VIM-95-29
    uint16_t ark_connect;         //Связь с АРК-40
    uint16_t r992m_connect;       //Связь с Р-992М
    uint16_t hn_connect;          //Связь с Чинар-М
    uint16_t tr_connect;          //Связь с Трио-М
    uint16_t at_connect;          //Связь с АТ-21
    uint16_t mk_connect;          //Связь с МК-111
    uint16_t shms_connect;        //Связь с ШМС-505-45
    uint16_t b71_v_ok;            //Исправность блока Б71-В
    uint16_t bit_ready:2;         //Достоверность данных ВСК С-505-45
}rez_ctrl_bks_w1_t;

//Структура слова "Результаты встроенного контроля БКС (слово 2)" (Для ШМС-505-45)
typedef struct rez_ctrl_bks_w2_t
{
    uint16_t b21_ok;              //Исправность блока Б21-505
    uint16_t hf_tb;               //ТБ защита                     (Для КВ)
    uint16_t hf_b5_ok;            //Исправность блока Б5-505      (Для КВ)
    uint16_t hf_b4a_ok;           //Исправность блока Б4А-505     (Для КВ)
    uint16_t hf_b70_ok;           //Исправность блока Б70-505 №1  (Для КВ)
    uint16_t vhf2_t;              //Перегрев                      (Для УКВ2)
    uint16_t vhf2_b4b_ok;         //Исправность блока Б4Б-505 №2  (Для УКВ2)
    uint16_t vhf2_b70_ok;         //Исправность блока Б70-505 №2  (Для УКВ2)
    uint16_t vhf1_t;              //Перегрев                      (Для УКВ1)
    uint16_t vhf1_b4b_ok;         //Исправность блока Б4Б-505 №1  (Для УКВ1)
    uint16_t vhf1_b70_ok;         //Исправность блока Б70-505 №1  (Для УКВ1)
}rez_ctrl_bks_w2_t;

//Структура слова "Результаты встроенного контроля БКС (слово 3)"
typedef struct rez_ctrl_bks_w3_t
{
    uint16_t b8_ok;               //Исправность Б8-505
    uint16_t b7ch2_ok;            //Исправность Б7Ш-505 №2
    uint16_t b7ch1_ok;            //Исправность Б7Ш-505 №1
    uint16_t b7l2_ok;             //Исправность Б7Л-505 №2
    uint16_t b7l1_ok;             //Исправность Б7Л-505 №1
    uint16_t mk_key;              //Ключевые данные       (Для МК)
    uint16_t mk_tlf_ok;           //Исправность ТЛФ       (Для МК)
    uint16_t mk_tlk_ok;           //Исправность ТЛК       (Для МК)
}rez_ctrl_bks_w3_t;

//Структура слова "Результаты встроенного контроля БКС (слово 4)"
typedef struct rez_ctrl_bks_w4_t
{
    uint16_t uk2_ok;              //Исправность УК-Э №2
    uint16_t uk1_ok;              //Исправность УК-Э №1
    uint16_t hf3_b26_ok;          //Б26-ЧнрМ  (Канал №3)
    uint16_t hf3_b70_ok;          //Б70-ЧнрМ  (Канал №3)
    uint16_t hf2_b26_ok;          //Б26-ЧнрМ  (Канал №2)
    uint16_t hf2_b70_ok;          //Б70-ЧнрМ  (Канал №2)
    uint16_t hf1_b26_ok;          //Б26-ЧнрМ  (Канал №1)
    uint16_t hf1_b70_ok;          //Б70-ЧнрМ  (Канал №1)
    uint16_t vlf3_b26_ok;         //Б26-ТриМ  (Канал №3)
    uint16_t vlf3_b70_ok;         //Б70-ТриМ  (Канал №3)
    uint16_t vlf2_b26_ok;         //Б26-ТриМ  (Канал №2)
    uint16_t vlf2_b70_ok;         //Б70-ТриМ  (Канал №2)
    uint16_t vlf1_b26_ok;         //Б26-ТриМ  (Канал №1)
    uint16_t vlf1_b70_ok;         //Б70-ТриМ  (Канал №1)
}rez_ctrl_bks_w4_t;  //Канал №1

//Структура слова "Результаты встроенного контроля БКС (слово 5)"
typedef struct rez_ctrl_bks_w5_t
{
    uint16_t r992m_t;             //Перегрев
    uint16_t r992m_ok;            //Исправность
    uint16_t at_b4_fail;          //Исправность Б4
    uint16_t at_b1_fail;          //Исправность Б1
    uint16_t at_ok;               //Исправность в целом
    uint16_t at_availability;     //Признак готовности к работе
}rez_ctrl_bks_w5_t;

//Структура слова "Идентификатор квитанции"
typedef struct id_kvit_t
{
    uint16_t n_block_in;         //Номер полученного блока файла ППИ
    uint16_t load_overw;          //Загрузка/Перезапись
    uint16_t v_kvit;              //Достоверность квитанции
}id_kvit_t;

//Структура слова "Признак текущего состояния загрузки ППИ"
typedef struct tek_sost_ppi_t
{
    uint16_t ow_to_aks;           //Перезапись в АКС
    uint16_t ow_to_hn;            //Перезапись в Чинар-М
    uint16_t ow_to_tr;            //Перезапись в Трио-М
    uint16_t ow_to_hf;            //Перезапись КВ
    uint16_t ow_to_vhf1;          //Перезапись в УКВ1
    uint16_t ow_to_vhf2;          //Перезапись в УКВ2
    uint16_t ow_to_mum;           //Перезапись в МУМ-505-45
    uint16_t ow_to_at;            //Перезапись в АТ-21
    uint16_t ow_mode;             //Состояние перезаписи ППИ в оборудование БКС
    uint16_t er_ch_sum;           //Ошибка контрольной суммы
    uint16_t er_ac_num;           //Ошибка бортового номера
}tek_sost_ppi_t;

typedef struct id_mess_out_t
{
    uint16_t type_mess;           //Тип сообщения
}id_mess_out_t;

///ПРИЁМ///---------------------------------------------------

/// Подадрес приема 01 Массив идентификаторов РС и полетные данные.
typedef struct bks_in_subaddress01_t
{
    numid_pc_w_1_4_t      numid_pc_w_1_4;   //Номера идентификаторов РС (слово 1...слово 4)
    numid_pc_w_5_8_t      numid_pc_w_5_8;   //Номера идентификаторов РС (слово 5...слово 8)
    numid_pc_w_9_12_t     numid_pc_w_9_12;  //Номера идентификаторов РС (слово 9...слово 12)
    numid_pc_w_13_14_t    numid_pc_w_13_14; //Номера идентификаторов РС (слова 13, 14)
    codes_p_t             codes_p;          //Коды разрешения
    td_w1_t               td_w1;            //ВРЕМЯ/ДАТА (слово 1)
    td_w2_t               td_w2;            //ВРЕМЯ/ДАТА (слово 2)
}bks_in_subaddress01_t;

/// Подадрес приема 02 Данные в БКС
typedef struct bks_in_subaddress02_t
{
    id_mess_in_t id_mess_in;   //Слово идентификации сообщения
    uint32_t    data;     //Данные
}bks_in_subaddress02_t;

/// Подадрес приема 03 Данные в БКС
typedef struct bks_in_subaddress03_t
{
    id_mess_in_t id_mess_in;   //Слово идентификации сообщения
    uint32_t    data;     //Данные
}bks_in_subaddress03_t;

/// Подадрес приема 04 Данные в АТ-21
typedef struct bks_in_subaddress04_t
{

}bks_in_subaddress04_t;

/// Подадрес приема 05 Данные в АТ-21
typedef struct bks_in_subaddress05_t
{

}bks_in_subaddress05_t;

/// Подадрес приема 06 Данные в АТ-21
typedef struct bks_in_subaddress06_t
{

}bks_in_subaddress06_t;

/// Подадрес приема 07 Данные в АТ-21
typedef struct bks_in_subaddress07_t
{

}bks_in_subaddress07_t;

/// Подадрес приема 08 ППИ*
typedef struct bks_in_subaddress08_t
{
    id_bf_ppi_t   id_bf_ppi;    //Идентификатор блока файла ППИ
    ppi_k_t       ppi_1;        //ППИ (слово 1)
    ppi_k_t       ppi_2;        //ППИ (слово 2)
    ppi_k_t       ppi_3;        //ППИ (слово 3)
    ppi_k_t       ppi_4;        //ППИ (слово 4)
    ppi_k_t       ppi_5;        //ППИ (слово 5)
    ppi_k_t       ppi_6;        //ППИ (слово 6)
    ppi_k_t       ppi_7;        //ППИ (слово 7)
    ppi_k_t       ppi_8;        //ППИ (слово 8)
    ppi_k_t       ppi_9;        //ППИ (слово 9)
    ppi_k_t       ppi_10;       //ППИ (слово 10)
    ppi_k_t       ppi_11;       //ППИ (слово 11)
    ppi_k_t       ppi_12;       //ППИ (слово 12)
    ppi_k_t       ppi_13;       //ППИ (слово 13)
    ppi_k_t       ppi_14;       //ППИ (слово 14)
    ppi_k_t       ppi_15;       //ППИ (слово 15)
    ppi_k_t       ppi_16;       //ППИ (слово 16)
    ch_sum_ius_t  ch_sum_ius;   //Контрольная сумма блока файла ППИ
}bks_in_subaddress08_t;

///ВЫДАЧА///---------------------------------------------------

/// Подадрес выдачи 01 Состояние БКС
typedef struct bks_out_subaddress01_t
{
    ws_t ws;                     //Слово состояния БКС
    adrr_wrx_inf_t adrr_wrx_inf; //Адреесное слово приёмника информации
    adrr_wtx_inf_t adrr_wtx_inf; //Адреесное слово источника информации
}bks_out_subaddress01_t;

/// Подадрес выдачи 02 Версия ПО, серийный номер
typedef struct bks_out_subaddress02_t
{
    v_po_w1_t v_po_w1;//Версия ПО МЦП (МУМ) С-505-45 (слово 1)
    v_po_w2_t v_po_w2;//Версия ПО МЦП (МУМ) С-505-45 (слово 2)
    v_po_w3_t v_po_w3;//Версия ПО МЦП (МУМ) С-505-45 (слово 3)
    serial_num_t serial_num;//Серийный номер комплекса
}bks_out_subaddress02_t;

/// Подадрес выдачи 03 Результаты ВКС
typedef struct bks_out_subaddress03_t
{
    rez_ctrl_bks_w1_t rez_ctrl_bks_w1;  //Результаты встроенного контроля БКС (слово 1)
    rez_ctrl_bks_w2_t rez_ctrl_bks_w2;  //Результаты встроенного контроля БКС (слово 2)
    rez_ctrl_bks_w3_t rez_ctrl_bks_w3;  //Результаты встроенного контроля БКС (слово 3)
    rez_ctrl_bks_w4_t rez_ctrl_bks_w4;  //Результаты встроенного контроля БКС (слово 4)
    rez_ctrl_bks_w5_t rez_ctrl_bks_w5;  //Результаты встроенного контроля БКС (слово 5)
}bks_out_subaddress03_t;

/// Подадрес выдачи 04 Данные из БКС
typedef struct bks_out_subaddress04_t
{
    id_mess_out_t id_mess_out;  //Слово идентификации сообщения
    uint32_t    data;             //Данные
}bks_out_subaddress04_t;

/// Подадрес выдачи 05 Данные из БКС
typedef struct bks_out_subaddress05_t
{
    id_mess_out_t id_mess_out;  //Слово идентификации сообщения
    uint32_t    data;     //Данные
}bks_out_subaddress05_t;

/// Подадрес выдачи 06 Данные из АТ
typedef struct bks_out_subaddress06_t
{

}bks_out_subaddress06_t;

/// Подадрес выдачи 07 Данные из АТ
typedef struct bks_out_subaddress07_t
{

}bks_out_subaddress07_t;

/// Подадрес выдачи 08 Данные из АТ
typedef struct bks_out_subaddress08_t
{

}bks_out_subaddress08_t;

/// Подадрес выдачи 09 Данные из АТ
typedef struct bks_out_subaddress09_t
{

}bks_out_subaddress09_t;

/// Подадрес выдачи 10 Квитанция на ППИ*
typedef struct bks_out_subaddress10_t
{
    id_kvit_t id_kvit;          //Идентификатор квитанции
    tek_sost_ppi_t tek_sost_ppi;//Признак текущего состояния загрузки ППИ
}bks_out_subaddress10_t;

///---------------------------------------------------

typedef struct bks_in_t
{
    bks_in_subaddress01_t    bks_in_subaddress01;     // Подадрес приема 01
    bks_in_subaddress02_t    bks_in_subaddress02;     // Подадрес приема 02
    bks_in_subaddress03_t    bks_in_subaddress03;     // Подадрес приема 03
    bks_in_subaddress04_t    bks_in_subaddress04;     // Подадрес приема 04
    bks_in_subaddress05_t    bks_in_subaddress05;     // Подадрес приема 05
    bks_in_subaddress06_t    bks_in_subaddress06;     // Подадрес приема 06
    bks_in_subaddress07_t    bks_in_subaddress07;     // Подадрес приема 07
    bks_in_subaddress08_t    bks_in_subaddress08;     // Подадрес приема 08
}bks_in_t;

typedef struct bks_out_t
{
    bks_out_subaddress01_t    bks_out_subaddress01;     // Подадрес выдачи 01
    bks_out_subaddress02_t    bks_out_subaddress02;     // Подадрес выдачи 02
    bks_out_subaddress03_t    bks_out_subaddress03;     // Подадрес выдачи 03
    bks_out_subaddress04_t    bks_out_subaddress04;     // Подадрес выдачи 04
    bks_out_subaddress05_t    bks_out_subaddress05;     // Подадрес выдачи 05
    bks_out_subaddress06_t    bks_out_subaddress06;     // Подадрес выдачи 06
    bks_out_subaddress07_t    bks_out_subaddress07;     // Подадрес выдачи 07
    bks_out_subaddress08_t    bks_out_subaddress08;     // Подадрес выдачи 08
    bks_out_subaddress09_t    bks_out_subaddress09;     // Подадрес выдачи 09
    bks_out_subaddress10_t    bks_out_subaddress10;     // Подадрес выдачи 10
}bks_out_t;

/// БКС
typedef struct bks_t
{
    bks_in_t      bks_in;                       //Приём
    bks_out_t     bks_out;                      //Выдача
}bks_t;
#endif // BKS_2017_H_INCLUDED
