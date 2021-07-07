/***********************************************
 *
 * UTF-8 translation tables for vfd driver
 *
 * Translate from UFT8 offset to offset into
 * ML9208 character generator
 *
 */

unsigned char *UTF_Char_Table = NULL;

unsigned char UTF_C2[64] =
{
	0x10,  //0x80, nonprintable control
	0x10,  //0x81, nonprintable control
	0x10,  //0x82, nonprintable control
	0x10,  //0x83, nonprintable control
	0x10,  //0x84, nonprintable control
	0x10,  //0x85, nonprintable control
	0x10,  //0x86, nonprintable control
	0x10,  //0x87, nonprintable control
	0x10,  //0x88, nonprintable control
	0x10,  //0x89, nonprintable control
	0x10,  //0x8a, nonprintable control
	0x10,  //0x8b, nonprintable control
	0x10,  //0x8c, nonprintable control
	0x10,  //0x8d, nonprintable control
	0x10,  //0x8e, nonprintable control
	0x10,  //0x8f, nonprintable control

	0x10,  //0x90, nonprintable control
	0x10,  //0x91, nonprintable control
	0x10,  //0x92, nonprintable control
	0x10,  //0x93, nonprintable control
	0x10,  //0x94, nonprintable control
	0x10,  //0x95, nonprintable control
	0x10,  //0x96, nonprintable control
	0x10,  //0x97, nonprintable control
	0x10,  //0x98, nonprintable control
	0x10,  //0x99, nonprintable control
	0x10,  //0x9a, nonprintable control
	0x10,  //0x9b, nonprintable control
	0x10,  //0x9c, nonprintable control
	0x10,  //0x9d, nonprintable control
	0x10,  //0x9e, nonprintable control
	0x10,  //0x9f, nonprintable control

	0x10,  //0xa0, no break space
	0xad,  //0xa1, inverted exclamation mark
	0x9b,  //0xa2, cent sign
	0x9c,  //0xa3, pound sign
	0x64,  //0xa4, currency sign
	0x9d,  //0xa5, yen sign
	0x7c,  //0xa6, broken bar
	0x67,  //0xa7, section sign
	0x68,  //0xa8, diaeresis
	0x69,  //0xa9, copyright sign
	0xa6,  //0xaa, feminine ordinal indicator
	0xae,  //0xab, left pointing double angle quotation mark
	0xaa,  //0xac, not sign
	0x10,  //0xad, soft hyphen
	0x6e,  //0xae, registered sign
	0x6f,  //0xaf, macron

	0x70,  //0xb0, degree sign
	0x71,  //0xb1, plus-minus sign
	0x72,  //0xb2, superscript two
	0x73,  //0xb3, superscript three
	0x74,  //0xb4, acute accent
	0x93,  //0xb5, micro sign
	0x94,  //0xb6, pilcrow sign
	0x77,  //0xb7, middle dot
	0x78,  //0xb8, cedilla
	0x79,  //0xb9, superscript one
	0xa7,  //0xba, masculine ordinal indicator
	0xaf,  //0xbb, right pointing double angle quotation mark
	0xac,  //0xbc, vulgar fraction one quarter
	0xab,  //0xbd, vulgar fraction one half
	0x7e,  //0xbe, vulgar fraction three quarters
	0xa8   //0xbf, inverted question mark
};

