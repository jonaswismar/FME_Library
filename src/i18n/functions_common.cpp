#include <Arduino.h>

#include "variables_common.h"

struct language
{
   String code;
   String language;

   String language_de;
   String language_en;
   String language_fr;
   String language_it;
   String language_tr;
   String language_es;
   String language_uk;
   String language_pl;
   String language_ru;
   String language_ro;

   String menubar_menu;
   String menubar_select;
   String menubar_save;
   String menubar_back;

   String menu_menu;
   String menu_alarmmessages;
   String menu_textmessages;
   String menu_audioprofiles;
   String menu_settings;
   String menu_alarmclock;
   String menu_service;

   String menu_audio_silent;
   String menu_audio_25;
   String menu_audio_50;
   String menu_audio_75;
   String menu_audio_normal;

   String menu_brightness;
   String menu_time;
   String menu_date;
   String menu_buttonsound;
   String menu_language;
   String menu_orientation;
   String menu_theme;

   String menu_on;
   String menu_off;

   String menu_brightness_set;
   String menu_time_set;

   String menu_date_year;
   String menu_date_month;
   String menu_date_day;

   String menu_date_year_set;
   String menu_date_month_set;
   String menu_date_day_set;

   String menu_alarmclock_set;

   String menu_service_hardware;
   String menu_service_software;
   String menu_service_subscriber;

   String menu_service_info;
   String menu_service_info_size;
   String menu_service_info_compile;
   String menu_service_info_cores;
   String menu_service_info_speed;
   String menu_service_info_issi;

   String alarm_address;
   String alarm_comment;

   String week_monday;
   String week_tuesday;
   String week_wednesday;
   String week_thursday;
   String week_friday;
   String week_saturday;
   String week_sunday;

   String week_short_monday;
   String week_short_tuesday;
   String week_short_wednesday;
   String week_short_thursday;
   String week_short_friday;
   String week_short_saturday;
   String week_short_sunday;

   String month_january;
   String month_february;
   String month_march;
   String month_april;
   String month_may;
   String month_june;
   String month_july;
   String month_august;
   String month_september;
   String month_october;
   String month_november;
   String month_december;

   String month_short_january;
   String month_short_february;
   String month_short_march;
   String month_short_april;
   String month_short_may;
   String month_short_june;
   String month_short_july;
   String month_short_august;
   String month_short_september;
   String month_short_october;
   String month_short_november;
   String month_short_december;

   String vertical;
   String horizontal;

   String color_color;
   String color_blackwhite;
   String color_outline;
};

language de = {"de", "Deutsch",
               "Deutsch", "Englisch", "Französisch", "Italienisch", "Türkisch", "Spanisch", "Ukrainisch", "Polnisch", "Russisch", "Rumänisch",
               "MENÜ", "AUSWÄHLEN", "SPEICHERN", "ZURÜCK",
               "Menü", "Alarmmitteil.", "Textmitteil.", "Audio-Profile", "Einstellungen", "Wecker", "Service",
               "Lautlos", "25%", "50%", "75%", "Normal",
               "Helligkeit", "Uhrzeit", "Datum", "Tastenton", "Sprache", "Orientierung", "Theme",
               "Eingeschaltet", "Ausgeschaltet",
               "Helligkeit setzen", "Uhrzeit setzen",
               "Jahr", "Monat", "Tag",
               "Jahr setzen", "Monat setzen", "Tag setzen",
               "Weckzeit setzen",
               "Hardware", "Software", "Teilnehmer",
               "Info", "Größe", "Kompiliert am", "Kerne", "Geschwindigkeit", "ISSI",
               "Adresse", "Kommentar",
               "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag",
               "Mo.", "Di.", "Mi.", "Do.", "Fr.", "Sa.", "So.",
               "Januar", "Februar", "März", "April", "Mai", "Juni", "Juli", "August", "September", "Oktober", "November", "Dezember",
               "Jan.", "Feb.", "Mrz.", "Apr.", "Mai", "Jun.", "Jul.", "Aug.", "Sep.", "Okt.", "Nov.", "Dez.",
               "Vertikal", "Horizontal",
               "Farbe", "Schwarz & Weiß", "Linie"};

language en = {"en", "English",
               "German", "English", "French", "Italian", "Turkish", "Spanish", "Ukrainian", "Polish", "Russian", "Romanian",
               "MENU",
               "SELECT", "SAVE", "BACK",
               "Menu", "Alarmmessages", "Textmessages", "Audio-Profiles", "Settings", "Alarmclock", "Service",
               "Silent", "25%", "50%", "75%", "Normal",
               "Brightness", "Time", "Date", "Buttonsound", "Language", "Orientation", "Theme",
               "On", "Off",
               "Set Brightness", "Set Time",
               "Year", "Month", "Day",
               "Set Year", "Set Month", "Set Day",
               "Set Wake Up Time",
               "Hardware", "Software", "Subscriber",
               "Info", "Size", "Compiled on", "Cores", "Speed", "ISSI",
               "Address", "Comment",
               "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday",
               "Mon.", "Tues.", "Wed.", "Thurs.", "Fri.", "Sat.", "Sun.",
               "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December",
               "Jan.", "Feb.", "Mar.", "Apr.", "May", "June", "July", "Aug.", "Sep.", "Oct.", "Nov.", "Dec.",
               "Vertical", "Horizontal",
               "Color", "Black & White", "Outline"};

language fr = {"fr", "Français",
               "Allemand", "Anglais", "Français", "Italien", "Turc", "Espagnol", "Ukrainien", "Polonais", "Russe", "Roumain",
               "MENU", "CHOISIR", "SAUVEGARDER", "DOS",
               "Menu", "Notification d'alarme", "Notification", "Profils audio", "Paramètres", "Réveil", "Service",
               "Silencieusement", "25%", "50%", "75%", "Normale",
               "Luminosité", "Temps", "Date", "Tonalité", "Langue", "orientation", "Thème",
               "Allumé", "Éteint",
               "Régler la luminosité", "Régler le temps",
               "Année", "Mois", "Jour",
               "Définir l'année", "Définir le mois", "Définir le jour",
               "Régler l'heure de l'alarme",
               "Matériel", "Logiciel", "Participant",
               "Info", "Taille", "Compilé sur", "Noyaux", "Vitesse", "ISSI",
               "Adresse", "Commentaire",
               "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche",
               "Lu.", "Ma.", "Me.", "Je.", "Ve.", "Sa.", "Di.",
               "Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre",
               "Janv.", "Févr.", "Mars", "Avr.", "Mai", "Juin", "Juil.", "Août", "Sept.", "Oct.", "Nov.", "Déc.",
               "Verticale", "Horizontale",
               "Couleur", "Noir et blanc", "Contour"};

language it = {"it", "Italiano",
               "Tedesco", "Inglese", "Francese", "Italiano", "Turco", "Spagnolo", "Ucraino", "Polacco", "Russo", "Rumeno",
               "MENU", "SELEZIONA", "SALVA", "INDIETRO",
               "Menu", "Notifica sveglia", "Notifica SMS", "Profili audio", "Impostazioni", "Sveglia", "Servizio",
               "Silenzioso", "25%", "50%", "75%", "Normale",
               "Luminosità", "Ora", "Data", "Tono tasti", "Lingua", "Orientamento", "Tema",
               "Acceso", "Spento",
               "Imposta luminosità", "Imposta ora",
               "Anno mese giorno",
               "Imposta anno", "Imposta mese", "Imposta giorno",
               "Imposta l'ora della sveglia",
               "Hardware", "Software", "Partecipanti",
               "Informazioni", "Dimensione", "Data compilazione", "Cores", "Velocità", "ISSI",
               "Indirizzo", "Commento",
               "Lunedì", "martedì", "mercoledì", "giovedì", "venerdì", "sabato", "domenica",
               "Lun.", "Mar.", "Mer.", "Giovedì.", "Ven.", "Sab.", "Domenica.",
               "Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre",
               "Gen.", "Feb.", "Mar.", "Apr.", "Maggio", "Giu.", "Lug.", "Ago.", "Set.", "Ott.", " Nov.", "Dic.",
               "Verticale orizzontale",
               "Colore", "Bianco e nero", "Linea"};