unsigned char UTF_C3[64] =
{
	0x8f,  //0x80, capital A with accent grave
	0x8f,  //0x81, capital A with accent acute
	0x8f,  //0x82, capital A with accent circonflexe
	0x8e,  //0x83, capital A with accent tilde
	0x8e,  //0x84, capital A with accent diaeresis //Ä
	0x8f,  //0x85, capital A with accent ring above
	0x92,  //0x86, capital letter AE
	0x80,  //0x87, capital C with cedille
	0x90,  //0x88, capital E with accent grave
	0x90,  //0x89, capital E with accent acute
	0x90,  //0x8a, capital E with accent circonflexe
	0x90,  //0x8b, capital E with accent diaeresis
	0x8d,  //0x8c, capital I with accent grave
	0x8d,  //0x8d, capital I with accent acute
	0x8c,  //0x8e, capital I with accent circonflexe
	0x8a,  //0x8f, capital I with accent diaeresis

	0x44,  //0x90, capital D with dash
	0xa5,  //0x91, capital N with accent tilde
	0x95,  //0x92, capital O with accent grave
	0xa2,  //0x93, capital O with accent acute
	0x93,  //0x94, capital O with accent circonflexe
	0x93,  //0x95, capital O with accent tilde
	0x99,  //0x96, capital O with accent diaeresis //Ö
	0x78,  //0x97, multiplication sign
	0xb6,  //0x98, capital O with stroke
	0x97,  //0x99, capital U with accent grave
	0xa3,  //0x9a, capital U with accent acute
	0x96,  //0x9b, capital U with accent circonflexe
	0x9a,  //0x9c, capital U with accent diaeresis //Ü
	0x98,  //0x9d, capital Y with accent acute
	0x5e,  //0x9e, capital thorn
	0xb1,  //0x9f, ringel-S  //ß

	0x85,  //0xa0, small a with accent grave
	0x86,  //0xa1, small a with accent acute
	0x83,  //0xa2, small a with accent circonflexe
	0x83,  //0xa3, small a with accent tilde
	0x84,  //0xa4, small a with accent diaeresis //ä
	0x83,  //0xa5, small a with accent ring above
	0x91,  //0xa6, small letter AE
	0x87,  //0xa7, small c with cedille
	0x8a,  //0xa8, small e with accent grave
	0x82,  //0xa9, small e with accent acute
	0x88,  //0xaa, small e with accent circonflexe
	0x86,  //0xab, small e with accent diaeresis
	0x8d,  //0xac, small i with accent grave
	0xa1,  //0xad, small i with accent acute
	0x8c,  //0xae, small i with accent circonflexe
	0x8b,  //0xaf, small i with accent diaeresis

	0x93,  //0xb0, small letter ETH
	0xa4,  //0xb1, small n with accent tilde
	0x95,  //0xb2, small o with accent grave
	0xa2,  //0xb3, small o with accent acute
	0x93,  //0xb4, small o with accent circonflexe
	0x93,  //0xb5, small o with accent tilde
	0x94,  //0xb6, small o with accent diaeresis //ö
	0x77,  //0xb7, division sign
	0x78,  //0xb8, small o with stroke
	0x97,  //0xb9, small u with accent grave
	0xab,  //0xba, small u with accent acute
	0x96,  //0xbb, small u with accent circonflexe
	0x81,  //0xbc, small u with accent diaeresis //ü
	0x79,  //0xbd, small y with accent acute
	0x70,  //0xbe, small letter thorn
	0x98   //0xbf, small y with accent diaresis
};

unsigned char UTF_C4[64] =
{
	0x8f,  //0x80, capital A with accent macron
	0x8f,  //0x81, small a with accent macron
	0x8f,  //0x82, capital A with accent breve
	0x8f,  //0x83, small a with accent breve
	0x41,  //0x84, capital A with accent ogonek (polish accented A)
	0x61,  //0x85, small a with accent ogonek (polish acccented a)
	0x43,  //0x86, capital C with accent acute (polish accented C)
	0x63,  //0x87, small c with accent acute (polish accented c)
	0x90,  //0x88, capital C with accent circonflexe
	0x90,  //0x89, small c with accent circonflexe
	0x90,  //0x8a, capital C with dot above
	0x90,  //0x8b, small c with dot above
	0x8d,  //0x8c, capital C with accent caron
	0x8d,  //0x8d, small c with accent caron
	0x8c,  //0x8e, capital D with accent caron
	0x8a,  //0x8f, small d with accent caron

	0x44,  //0x90, capital D with stroke
	0xa5,  //0x91, small d with stroke
	0x95,  //0x92, capital E with accent macron
	0xa2,  //0x93, small e with accent macron
	0x93,  //0x94, capital E with accent breve
	0x93,  //0x95, small e with accent breve
	0x99,  //0x96, capital E with dot above
	0x78,  //0x97, small e with dot above
	0x45,  //0x98, capital E with accent ogonek (polish accented E)
	0x65,  //0x99, small e with accent ogonek (polish accented E)
	0xa3,  //0x9a, capital E with accent caron
	0x96,  //0x9b, small e with accent caron
	0x9a,  //0x9c, capital G with accent circonflexe
	0x98,  //0x9d, small g with accent circonflexe
	0x5e,  //0x9e, capital G with accent breve
	0x5f,  //0x9f, small g with accent breve

	0x85,  //0xa0, capital G with dot above
	0x86,  //0xa1, small g with dot above
	0x83,  //0xa2, capital G with cedille
	0x83,  //0xa3, small g with cedille
	0x84,  //0xa4, capital H with accent circonflexe
	0x83,  //0xa5, small h with accent circonflexe
	0x91,  //0xa6, capital H with stroke
	0x87,  //0xa7, small h with stroke
	0x8a,  //0xa8, capital I with tilde
	0x82,  //0xa9, small i with tilde
	0x88,  //0xaa, capital I with accent macron
	0x86,  //0xab, small i with accent macron
	0x8d,  //0xac, capital I with accent breve
	0xa1,  //0xad, small i with accent breve
	0x8c,  //0xae, capital I with accent ogonek
	0x8b,  //0xaf, small i with accent ogonek

	0x93,  //0xb0, capital I with dot above
	0xa4,  //0xb1, small i without dot
	0x95,  //0xb2, capital IJ
	0xa2,  //0xb3, small ij
	0x93,  //0xb4, capital J with accent circonflexe
	0x93,  //0xb5, small j with accent circonflexe
	0x94,  //0xb6, capital K with cedille
	0x77,  //0xb7, small k with cedille
	0x78,  //0xb8, small letter kra
	0x97,  //0xb9, capital L with accent acute
	0xab,  //0xba, small l with accent acute
	0x96,  //0xbb, capital L with cedille
	0x81,  //0xbc, small l with  cedille
	0x79,  //0xbd, capital L with accent caron
	0x70,  //0xbe, small l with accent caron
	0x98   //0xbf, capital L with middle dot
};