language tr = {"tr", "Türkçe",
               "Almanca", "İngilizce", "Fransızca", "İtalyanca", "Türkçe", "İspanyolca", "Ukraynaca", "Lehçe", "Rusça", "Romence",
               "MENÜ", "SEÇMEK", "KAYDETMEK", "GERİ",
               "Menü", "Alarm bildirimleri", "Metin mesajları", "Ses profilleri", "Ayarlar", "Alarm saati", "Hizmet",
               "Sessizce", "25%", "50%", "75%", "Normal",
               "Parlaklık", "Zaman", "Tarih", "Tuş sesi", "Dil", "Oryantasyon", "Tema",
               "Açık", "Kapalı",
               "Parlaklığı ayarla", "Ayarlanan zaman",
               "Yıl", "Ay", "Gün",
               "Yılı ayarla", "Ayı ayarla", "Günü ayarla",
               "Alarm zamanını ayarla",
               "Donanım", "Yazılım", "Katılımcı",
               "Bilgi", "Boyut", "Derlendiği tarih", "çekirdekler", "Hız", "ISSI",
               "Adres", "Yorum",
               "Pazartesi", "Salı", "Çarşamba", "Perşembe", "Cuma", "Cumartesi", "Pazar",
               "Pzt.", "Sal.", "Çar.", "Per.", "Cum.", "Cmt.", "Paz.",
               "Ocak", "Şubat", "Mart", "Nisan", "Mayıs", "Haziran", "Temmuz", "Ağustos", "Eylül", "Ekim", "Kasım", "Aralık",
               "Ocak", "Şubat", "Mart", "Nisan", "Mayıs", "Haziran", "Temmuz", "Ağustos", "Eylül", "Ekim", "Kasım", "Aralık",
               "Dikey", "Yatay",
               "Renk", "Siyah ve beyaz", "Astar"};

language es = {"es", "español",
               "alemán", "inglés", "francés", "italiano", "turco", "español", "ucraniano", "polaco", "ruso", "rumano",
               "MENÚ", "SELECCIONAR", "GUARDAR", "ATRÁS",
               "Menú", "Notificación de alarma", "Notificación de texto", "Perfiles de audio", "Configuración", "Despertador", "Servicio",
               "Silencio", "25%", "50%", "75%", "Normal",
               "Brillo", "Hora", "Fecha", "Tono de tecla", "Idioma", "Orientación", "Tema",
               "Encendido", "Apagado",
               "Establecer brillo", "Establecer hora",
               "Año mes dia",
               "Establecer año", "Establecer mes", "Establecer día",
               "Establecer hora de alarma",
               "Hardware", "Software", "Participantes",
               "Información", "Tamaño", "Fecha de compilación", "Núcleos", "Velocidad", "ISSI",
               "Dirección", "Comentario",
               "Lunes martes Miércoles Jueves Viernes Sábado Domingo",
               "lunes", "martes", "miércoles", "jueves", "viernes", "sábado", "domingo",
               "enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre",
               "Ene.", "Feb.", "Mar.", "Abr.", "May", "Jun.", "Jul.", "Ago.", "Sep.", "Oct.", " noviembre.", "dic.",
               "Vertical horizontal",
               "Color", "Blanco y negro", "Línea"};

language uk = {"uk", "Польська",
               "Німецька", "Англійська", "Французька", "Італійська", "Турецька", "Іспанська", "Українська", "Польська", "Російська", "Румунська",
               "МЕНЮ", "ВИБІР", "ЗБЕРЕГТИ", "НАЗАД",
               "Меню", "Будильник", "Текстове сповіщення", "Аудіопрофілі", "Налаштування", "Будильник", "Сервіс",
               "Без звуку", "25%", "50%", "75%", "Звичайний",
               "Яскравість", "Час", "Дата", "Тон клавіш", "Мова", "Орієнтація", "Тема",
               "Ввімкнено", "Вимкнено",
               "Встановити яскравість", "Встановити час",
               "Рік місяць день",
               "Установити рік", "Установити місяць", "Установити день",
               "Установити час будильника",
               "Апаратне забезпечення", "Програмне забезпечення", "Учасники",
               "Інформація", "Розмір", "Дата компіляції", "Ядра", "Швидкість", "ISSI",
               "Адреса", "Коментар",
               "Понеділок вівторок середа четвер п'ятниця субота неділя",
               "Пн.", "Вт.", "Ср.", "Чт.", "Пт.", "Сб.", "Нд.",
               "Січень", "Лютий", "Березень", "Квітень", "Травень", "Червень", "Липень", "Серпень", "Вересень", "Жовтень", "Листопад", "Грудень",
               "Січ.", "Лют.", "Берез.", "Квіт.", "Травень", "Черв.", "Лип.", "Серп.", "Вер.", "Жовт.", "лист.", "грудень",
               "Вертикаль", "Горизонталь",
               "Колір", "Чорно-біле", "Лінія"};

language pl = {"pl", "polski",
               "niemiecki", "angielski", "francuski", "włoski", "turecki", "hiszpański", "ukraiński", "polski", "rosyjski", "rumuński",
               "MENU", "WYBIERZ", "ZAPISZ", "WSTECZ",
               "Menu", "Powiadomienie o alarmie", "Powiadomienie SMS", "Profile audio", "Ustawienia", "Budzik", "Serwis",
               "Cichy", "25%", "50%", "75%", "Normalny",
               "Jasność", "Czas", "Data", "Dźwięk klawiszy", "Język", "Orientacja", "Motyw",
               "Włączony", "Wyłączony",
               "Ustaw jasność", "Ustaw czas",
               "Rok miesiąc dzień",
               "Ustaw rok", "Ustaw miesiąc", "Ustaw dzień",
               "Ustaw godzinę alarmu",
               "Sprzęt", "Oprogramowanie", "Uczestnicy",
               "Informacje", "Rozmiar", "Data kompilacji", "Rdzenie", "Prędkość", "ISSI",
               "Adres", "Komentarz",
               "Poniedziałek wtorek środa czwartek piątek sobota niedziela",
               "Poniedziałek", "Wtorek", "Środa", "Czwartek", "Piątek", "Sobota", "Niedziela",
               "styczeń", "luty", "marzec", "kwiecień", "maj", "czerwiec", "lipiec", "sierpień", "wrzesień", "październik", "listopad", "grudzień",
               "styczeń", "luty", "marzec", "kwiecień", "maj", "czerwiec", "lipiec", "sierpień", "wrzesień", "październik", " listopad", "grudzień",
               "Wertykalny horyzontalny",
               "Kolor", "Czarno-biały", "Linia"};

language ru = {"ru", "Русский",
               "Немецкий", "Английский", "Французский", "Итальянский", "Турецкий", "Испанский", "Украинский", "Польский", "Русский", "Румынский",
               "МЕНЮ", "ВЫБРАТЬ", "СОХРАНИТЬ", "НАЗАД",
               "Меню", "Уведомление о будильнике", "Текстовое уведомление", "Аудиопрофили", "Настройки", "Будильник", "Сервис",
               "Без звука", "25%", "50%", "75%", "Нормальный",
               "Яркость", "Время", "Дата", "Тональность", "Язык", "Ориентация", "Тема",
               "Включено", "Выключено",
               "Установить яркость", "Установить время",
               "Год месяц день",
               "Установить год", "Установить месяц", "Установить день",
               "Установить время будильника",
               "Оборудование", "Программное обеспечение", "Участники",
               "Информация", "Размер", "Дата компиляции", "Ядра", "Скорость", "ISSI",
               "Адрес", "Комментарий",
               "Понедельник", "вторник", "среда", "Четверг", "Пятница", "Суббота", "воскресенье",
               "Пн.", "Вт.", "Ср.", "Чт.", "Пт.", "Сб.", "Вс.",
               "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь",
               "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь",
               "Вертикальный горизонтальный",
               "Цвет", "Черно-белое", "Линия"};