unsigned char UTF_C5[64] =
{
	0x8f,  //0x80, small l with middle dot
	0x4c,  //0x81, capital L with stroke (polish accented L)
	0x6c,  //0x82, small l with stroke (polish accented l)
	0x4e,  //0x83, capital N with accent acute (polish accented N)
	0x6e,  //0x84, small n with accent acute (polish accented n)
	0x8f,  //0x85, capital N with cedille
	0x8f,  //0x86, small n with cedille
	0x80,  //0x87, capital N with accent caron
	0x90,  //0x88, small n with accent caron
	0x90,  //0x89, small n with apostrofe in front
	0x90,  //0x8a, capital letter eng
	0x90,  //0x8b, small letter eng
	0x8d,  //0x8c, capital O with macron
	0x8d,  //0x8d, small o with macron
	0x8c,  //0x8e, capital O with breve
	0x8a,  //0x8f, small o with breve

	0x44,  //0x90, capital O with double accent acute
	0xa5,  //0x91, small o with double accent acute
	0x95,  //0x92, capital OE
	0xa2,  //0x93, small oe
	0x93,  //0x94, capital R with accent acute
	0x73,  //0x95, small r with accent acute
	0x99,  //0x96, capital R with accent acute
	0x78,  //0x97, small r with accent acute
	0xb6,  //0x98, capital R with accent caron
	0x97,  //0x99, small r with accent caron
	0x53,  //0x9a, capital S with accent acute (polish accented S)
	0x73,  //0x9b, small s with accent acute (polish accented s)
	0x9a,  //0x9c, capital S with accent circonflexe
	0x98,  //0x9d, small s with accent circonflexe
	0x5e,  //0x9e, capital S with cedille
	0x5f,  //0x9f, small s with cedille

	0x85,  //0xa0, capital S with caron
	0x86,  //0xa1, small s with caron
	0x83,  //0xa2, capital T with cedille
	0x83,  //0xa3, small t with cedille
	0x84,  //0xa4, capital T with caron
	0x83,  //0xa5, small t with caron
	0x91,  //0xa6, capital T with stroke
	0x87,  //0xa7, small t with stroke
	0x8a,  //0xa8, capital U with tilde
	0x82,  //0xa9, small u with tilde
	0x88,  //0xaa, capital U with macron
	0x86,  //0xab, small u with macron
	0x8d,  //0xac, capital U with breve
	0xa1,  //0xad, small u with breve
	0x8c,  //0xae, capital U with ring above
	0x8b,  //0xaf, small u with ring above

	0x93,  //0xb0, capital U with double accent acute
	0xa4,  //0xb1, small u with double accent acute
	0x95,  //0xb2, capital U with ogonek
	0xa2,  //0xb3, small u with ogonek
	0x93,  //0xb4, capital W with accent circonflexe
	0x93,  //0xb5, small w with accent circonflexe
	0x94,  //0xb6, capital Y with accent circonflexe
	0x77,  //0xb7, small y with accent circonflexe
	0x78,  //0xb8, capital W with accent diaeresis
	0x5a,  //0xb9, capital Z with accent acute (polish accented Zi)
	0x7a,  //0xba, small z with accent acute (polish accented zi)
	0x5a,  //0xbb, capital Z with dot above (polish accented Z)
	0x7a,  //0xbc, small z with dot above (polish accented z)
	0x79,  //0xbd, capital Z with accent caron
	0x70,  //0xbe, small z with accent caron
	0x98   //0xbf, small long s
};