language ro = {"ro", "română",
               "Germană", "engleză", "franceză", "italiană", "turcă", "spaniolă", "ucraineană", "poloneză", "rusă", "română",
               "MENIU", "SELECTARE", "SAVE", "ÎNAPOI",
               "Meniu", "Notificare alarmă", "Notificare text", "Profiluri audio", "Setări", "Ceas alarmă", "Serviciu",
               "Silențios", "25%", "50%", "75%", "Normal",
               "Luminozitate", "Ora", "Data", "Tonul tastei", "Limba", "Orientare", "Temă",
               "Pornit", "Oprit",
               "Setați luminozitatea", "Setați ora",
               "An lună zi",
               "Setați anul", "Setați luna", "Setați ziua",
               "Setați ora alarmei",
               "Hardware", "Software", "Participanți",
               "Informații", "Dimensiune", "Data compilată", "Miezuri", "Viteză", "ISSI",
               "Adresă", "Comentariu",
               "Luni marti miercuri joi vineri sambata Duminica",
               "Luni", "Marți", "Mier.", "Joi", "Vineri", "Sâmbătă", "Dum.",
               "Ianuarie", "Februarie", "Martie", "Aprilie", "Mai", "Iunie", "Iulie", "August", "Septembrie", "Octombrie", "Noiembrie", "Decembrie",
               "Ian.", "Feb.", "Mar.", "Apr.", "Mai", "Iun.", "Iul.", "Aug.", "Sept.", "Oct.", " noiembrie", "dec.",
               "Vertical orizontal",
               "Culoare", "Alb-negru", "Linie"};

language current_lang = de;

void setLanguage(String lang)
{
   if (lang.equalsIgnoreCase("de"))
   {
      current_lang = de;
      i18n = "de";
   }
   else if (lang.equalsIgnoreCase("en"))
   {
      current_lang = en;
      i18n = "en";
   }
   else if (lang.equalsIgnoreCase("fr"))
   {
      current_lang = fr;
      i18n = "fr";
   }
   else if (lang.equalsIgnoreCase("it"))
   {
      current_lang = it;
      i18n = "it";
   }
   else if (lang.equalsIgnoreCase("tr"))
   {
      current_lang = tr;
      i18n = "tr";
   }
   else if (lang.equalsIgnoreCase("es"))
   {
      current_lang = es;
      i18n = "es";
   }
   else if (lang.equalsIgnoreCase("uk"))
   {
      current_lang = uk;
      i18n = "uk";
   }
   else if (lang.equalsIgnoreCase("pl"))
   {
      current_lang = pl;
      i18n = "pl";
   }
   else if (lang.equalsIgnoreCase("ru"))
   {
      current_lang = ru;
      i18n = "ru";
   }
   else if (lang.equalsIgnoreCase("ro"))
   {
      current_lang = ro;
      i18n = "ro";
   }
   else
   {
      current_lang = en;
      i18n = "en";
   }
}

void initLanguage(String lang)
{
   setLanguage(lang);
}

void initLanguage()
{
   initLanguage("de");
}

String getI18n(String stringId)
{
   if (stringId.equalsIgnoreCase("code"))
   {
      return current_lang.code;
   }
   else if (stringId.equalsIgnoreCase("language"))
   {
      return current_lang.language;
   }
   else if (stringId.equalsIgnoreCase("language_de"))
   {
      return current_lang.language_de;
   }
   else if (stringId.equalsIgnoreCase("language_en"))
   {
      return current_lang.language_en;
   }
   else if (stringId.equalsIgnoreCase("language_fr"))
   {
      return current_lang.language_fr;
   }
   else if (stringId.equalsIgnoreCase("language_it"))
   {
      return current_lang.language_it;
   }
   else if (stringId.equalsIgnoreCase("language_tr"))
   {
      return current_lang.language_tr;
   }
   else if (stringId.equalsIgnoreCase("language_es"))
   {
      return current_lang.language_es;
   }
   else if (stringId.equalsIgnoreCase("language_uk"))
   {
      return current_lang.language_uk;
   }
   else if (stringId.equalsIgnoreCase("language_pl"))
   {
      return current_lang.language_pl;
   }
   else if (stringId.equalsIgnoreCase("language_ru"))
   {
      return current_lang.language_ru;
   }
   else if (stringId.equalsIgnoreCase("language_ro"))
   {
      return current_lang.language_ro;
   }

   else if (stringId.equalsIgnoreCase("menubar_menu"))
   {
      return current_lang.menubar_menu;
   }
   else if (stringId.equalsIgnoreCase("menubar_select"))
   {
      return current_lang.menubar_select;
   }
   else if (stringId.equalsIgnoreCase("menubar_save"))
   {
      return current_lang.menubar_save;
   }
   else if (stringId.equalsIgnoreCase("menubar_back"))
   {
      return current_lang.menubar_back;
   }

   else if (stringId.equalsIgnoreCase("menu_menu"))
   {
      return current_lang.menu_menu;
   }
   else if (stringId.equalsIgnoreCase("menu_alarmmessages"))
   {
      return current_lang.menu_alarmmessages;
   }
   else if (stringId.equalsIgnoreCase("menu_textmessages"))
   {
      return current_lang.menu_textmessages;
   }
   else if (stringId.equalsIgnoreCase("menu_audioprofiles"))
   {
      return current_lang.menu_audioprofiles;
   }
   else if (stringId.equalsIgnoreCase("menu_settings"))
   {
      return current_lang.menu_settings;
   }
   else if (stringId.equalsIgnoreCase("menu_alarmclock"))
   {
      return current_lang.menu_alarmclock;
   }
   else if (stringId.equalsIgnoreCase("menu_service"))
   {
      return current_lang.menu_service;
   }

   else if (stringId.equalsIgnoreCase("menu_audio_silent"))
   {
      return current_lang.menu_audio_silent;
   }
   else if (stringId.equalsIgnoreCase("menu_audio_25"))
   {
      return current_lang.menu_audio_25;
   }
   else if (stringId.equalsIgnoreCase("menu_audio_50"))
   {
      return current_lang.menu_audio_50;
   }
   else if (stringId.equalsIgnoreCase("menu_audio_75"))
   {
      return current_lang.menu_audio_75;
   }
   else if (stringId.equalsIgnoreCase("menu_audio_normal"))
   {
      return current_lang.menu_audio_normal;
   }

   else if (stringId.equalsIgnoreCase("menu_brightness"))
   {
      return current_lang.menu_brightness;
   }
   else if (stringId.equalsIgnoreCase("menu_time"))
   {
      return current_lang.menu_time;
   }
   else if (stringId.equalsIgnoreCase("menu_date"))
   {
      return current_lang.menu_date;
   }
   else if (stringId.equalsIgnoreCase("menu_buttonsound"))
   {
      return current_lang.menu_buttonsound;
   }
   else if (stringId.equalsIgnoreCase("menu_language"))
   {
      return current_lang.menu_language;
   }
   else if (stringId.equalsIgnoreCase("menu_orientation"))
   {
      return current_lang.menu_orientation;
   }
   else if (stringId.equalsIgnoreCase("menu_theme"))
   {
      return current_lang.menu_theme;
   }

   else if (stringId.equalsIgnoreCase("menu_on"))
   {
      return current_lang.menu_on;
   }
   else if (stringId.equalsIgnoreCase("menu_off"))
   {
      return current_lang.menu_off;
   }

   else if (stringId.equalsIgnoreCase("menu_brightness_set"))
   {
      return current_lang.menu_brightness_set;
   }
   else if (stringId.equalsIgnoreCase("menu_time_set"))
   {
      return current_lang.menu_time_set;
   }

   else if (stringId.equalsIgnoreCase("menu_date_year"))
   {
      return current_lang.menu_date_year;
   }
   else if (stringId.equalsIgnoreCase("menu_date_month"))
   {
      return current_lang.menu_date_month;
   }
   else if (stringId.equalsIgnoreCase("menu_date_day"))
   {
      return current_lang.menu_date_day;
   }

   else if (stringId.equalsIgnoreCase("menu_date_year_set"))
   {
      return current_lang.menu_date_year_set;
   }
   else if (stringId.equalsIgnoreCase("menu_date_month_set"))
   {
      return current_lang.menu_date_month_set;
   }
   else if (stringId.equalsIgnoreCase("menu_date_day_set"))
   {
      return current_lang.menu_date_day_set;
   }

   else if (stringId.equalsIgnoreCase("menu_alarmclock_set"))
   {
      return current_lang.menu_alarmclock_set;
   }

   else if (stringId.equalsIgnoreCase("menu_service_hardware"))
   {
      return current_lang.menu_service_hardware;
   }
   else if (stringId.equalsIgnoreCase("menu_service_software"))
   {
      return current_lang.menu_service_software;
   }
   else if (stringId.equalsIgnoreCase("menu_service_subscriber"))
   {
      return current_lang.menu_service_subscriber;
   }

   else if (stringId.equalsIgnoreCase("menu_service_info"))
   {
      return current_lang.menu_service_info;
   }
   else if (stringId.equalsIgnoreCase("menu_service_info_size"))
   {
      return current_lang.menu_service_info_size;
   }
   else if (stringId.equalsIgnoreCase("menu_service_info_compile"))
   {
      return current_lang.menu_service_info_compile;
   }
   else if (stringId.equalsIgnoreCase("menu_service_info_cores"))
   {
      return current_lang.menu_service_info_cores;
   }
   else if (stringId.equalsIgnoreCase("menu_service_info_speed"))
   {
      return current_lang.menu_service_info_speed;
   }
   else if (stringId.equalsIgnoreCase("menu_service_info_issi"))
   {
      return current_lang.menu_service_info_issi;
   }

   else if (stringId.equalsIgnoreCase("alarm_address"))
   {
      return current_lang.alarm_address;
   }
   else if (stringId.equalsIgnoreCase("alarm_comment"))
   {
      return current_lang.alarm_comment;
   }

   else if (stringId.equalsIgnoreCase("week_monday"))
   {
      return current_lang.week_monday;
   }
   else if (stringId.equalsIgnoreCase("week_tuesday"))
   {
      return current_lang.week_tuesday;
   }
   else if (stringId.equalsIgnoreCase("week_wednesday"))
   {
      return current_lang.week_wednesday;
   }
   else if (stringId.equalsIgnoreCase("week_thursday"))
   {
      return current_lang.week_thursday;
   }
   else if (stringId.equalsIgnoreCase("week_friday"))
   {
      return current_lang.week_friday;
   }
   else if (stringId.equalsIgnoreCase("week_saturday"))
   {
      return current_lang.week_saturday;
   }
   else if (stringId.equalsIgnoreCase("week_sunday"))
   {
      return current_lang.week_sunday;
   }

   else if (stringId.equalsIgnoreCase("week_short_monday"))
   {
      return current_lang.week_short_monday;
   }
   else if (stringId.equalsIgnoreCase("week_short_tuesday"))
   {
      return current_lang.week_short_tuesday;
   }
   else if (stringId.equalsIgnoreCase("week_short_wednesday"))
   {
      return current_lang.week_short_wednesday;
   }
   else if (stringId.equalsIgnoreCase("week_short_thursday"))
   {
      return current_lang.week_short_thursday;
   }
   else if (stringId.equalsIgnoreCase("week_short_friday"))
   {
      return current_lang.week_short_friday;
   }
   else if (stringId.equalsIgnoreCase("week_short_saturday"))
   {
      return current_lang.week_short_saturday;
   }
   else if (stringId.equalsIgnoreCase("week_short_sunday"))
   {
      return current_lang.week_short_sunday;
   }

   else if (stringId.equalsIgnoreCase("month_january"))
   {
      return current_lang.month_january;
   }
   else if (stringId.equalsIgnoreCase("month_february"))
   {
      return current_lang.month_february;
   }
   else if (stringId.equalsIgnoreCase("month_march"))
   {
      return current_lang.month_march;
   }
   else if (stringId.equalsIgnoreCase("month_april"))
   {
      return current_lang.month_april;
   }
   else if (stringId.equalsIgnoreCase("month_may"))
   {
      return current_lang.month_may;
   }
   else if (stringId.equalsIgnoreCase("month_june"))
   {
      return current_lang.month_june;
   }
   else if (stringId.equalsIgnoreCase("month_july"))
   {
      return current_lang.month_july;
   }
   else if (stringId.equalsIgnoreCase("month_august"))
   {
      return current_lang.month_august;
   }
   else if (stringId.equalsIgnoreCase("month_september"))
   {
      return current_lang.month_september;
   }
   else if (stringId.equalsIgnoreCase("month_october"))
   {
      return current_lang.month_october;
   }
   else if (stringId.equalsIgnoreCase("month_november"))
   {
      return current_lang.month_november;
   }
   else if (stringId.equalsIgnoreCase("month_december"))
   {
      return current_lang.week_short_sunday;
   }

   else if (stringId.equalsIgnoreCase("month_short_january"))
   {
      return current_lang.month_short_january;
   }
   else if (stringId.equalsIgnoreCase("month_short_february"))
   {
      return current_lang.month_short_february;
   }
   else if (stringId.equalsIgnoreCase("month_short_march"))
   {
      return current_lang.month_short_march;
   }
   else if (stringId.equalsIgnoreCase("month_short_april"))
   {
      return current_lang.month_short_april;
   }
   else if (stringId.equalsIgnoreCase("month_short_may"))
   {
      return current_lang.month_short_may;
   }
   else if (stringId.equalsIgnoreCase("month_short_june"))
   {
      return current_lang.month_short_june;
   }
   else if (stringId.equalsIgnoreCase("month_short_july"))
   {
      return current_lang.month_short_july;
   }
   else if (stringId.equalsIgnoreCase("month_short_august"))
   {
      return current_lang.month_short_august;
   }
   else if (stringId.equalsIgnoreCase("month_short_september"))
   {
      return current_lang.month_short_september;
   }
   else if (stringId.equalsIgnoreCase("month_short_october"))
   {
      return current_lang.month_short_october;
   }
   else if (stringId.equalsIgnoreCase("month_short_november"))
   {
      return current_lang.month_short_november;
   }
   else if (stringId.equalsIgnoreCase("month_short_december"))
   {
      return current_lang.week_short_sunday;
   }

   else if (stringId.equalsIgnoreCase("vertical"))
   {
      return current_lang.vertical;
   }
   else if (stringId.equalsIgnoreCase("horizontal"))
   {
      return current_lang.horizontal;
   }

   else if (stringId.equalsIgnoreCase("color_color"))
   {
      return current_lang.color_color;
   }
   else if (stringId.equalsIgnoreCase("color_blackwhite"))
   {
      return current_lang.color_blackwhite;
   }
   else if (stringId.equalsIgnoreCase("color_outline"))
   {
      return current_lang.color_outline;
   }

   else
   {
      return "";
   }
}