unsigned char UTF_D0[64] =
{
	0x40,  //0x80,
	0x90,  //0x81,
	0x42,  //0x82,
	0x43,  //0x83,
	0x8e,  //0x84,
	0x45,  //0x85,
	0x46,  //0x86,
	0x47,  //0x87,
	0x48,  //0x88,
	0x49,  //0x89,
	0x4a,  //0x8a,
	0x4b,  //0x8b,
	0x4c,  //0x8c,
	0x4d,  //0x8d,
	0x4e,  //0x8e,
	0x4f,  //0x8f,

	0x41,  //0x90, А, Cyrillic start
	0xda,  //0x91, Б
	0x42,  //0x92, В
	0xdb,  //0x93, Г
	0xdc,  //0x94, Д
	0x45,  //0x95, Е
	0xdd,  //0x96, Ж
	0xde,  //0x97, З
	0xdf,  //0x98, И
	0xe0,  //0x99, Й
	0x4b,  //0x9a, К
	0xe1,  //0x9b, Л
	0x4d,  //0x9c, М
	0x48,  //0x9d, Н
	0x4f,  //0x9e, О
	0xe2,  //0x9f, П

	0x50,  //0xa0, Р
	0x43,  //0xa1, С
	0x54,  //0xa2, Т
	0xe3,  //0xa3, У
	0xe4,  //0xa4, Ф
	0x58,  //0xa5, Х
	0xe5,  //0xa6, Ц
	0xe6,  //0xa7, Ч
	0xe7,  //0xa8, Ш
	0xe8,  //0xa9, Щ
	0xe9,  //0xaa, Ъ
	0xea,  //0xab, Ы
	0xe9,  //0xac, Ь
	0xeb,  //0xad, Э
	0xec,  //0xae, Ю
	0xed,  //0xaf, Я

	0x41,  //0xb0, А
	0xda,  //0xb1, Б
	0x42,  //0xb2, В
	0xdb,  //0xb3, Г
	0xdc,  //0xb4, Д
	0x45,  //0xb5, Е
	0xdd,  //0xb6, Ж
	0xde,  //0xb7, З
	0xdf,  //0xb8, И
	0xe0,  //0xb9, Й
	0x4b,  //0xba, К
	0xe1,  //0xbb, Л
	0x4d,  //0xbc, М
	0x48,  //0xbd, Н
	0x4f,  //0xbe, О
	0xe2   //0xbf, П
};

unsigned char UTF_D1[64] =
{
	0x50,  //0x80, Р
	0x43,  //0x81, С
	0x54,  //0x82, Т
	0xe3,  //0x83, У
	0xe4,  //0x84, Ф
	0x58,  //0x85, Х
	0xe5,  //0x86, Ц
	0xe6,  //0x87, Ч
	0xe7,  //0x88, Ш
	0xe8,  //0x89, Щ
	0xe9,  //0x8a, Ъ
	0xea,  //0x8b, Ы
	0xe9,  //0x8c, Ь
	0xeb,  //0x8d, Э
	0xec,  //0x8e, Ю
	0xed,  //0x8f, Я, Cyrillic end

	0x8b,  //0x90,
	0x90,  //0x91,
	0x52,  //0x92,
	0x53,  //0x93,
	0x54,  //0x94,
	0x93,  //0x95,
	0x99,  //0x96,
	0x8b,  //0x97,
	0xb6,  //0x98,
	0x59,  //0x99,
	0x5a,  //0x9a,
	0x5b,  //0x9b,
	0x9a,  //0x9c,
	0x5d,  //0x9d,
	0x5e,  //0x9e,
	0x5f,  //0x9f,

	0x60,  //0xa0,
	0x61,  //0xa1,
	0x62,  //0xa2,
	0x63,  //0xa3,
	0x84,  //0xa4,
	0x83,  //0xa5,
	0x66,  //0xa6,
	0x67,  //0xa7,
	0x68,  //0xa8,
	0x69,  //0xa9,
	0x6a,  //0xaa,
	0x6b,  //0xab,
	0x6c,  //0xac,
	0x6d,  //0xad,
	0x6e,  //0xae,
	0x6f,  //0xaf,

	0x70,  //0xb0,
	0x71,  //0xb1,
	0x72,  //0xb2,
	0x73,  //0xb3,
	0x74,  //0xb4,
	0x93,  //0xb5,
	0x94,  //0xb6,
	0x77,  //0xb7,
	0x78,  //0xb8,
	0x79,  //0xb9,
	0x7a,  //0xba,
	0x7b,  //0xbb,
	0x81,  //0xbc,
	0x7d,  //0xbd,
	0x7e,  //0xbe,
	0x7f   //0xbf,
};