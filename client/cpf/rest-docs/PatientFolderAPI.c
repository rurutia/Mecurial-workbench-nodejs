#include <enunciate-common.c>
#ifndef DEF_PatientFolderAPI_ns0_item_ident_H
#define DEF_PatientFolderAPI_ns0_item_ident_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_item_ident {


  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  xmlChar *text;
};

/**
 * Reads a ItemIdent from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ItemIdent, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_item_ident *xmlTextReaderReadNs0Item_identType(xmlTextReaderPtr reader);

/**
 * Writes a ItemIdent to XML.
 *
 * @param writer The XML writer.
 * @param _itemIdent The ItemIdent to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Item_identType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_item_ident *_itemIdent);

/**
 * Frees the elements of a ItemIdent.
 *
 * @param _itemIdent The ItemIdent to free.
 */
static void freeNs0Item_identType(struct PatientFolderAPI_ns0_item_ident *_itemIdent);

#endif /* DEF_PatientFolderAPI_ns0_item_ident_H */
#ifndef DEF_PatientFolderAPI_ns0_status_H
#define DEF_PatientFolderAPI_ns0_status_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_status {


  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  xmlChar *text;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_item_ident *orderControl;
};

/**
 * Reads a Status from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Status, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_status *xmlTextReaderReadNs0StatusType(xmlTextReaderPtr reader);

/**
 * Writes a Status to XML.
 *
 * @param writer The XML writer.
 * @param _status The Status to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StatusType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_status *_status);

/**
 * Frees the elements of a Status.
 *
 * @param _status The Status to free.
 */
static void freeNs0StatusType(struct PatientFolderAPI_ns0_status *_status);

#endif /* DEF_PatientFolderAPI_ns0_status_H */
#ifndef DEF_PatientFolderAPI_ns0_ActivityFeeds_H
#define DEF_PatientFolderAPI_ns0_ActivityFeeds_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_ActivityFeeds {


  /**
   * (no documentation provided)
   */
  xmlChar *src;

  /**
   * (no documentation provided)
   */
  xmlChar *urno;

  /**
   * (no documentation provided)
   */
  xmlChar *patientNs;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_result *electronicAlerts;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_result *scannedAlerts;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_result *documents;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_result *results;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_result *episodes;
};

/**
 * Reads a ActivityFeedDTO element from XML. The element to be read is "Feeds", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ActivityFeedDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_ActivityFeeds *xml_read_PatientFolderAPI_ns0_ActivityFeeds(xmlTextReaderPtr reader);

/**
 * Writes a ActivityFeedDTO to XML under element name "Feeds".
 *
 * @param writer The XML writer.
 * @param _activityFeedDTO The ActivityFeedDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_ActivityFeeds(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO);

/**
 * Frees a ActivityFeedDTO.
 *
 * @param _activityFeedDTO The ActivityFeedDTO to free.
 */
void free_PatientFolderAPI_ns0_ActivityFeeds(struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO);

/**
 * Reads a ActivityFeedDTO element from XML. The element to be read is "Feeds", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ActivityFeedDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_ActivityFeeds *xmlTextReaderReadNs0FeedsElement(xmlTextReaderPtr reader);

/**
 * Writes a ActivityFeedDTO to XML under element name "Feeds".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _activityFeedDTO The ActivityFeedDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FeedsElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO);

/**
 * Writes a ActivityFeedDTO to XML under element name "Feeds".
 *
 * @param writer The XML writer.
 * @param _activityFeedDTO The ActivityFeedDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FeedsElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO, int writeNamespaces);

/**
 * Frees the children of a ActivityFeedDTO.
 *
 * @param _activityFeedDTO The ActivityFeedDTO whose children are to be free.
 */
static void freeNs0FeedsElement(struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO);

/**
 * Reads a ActivityFeedDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ActivityFeedDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_ActivityFeeds *xmlTextReaderReadNs0ActivityFeedsType(xmlTextReaderPtr reader);

/**
 * Writes a ActivityFeedDTO to XML.
 *
 * @param writer The XML writer.
 * @param _activityFeedDTO The ActivityFeedDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ActivityFeedsType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO);

/**
 * Frees the elements of a ActivityFeedDTO.
 *
 * @param _activityFeedDTO The ActivityFeedDTO to free.
 */
static void freeNs0ActivityFeedsType(struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO);

#endif /* DEF_PatientFolderAPI_ns0_ActivityFeeds_H */
#ifndef DEF_PatientFolderAPI_ns0_Alerts_H
#define DEF_PatientFolderAPI_ns0_Alerts_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_Alerts {


  /**
   * (no documentation provided)
   */
  xmlChar *src;

  /**
   * (no documentation provided)
   */
  xmlChar *patientIdNs;

  /**
   * (no documentation provided)
   */
  xmlChar *patientSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *up;

  /**
   * (no documentation provided)
   */
  xmlChar *urno;

  /**
   * (no documentation provided)
   */
  xmlChar *patientNs;

  /**
   * (no documentation provided)
   */
  xmlChar *documentId;

  /**
   * (no documentation provided)
   */
  xmlChar *documentNS;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_AlertItem *electronicAlerts;

  /**
   * Size of the electronicAlerts array.
   */
  int _sizeof_electronicAlerts;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_Document *scannedAlerts;

  /**
   * Size of the scannedAlerts array.
   */
  int _sizeof_scannedAlerts;
};

/**
 * Reads a AlertDTO element from XML. The element to be read is "Alerts", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AlertDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Alerts *xml_read_PatientFolderAPI_ns0_Alerts(xmlTextReaderPtr reader);

/**
 * Writes a AlertDTO to XML under element name "Alerts".
 *
 * @param writer The XML writer.
 * @param _alertDTO The AlertDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_Alerts(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Alerts *_alertDTO);

/**
 * Frees a AlertDTO.
 *
 * @param _alertDTO The AlertDTO to free.
 */
void free_PatientFolderAPI_ns0_Alerts(struct PatientFolderAPI_ns0_Alerts *_alertDTO);

/**
 * Reads a AlertDTO element from XML. The element to be read is "Alerts", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The AlertDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Alerts *xmlTextReaderReadNs0AlertsElement(xmlTextReaderPtr reader);

/**
 * Writes a AlertDTO to XML under element name "Alerts".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _alertDTO The AlertDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AlertsElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Alerts *_alertDTO);

/**
 * Writes a AlertDTO to XML under element name "Alerts".
 *
 * @param writer The XML writer.
 * @param _alertDTO The AlertDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AlertsElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Alerts *_alertDTO, int writeNamespaces);

/**
 * Frees the children of a AlertDTO.
 *
 * @param _alertDTO The AlertDTO whose children are to be free.
 */
static void freeNs0AlertsElement(struct PatientFolderAPI_ns0_Alerts *_alertDTO);

/**
 * Reads a AlertDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The AlertDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_Alerts *xmlTextReaderReadNs0AlertsType(xmlTextReaderPtr reader);

/**
 * Writes a AlertDTO to XML.
 *
 * @param writer The XML writer.
 * @param _alertDTO The AlertDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AlertsType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Alerts *_alertDTO);

/**
 * Frees the elements of a AlertDTO.
 *
 * @param _alertDTO The AlertDTO to free.
 */
static void freeNs0AlertsType(struct PatientFolderAPI_ns0_Alerts *_alertDTO);

#endif /* DEF_PatientFolderAPI_ns0_Alerts_H */
#ifndef DEF_PatientFolderAPI_ns0_AlertItem_H
#define DEF_PatientFolderAPI_ns0_AlertItem_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_AlertItem {


  /**
   * (no documentation provided)
   */
  xmlChar *patientIdNs;

  /**
   * (no documentation provided)
   */
  xmlChar *patientSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *up;

  /**
   * (no documentation provided)
   */
  xmlChar *alertNs;

  /**
   * (no documentation provided)
   */
  xmlChar *code;

  /**
   * (no documentation provided)
   */
  xmlChar *description;

  /**
   * (no documentation provided)
   */
  xmlChar *type;

  /**
   * (no documentation provided)
   */
  xmlChar *comment;

  /**
   * (no documentation provided)
   */
  xmlChar *identificationDate;
};

/**
 * Reads a AlertItemDTO element from XML. The element to be read is "AlertItem", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AlertItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_AlertItem *xml_read_PatientFolderAPI_ns0_AlertItem(xmlTextReaderPtr reader);

/**
 * Writes a AlertItemDTO to XML under element name "AlertItem".
 *
 * @param writer The XML writer.
 * @param _alertItemDTO The AlertItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_AlertItem(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO);

/**
 * Frees a AlertItemDTO.
 *
 * @param _alertItemDTO The AlertItemDTO to free.
 */
void free_PatientFolderAPI_ns0_AlertItem(struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO);

/**
 * Reads a AlertItemDTO element from XML. The element to be read is "AlertItem", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The AlertItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_AlertItem *xmlTextReaderReadNs0AlertItemElement(xmlTextReaderPtr reader);

/**
 * Writes a AlertItemDTO to XML under element name "AlertItem".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _alertItemDTO The AlertItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AlertItemElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO);

/**
 * Writes a AlertItemDTO to XML under element name "AlertItem".
 *
 * @param writer The XML writer.
 * @param _alertItemDTO The AlertItemDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AlertItemElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO, int writeNamespaces);

/**
 * Frees the children of a AlertItemDTO.
 *
 * @param _alertItemDTO The AlertItemDTO whose children are to be free.
 */
static void freeNs0AlertItemElement(struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO);

/**
 * Reads a AlertItemDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The AlertItemDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_AlertItem *xmlTextReaderReadNs0AlertItemType(xmlTextReaderPtr reader);

/**
 * Writes a AlertItemDTO to XML.
 *
 * @param writer The XML writer.
 * @param _alertItemDTO The AlertItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AlertItemType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO);

/**
 * Frees the elements of a AlertItemDTO.
 *
 * @param _alertItemDTO The AlertItemDTO to free.
 */
static void freeNs0AlertItemType(struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO);

#endif /* DEF_PatientFolderAPI_ns0_AlertItem_H */
#ifndef DEF_PatientFolderAPI_ns0_atomic_H
#define DEF_PatientFolderAPI_ns0_atomic_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_atomic {


  /**
   * (no documentation provided)
   */
  xmlChar *valueTypeID;

  /**
   * (no documentation provided)
   */
  xmlChar *valueTypeText;

  /**
   * (no documentation provided)
   */
  xmlChar *value;

  /**
   * (no documentation provided)
   */
  xmlChar *units;

  /**
   * (no documentation provided)
   */
  xmlChar *referenceRange;

  /**
   * (no documentation provided)
   */
  xmlChar *abnormalFLagText;

  /**
   * (no documentation provided)
   */
  xmlChar *natureOfAbnormalTest;

  /**
   * (no documentation provided)
   */
  xmlChar *statusText;
};

/**
 * Reads a AtomicDTO element from XML. The element to be read is "atomic", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AtomicDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_atomic *xml_read_PatientFolderAPI_ns0_atomic(xmlTextReaderPtr reader);

/**
 * Writes a AtomicDTO to XML under element name "atomic".
 *
 * @param writer The XML writer.
 * @param _atomicDTO The AtomicDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_atomic(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_atomic *_atomicDTO);

/**
 * Frees a AtomicDTO.
 *
 * @param _atomicDTO The AtomicDTO to free.
 */
void free_PatientFolderAPI_ns0_atomic(struct PatientFolderAPI_ns0_atomic *_atomicDTO);

/**
 * Reads a AtomicDTO element from XML. The element to be read is "atomic", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The AtomicDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_atomic *xmlTextReaderReadNs0AtomicElement(xmlTextReaderPtr reader);

/**
 * Writes a AtomicDTO to XML under element name "atomic".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _atomicDTO The AtomicDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AtomicElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_atomic *_atomicDTO);

/**
 * Writes a AtomicDTO to XML under element name "atomic".
 *
 * @param writer The XML writer.
 * @param _atomicDTO The AtomicDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AtomicElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_atomic *_atomicDTO, int writeNamespaces);

/**
 * Frees the children of a AtomicDTO.
 *
 * @param _atomicDTO The AtomicDTO whose children are to be free.
 */
static void freeNs0AtomicElement(struct PatientFolderAPI_ns0_atomic *_atomicDTO);

/**
 * Reads a AtomicDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The AtomicDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_atomic *xmlTextReaderReadNs0AtomicType(xmlTextReaderPtr reader);

/**
 * Writes a AtomicDTO to XML.
 *
 * @param writer The XML writer.
 * @param _atomicDTO The AtomicDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AtomicType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_atomic *_atomicDTO);

/**
 * Frees the elements of a AtomicDTO.
 *
 * @param _atomicDTO The AtomicDTO to free.
 */
static void freeNs0AtomicType(struct PatientFolderAPI_ns0_atomic *_atomicDTO);

#endif /* DEF_PatientFolderAPI_ns0_atomic_H */
#ifndef DEF_PatientFolderAPI_ns0_ClinicListItem_H
#define DEF_PatientFolderAPI_ns0_ClinicListItem_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_ClinicListItem {


  /**
   * (no documentation provided)
   */
  xmlChar *patientIdNs;

  /**
   * (no documentation provided)
   */
  xmlChar *patientSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *up;

  /**
   * (no documentation provided)
   */
  xmlChar *domain;

  /**
   * (no documentation provided)
   */
  xmlChar *campus;

  /**
   * (no documentation provided)
   */
  xmlChar *code;

  /**
   * (no documentation provided)
   */
  xmlChar *listId;

  /**
   * (no documentation provided)
   */
  xmlChar *description;
};

/**
 * Reads a ClinicListItemDTO element from XML. The element to be read is "ClinicListItem", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ClinicListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_ClinicListItem *xml_read_PatientFolderAPI_ns0_ClinicListItem(xmlTextReaderPtr reader);

/**
 * Writes a ClinicListItemDTO to XML under element name "ClinicListItem".
 *
 * @param writer The XML writer.
 * @param _clinicListItemDTO The ClinicListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_ClinicListItem(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO);

/**
 * Frees a ClinicListItemDTO.
 *
 * @param _clinicListItemDTO The ClinicListItemDTO to free.
 */
void free_PatientFolderAPI_ns0_ClinicListItem(struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO);

/**
 * Reads a ClinicListItemDTO element from XML. The element to be read is "ClinicListItem", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ClinicListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_ClinicListItem *xmlTextReaderReadNs0ClinicListItemElement(xmlTextReaderPtr reader);

/**
 * Writes a ClinicListItemDTO to XML under element name "ClinicListItem".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _clinicListItemDTO The ClinicListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ClinicListItemElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO);

/**
 * Writes a ClinicListItemDTO to XML under element name "ClinicListItem".
 *
 * @param writer The XML writer.
 * @param _clinicListItemDTO The ClinicListItemDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ClinicListItemElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO, int writeNamespaces);

/**
 * Frees the children of a ClinicListItemDTO.
 *
 * @param _clinicListItemDTO The ClinicListItemDTO whose children are to be free.
 */
static void freeNs0ClinicListItemElement(struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO);

/**
 * Reads a ClinicListItemDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ClinicListItemDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_ClinicListItem *xmlTextReaderReadNs0ClinicListItemType(xmlTextReaderPtr reader);

/**
 * Writes a ClinicListItemDTO to XML.
 *
 * @param writer The XML writer.
 * @param _clinicListItemDTO The ClinicListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ClinicListItemType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO);

/**
 * Frees the elements of a ClinicListItemDTO.
 *
 * @param _clinicListItemDTO The ClinicListItemDTO to free.
 */
static void freeNs0ClinicListItemType(struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO);

#endif /* DEF_PatientFolderAPI_ns0_ClinicListItem_H */
#ifndef DEF_PatientFolderAPI_ns0_copiesto_H
#define DEF_PatientFolderAPI_ns0_copiesto_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_copiesto {


  /**
   * (no documentation provided)
   */
  xmlChar *doctor;

  /**
   * Size of the doctor array.
   */
  int _sizeof_doctor;
};

/**
 * Reads a CopiesToDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The CopiesToDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_copiesto *xmlTextReaderReadNs0CopiestoType(xmlTextReaderPtr reader);

/**
 * Writes a CopiesToDTO to XML.
 *
 * @param writer The XML writer.
 * @param _copiesToDTO The CopiesToDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0CopiestoType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_copiesto *_copiesToDTO);

/**
 * Frees the elements of a CopiesToDTO.
 *
 * @param _copiesToDTO The CopiesToDTO to free.
 */
static void freeNs0CopiestoType(struct PatientFolderAPI_ns0_copiesto *_copiesToDTO);

#endif /* DEF_PatientFolderAPI_ns0_copiesto_H */
#ifndef DEF_PatientFolderAPI_ns0_docTypeSpecificDTO_H
#define DEF_PatientFolderAPI_ns0_docTypeSpecificDTO_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_docTypeSpecificDTO {

};

/**
 * Reads a DocTypeSpecificDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The DocTypeSpecificDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_docTypeSpecificDTO *xmlTextReaderReadNs0DocTypeSpecificDTOType(xmlTextReaderPtr reader);

/**
 * Writes a DocTypeSpecificDTO to XML.
 *
 * @param writer The XML writer.
 * @param _docTypeSpecificDTO The DocTypeSpecificDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0DocTypeSpecificDTOType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_docTypeSpecificDTO *_docTypeSpecificDTO);

/**
 * Frees the elements of a DocTypeSpecificDTO.
 *
 * @param _docTypeSpecificDTO The DocTypeSpecificDTO to free.
 */
static void freeNs0DocTypeSpecificDTOType(struct PatientFolderAPI_ns0_docTypeSpecificDTO *_docTypeSpecificDTO);

#endif /* DEF_PatientFolderAPI_ns0_docTypeSpecificDTO_H */
#ifndef DEF_PatientFolderAPI_ns0_Document_H
#define DEF_PatientFolderAPI_ns0_Document_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_Document {


  /**
   * (no documentation provided)
   */
  xmlChar *src;

  /**
   * (no documentation provided)
   */
  xmlChar *patientIdNs;

  /**
   * (no documentation provided)
   */
  xmlChar *patientSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *up;

  /**
   * (no documentation provided)
   */
  xmlChar *masterID;

  /**
   * (no documentation provided)
   */
  xmlChar *documentCode;

  /**
   * (no documentation provided)
   */
  xmlChar *documentDesc;

  /**
   * (no documentation provided)
   */
  xmlChar *section;

  /**
   * (no documentation provided)
   */
  xmlChar *episode;

  /**
   * (no documentation provided)
   */
  xmlChar *mimeType;

  /**
   * (no documentation provided)
   */
  xmlChar *documentDate;

  /**
   * (no documentation provided)
   */
  xmlChar *pageNumber;

  /**
   * (no documentation provided)
   */
  xmlChar *state;

  /**
   * (no documentation provided)
   */
  xmlChar *urno;

  /**
   * (no documentation provided)
   */
  xmlChar *patientNs;

  /**
   * (no documentation provided)
   */
  xmlChar *documentSource;

  /**
   * (no documentation provided)
   */
  xmlChar *documentTime;

  /**
   * (no documentation provided)
   */
  xmlChar *scannedDate;

  /**
   * (no documentation provided)
   */
  xmlChar *documentType;

  /**
   * (no documentation provided)
   */
  xmlChar *url;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_docTypeSpecificDTO *docTypeSpecific;
};

/**
 * Reads a DocumentDTO element from XML. The element to be read is "Document", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The DocumentDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Document *xml_read_PatientFolderAPI_ns0_Document(xmlTextReaderPtr reader);

/**
 * Writes a DocumentDTO to XML under element name "Document".
 *
 * @param writer The XML writer.
 * @param _documentDTO The DocumentDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_Document(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Document *_documentDTO);

/**
 * Frees a DocumentDTO.
 *
 * @param _documentDTO The DocumentDTO to free.
 */
void free_PatientFolderAPI_ns0_Document(struct PatientFolderAPI_ns0_Document *_documentDTO);

/**
 * Reads a DocumentDTO element from XML. The element to be read is "Document", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The DocumentDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Document *xmlTextReaderReadNs0DocumentElement(xmlTextReaderPtr reader);

/**
 * Writes a DocumentDTO to XML under element name "Document".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _documentDTO The DocumentDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0DocumentElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Document *_documentDTO);

/**
 * Writes a DocumentDTO to XML under element name "Document".
 *
 * @param writer The XML writer.
 * @param _documentDTO The DocumentDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0DocumentElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Document *_documentDTO, int writeNamespaces);

/**
 * Frees the children of a DocumentDTO.
 *
 * @param _documentDTO The DocumentDTO whose children are to be free.
 */
static void freeNs0DocumentElement(struct PatientFolderAPI_ns0_Document *_documentDTO);

/**
 * Reads a DocumentDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The DocumentDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_Document *xmlTextReaderReadNs0DocumentType(xmlTextReaderPtr reader);

/**
 * Writes a DocumentDTO to XML.
 *
 * @param writer The XML writer.
 * @param _documentDTO The DocumentDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0DocumentType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Document *_documentDTO);

/**
 * Frees the elements of a DocumentDTO.
 *
 * @param _documentDTO The DocumentDTO to free.
 */
static void freeNs0DocumentType(struct PatientFolderAPI_ns0_Document *_documentDTO);

#endif /* DEF_PatientFolderAPI_ns0_Document_H */
#ifndef DEF_PatientFolderAPI_ns0_entry_H
#define DEF_PatientFolderAPI_ns0_entry_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_entry {


  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *label;
};

/**
 * Reads a EntryDTO element from XML. The element to be read is "entry", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The EntryDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_entry *xml_read_PatientFolderAPI_ns0_entry(xmlTextReaderPtr reader);

/**
 * Writes a EntryDTO to XML under element name "entry".
 *
 * @param writer The XML writer.
 * @param _entryDTO The EntryDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_entry(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_entry *_entryDTO);

/**
 * Frees a EntryDTO.
 *
 * @param _entryDTO The EntryDTO to free.
 */
void free_PatientFolderAPI_ns0_entry(struct PatientFolderAPI_ns0_entry *_entryDTO);

/**
 * Reads a EntryDTO element from XML. The element to be read is "entry", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The EntryDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_entry *xmlTextReaderReadNs0EntryElement(xmlTextReaderPtr reader);

/**
 * Writes a EntryDTO to XML under element name "entry".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _entryDTO The EntryDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EntryElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_entry *_entryDTO);

/**
 * Writes a EntryDTO to XML under element name "entry".
 *
 * @param writer The XML writer.
 * @param _entryDTO The EntryDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EntryElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_entry *_entryDTO, int writeNamespaces);

/**
 * Frees the children of a EntryDTO.
 *
 * @param _entryDTO The EntryDTO whose children are to be free.
 */
static void freeNs0EntryElement(struct PatientFolderAPI_ns0_entry *_entryDTO);

/**
 * Reads a EntryDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The EntryDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_entry *xmlTextReaderReadNs0EntryType(xmlTextReaderPtr reader);

/**
 * Writes a EntryDTO to XML.
 *
 * @param writer The XML writer.
 * @param _entryDTO The EntryDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EntryType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_entry *_entryDTO);

/**
 * Frees the elements of a EntryDTO.
 *
 * @param _entryDTO The EntryDTO to free.
 */
static void freeNs0EntryType(struct PatientFolderAPI_ns0_entry *_entryDTO);

#endif /* DEF_PatientFolderAPI_ns0_entry_H */
#ifndef DEF_PatientFolderAPI_ns0_Episode_H
#define DEF_PatientFolderAPI_ns0_Episode_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_Episode {


  /**
   * (no documentation provided)
   */
  xmlChar *src;

  /**
   * (no documentation provided)
   */
  xmlChar *patientIdNs;

  /**
   * (no documentation provided)
   */
  xmlChar *patientSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *up;

  /**
   * (no documentation provided)
   */
  xmlChar *intId;

  /**
   * (no documentation provided)
   */
  xmlChar *extId;

  /**
   * (no documentation provided)
   */
  xmlChar *extNS;

  /**
   * (no documentation provided)
   */
  xmlChar *patientURNO;

  /**
   * (no documentation provided)
   */
  xmlChar *ward_code;

  /**
   * (no documentation provided)
   */
  xmlChar *service_type;

  /**
   * (no documentation provided)
   */
  xmlChar *care_type;

  /**
   * (no documentation provided)
   */
  xmlChar *episodeId;

  /**
   * (no documentation provided)
   */
  xmlChar *episodeNs;

  /**
   * (no documentation provided)
   */
  xmlChar *type;

  /**
   * (no documentation provided)
   */
  xmlChar *state;

  /**
   * (no documentation provided)
   */
  xmlChar *start;

  /**
   * (no documentation provided)
   */
  xmlChar *end;

  /**
   * (no documentation provided)
   */
  xmlChar *campus;

  /**
   * (no documentation provided)
   */
  xmlChar *wardCode;

  /**
   * (no documentation provided)
   */
  xmlChar *wardDescription;

  /**
   * (no documentation provided)
   */
  xmlChar *unitCode;

  /**
   * (no documentation provided)
   */
  xmlChar *unitDescription;

  /**
   * (no documentation provided)
   */
  xmlChar *bedCode;

  /**
   * (no documentation provided)
   */
  xmlChar *bedDescription;

  /**
   * (no documentation provided)
   */
  xmlChar *serviceType;

  /**
   * (no documentation provided)
   */
  xmlChar *careType;

  /**
   * (no documentation provided)
   */
  xmlChar *doctorId;

  /**
   * (no documentation provided)
   */
  xmlChar *doctorFamily;

  /**
   * (no documentation provided)
   */
  xmlChar *doctorGiven;

  /**
   * (no documentation provided)
   */
  xmlChar *drg;

  /**
   * (no documentation provided)
   */
  xmlChar *los;

  /**
   * (no documentation provided)
   */
  xmlChar *noOfDocuments;

  /**
   * (no documentation provided)
   */
  xmlChar *startDate;

  /**
   * (no documentation provided)
   */
  xmlChar *endDate;

  /**
   * (no documentation provided)
   */
  xmlChar *financialClass;
};

/**
 * Reads a EpisodeDTO element from XML. The element to be read is "Episode", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The EpisodeDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Episode *xml_read_PatientFolderAPI_ns0_Episode(xmlTextReaderPtr reader);

/**
 * Writes a EpisodeDTO to XML under element name "Episode".
 *
 * @param writer The XML writer.
 * @param _episodeDTO The EpisodeDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_Episode(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Episode *_episodeDTO);

/**
 * Frees a EpisodeDTO.
 *
 * @param _episodeDTO The EpisodeDTO to free.
 */
void free_PatientFolderAPI_ns0_Episode(struct PatientFolderAPI_ns0_Episode *_episodeDTO);

/**
 * Reads a EpisodeDTO element from XML. The element to be read is "Episode", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The EpisodeDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Episode *xmlTextReaderReadNs0EpisodeElement(xmlTextReaderPtr reader);

/**
 * Writes a EpisodeDTO to XML under element name "Episode".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _episodeDTO The EpisodeDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EpisodeElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Episode *_episodeDTO);

/**
 * Writes a EpisodeDTO to XML under element name "Episode".
 *
 * @param writer The XML writer.
 * @param _episodeDTO The EpisodeDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EpisodeElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Episode *_episodeDTO, int writeNamespaces);

/**
 * Frees the children of a EpisodeDTO.
 *
 * @param _episodeDTO The EpisodeDTO whose children are to be free.
 */
static void freeNs0EpisodeElement(struct PatientFolderAPI_ns0_Episode *_episodeDTO);

/**
 * Reads a EpisodeDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The EpisodeDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_Episode *xmlTextReaderReadNs0EpisodeType(xmlTextReaderPtr reader);

/**
 * Writes a EpisodeDTO to XML.
 *
 * @param writer The XML writer.
 * @param _episodeDTO The EpisodeDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EpisodeType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Episode *_episodeDTO);

/**
 * Frees the elements of a EpisodeDTO.
 *
 * @param _episodeDTO The EpisodeDTO to free.
 */
static void freeNs0EpisodeType(struct PatientFolderAPI_ns0_Episode *_episodeDTO);

#endif /* DEF_PatientFolderAPI_ns0_Episode_H */
#ifndef DEF_PatientFolderAPI_ns0_extId_H
#define DEF_PatientFolderAPI_ns0_extId_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_extId {


  /**
   * (no documentation provided)
   */
  xmlChar *extIdVal;

  /**
   * (no documentation provided)
   */
  xmlChar *extNsVal;
};

/**
 * Reads a ExtIdDTO element from XML. The element to be read is "extId", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ExtIdDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_extId *xml_read_PatientFolderAPI_ns0_extId(xmlTextReaderPtr reader);

/**
 * Writes a ExtIdDTO to XML under element name "extId".
 *
 * @param writer The XML writer.
 * @param _extIdDTO The ExtIdDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_extId(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_extId *_extIdDTO);

/**
 * Frees a ExtIdDTO.
 *
 * @param _extIdDTO The ExtIdDTO to free.
 */
void free_PatientFolderAPI_ns0_extId(struct PatientFolderAPI_ns0_extId *_extIdDTO);

/**
 * Reads a ExtIdDTO element from XML. The element to be read is "extId", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ExtIdDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_extId *xmlTextReaderReadNs0ExtIdElement(xmlTextReaderPtr reader);

/**
 * Writes a ExtIdDTO to XML under element name "extId".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _extIdDTO The ExtIdDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ExtIdElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_extId *_extIdDTO);

/**
 * Writes a ExtIdDTO to XML under element name "extId".
 *
 * @param writer The XML writer.
 * @param _extIdDTO The ExtIdDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ExtIdElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_extId *_extIdDTO, int writeNamespaces);

/**
 * Frees the children of a ExtIdDTO.
 *
 * @param _extIdDTO The ExtIdDTO whose children are to be free.
 */
static void freeNs0ExtIdElement(struct PatientFolderAPI_ns0_extId *_extIdDTO);

/**
 * Reads a ExtIdDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ExtIdDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_extId *xmlTextReaderReadNs0ExtIdType(xmlTextReaderPtr reader);

/**
 * Writes a ExtIdDTO to XML.
 *
 * @param writer The XML writer.
 * @param _extIdDTO The ExtIdDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ExtIdType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_extId *_extIdDTO);

/**
 * Frees the elements of a ExtIdDTO.
 *
 * @param _extIdDTO The ExtIdDTO to free.
 */
static void freeNs0ExtIdType(struct PatientFolderAPI_ns0_extId *_extIdDTO);

#endif /* DEF_PatientFolderAPI_ns0_extId_H */
#ifndef DEF_PatientFolderAPI_ns0_image_H
#define DEF_PatientFolderAPI_ns0_image_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_image {


  /**
   * (no documentation provided)
   */
  unsigned char *data;

  /**
   * Size of the data data.
   */
  int _sizeof_data;

  /**
   * (no documentation provided)
   */
  xmlChar *ext;
};

/**
 * Reads a ImageDTO element from XML. The element to be read is "image", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ImageDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_image *xml_read_PatientFolderAPI_ns0_image(xmlTextReaderPtr reader);

/**
 * Writes a ImageDTO to XML under element name "image".
 *
 * @param writer The XML writer.
 * @param _imageDTO The ImageDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_image(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_image *_imageDTO);

/**
 * Frees a ImageDTO.
 *
 * @param _imageDTO The ImageDTO to free.
 */
void free_PatientFolderAPI_ns0_image(struct PatientFolderAPI_ns0_image *_imageDTO);

/**
 * Reads a ImageDTO element from XML. The element to be read is "image", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ImageDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_image *xmlTextReaderReadNs0ImageElement(xmlTextReaderPtr reader);

/**
 * Writes a ImageDTO to XML under element name "image".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _imageDTO The ImageDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ImageElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_image *_imageDTO);

/**
 * Writes a ImageDTO to XML under element name "image".
 *
 * @param writer The XML writer.
 * @param _imageDTO The ImageDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ImageElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_image *_imageDTO, int writeNamespaces);

/**
 * Frees the children of a ImageDTO.
 *
 * @param _imageDTO The ImageDTO whose children are to be free.
 */
static void freeNs0ImageElement(struct PatientFolderAPI_ns0_image *_imageDTO);

/**
 * Reads a ImageDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ImageDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_image *xmlTextReaderReadNs0ImageType(xmlTextReaderPtr reader);

/**
 * Writes a ImageDTO to XML.
 *
 * @param writer The XML writer.
 * @param _imageDTO The ImageDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ImageType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_image *_imageDTO);

/**
 * Frees the elements of a ImageDTO.
 *
 * @param _imageDTO The ImageDTO to free.
 */
static void freeNs0ImageType(struct PatientFolderAPI_ns0_image *_imageDTO);

#endif /* DEF_PatientFolderAPI_ns0_image_H */
#ifndef DEF_PatientFolderAPI_ns0_result_H
#define DEF_PatientFolderAPI_ns0_result_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_result {


  /**
   * (no documentation provided)
   */
  struct xmlBasicNode *results;

  /**
   * Size of the results array.
   */
  int _sizeof_results;

  /**
   * (no documentation provided)
   */
  int total;
};

/**
 * Reads a ListDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ListDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_result *xml_read_PatientFolderAPI_ns0_result(xmlTextReaderPtr reader);

/**
 * Writes a ListDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _listDTO The ListDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_result(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_result *_listDTO);

/**
 * Frees a ListDTO.
 *
 * @param _listDTO The ListDTO to free.
 */
void free_PatientFolderAPI_ns0_result(struct PatientFolderAPI_ns0_result *_listDTO);

/**
 * Reads a ListDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ListDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_result *xmlTextReaderReadNs0ResultsElement(xmlTextReaderPtr reader);

/**
 * Writes a ListDTO to XML under element name "results".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _listDTO The ListDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResultsElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_result *_listDTO);

/**
 * Writes a ListDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _listDTO The ListDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResultsElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_result *_listDTO, int writeNamespaces);

/**
 * Frees the children of a ListDTO.
 *
 * @param _listDTO The ListDTO whose children are to be free.
 */
static void freeNs0ResultsElement(struct PatientFolderAPI_ns0_result *_listDTO);

/**
 * Reads a ListDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ListDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_result *xmlTextReaderReadNs0ResultType(xmlTextReaderPtr reader);

/**
 * Writes a ListDTO to XML.
 *
 * @param writer The XML writer.
 * @param _listDTO The ListDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResultType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_result *_listDTO);

/**
 * Frees the elements of a ListDTO.
 *
 * @param _listDTO The ListDTO to free.
 */
static void freeNs0ResultType(struct PatientFolderAPI_ns0_result *_listDTO);

#endif /* DEF_PatientFolderAPI_ns0_result_H */
#ifndef DEF_PatientFolderAPI_ns0_order_H
#define DEF_PatientFolderAPI_ns0_order_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_order {


  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_status *status;

  /**
   * (no documentation provided)
   */
  xmlChar *enteringUser;

  /**
   * (no documentation provided)
   */
  xmlChar *actionedUser;

  /**
   * (no documentation provided)
   */
  xmlChar *organisation;

  /**
   * (no documentation provided)
   */
  xmlChar *doctor;
};

/**
 * Reads a OrderDTO element from XML. The element to be read is "order", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The OrderDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_order *xml_read_PatientFolderAPI_ns0_order(xmlTextReaderPtr reader);

/**
 * Writes a OrderDTO to XML under element name "order".
 *
 * @param writer The XML writer.
 * @param _orderDTO The OrderDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_order(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_order *_orderDTO);

/**
 * Frees a OrderDTO.
 *
 * @param _orderDTO The OrderDTO to free.
 */
void free_PatientFolderAPI_ns0_order(struct PatientFolderAPI_ns0_order *_orderDTO);

/**
 * Reads a OrderDTO element from XML. The element to be read is "order", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The OrderDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_order *xmlTextReaderReadNs0OrderElement(xmlTextReaderPtr reader);

/**
 * Writes a OrderDTO to XML under element name "order".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _orderDTO The OrderDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrderElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_order *_orderDTO);

/**
 * Writes a OrderDTO to XML under element name "order".
 *
 * @param writer The XML writer.
 * @param _orderDTO The OrderDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrderElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_order *_orderDTO, int writeNamespaces);

/**
 * Frees the children of a OrderDTO.
 *
 * @param _orderDTO The OrderDTO whose children are to be free.
 */
static void freeNs0OrderElement(struct PatientFolderAPI_ns0_order *_orderDTO);

/**
 * Reads a OrderDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The OrderDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_order *xmlTextReaderReadNs0OrderType(xmlTextReaderPtr reader);

/**
 * Writes a OrderDTO to XML.
 *
 * @param writer The XML writer.
 * @param _orderDTO The OrderDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OrderType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_order *_orderDTO);

/**
 * Frees the elements of a OrderDTO.
 *
 * @param _orderDTO The OrderDTO to free.
 */
static void freeNs0OrderType(struct PatientFolderAPI_ns0_order *_orderDTO);

#endif /* DEF_PatientFolderAPI_ns0_order_H */
#ifndef DEF_PatientFolderAPI_ns0_paginatedListDTO_H
#define DEF_PatientFolderAPI_ns0_paginatedListDTO_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_paginatedListDTO {


  /**
   * (no documentation provided)
   */
  struct xmlBasicNode *results;

  /**
   * Size of the results array.
   */
  int _sizeof_results;

  /**
   * (no documentation provided)
   */
  int total;

  /**
   * (no documentation provided)
   */
  int start;

  /**
   * (no documentation provided)
   */
  int size;

  /**
   * (no documentation provided)
   */
  xmlChar *sort;

  /**
   * (no documentation provided)
   */
  xmlChar *order;
};

/**
 * Reads a PaginatedListDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PaginatedListDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_paginatedListDTO *xml_read_PatientFolderAPI_ns0_paginatedListDTO(xmlTextReaderPtr reader);

/**
 * Writes a PaginatedListDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _paginatedListDTO The PaginatedListDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_paginatedListDTO(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO);

/**
 * Frees a PaginatedListDTO.
 *
 * @param _paginatedListDTO The PaginatedListDTO to free.
 */
void free_PatientFolderAPI_ns0_paginatedListDTO(struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO);

/**
 * Reads a PaginatedListDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The PaginatedListDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_paginatedListDTO *xmlTextReaderReadNs0ResultsElement(xmlTextReaderPtr reader);

/**
 * Writes a PaginatedListDTO to XML under element name "results".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _paginatedListDTO The PaginatedListDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResultsElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO);

/**
 * Writes a PaginatedListDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _paginatedListDTO The PaginatedListDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResultsElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO, int writeNamespaces);

/**
 * Frees the children of a PaginatedListDTO.
 *
 * @param _paginatedListDTO The PaginatedListDTO whose children are to be free.
 */
static void freeNs0ResultsElement(struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO);

/**
 * Reads a PaginatedListDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PaginatedListDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_paginatedListDTO *xmlTextReaderReadNs0PaginatedListDTOType(xmlTextReaderPtr reader);

/**
 * Writes a PaginatedListDTO to XML.
 *
 * @param writer The XML writer.
 * @param _paginatedListDTO The PaginatedListDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PaginatedListDTOType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO);

/**
 * Frees the elements of a PaginatedListDTO.
 *
 * @param _paginatedListDTO The PaginatedListDTO to free.
 */
static void freeNs0PaginatedListDTOType(struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO);

#endif /* DEF_PatientFolderAPI_ns0_paginatedListDTO_H */
#ifndef DEF_PatientFolderAPI_ns0_patientComponentDTO_H
#define DEF_PatientFolderAPI_ns0_patientComponentDTO_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_patientComponentDTO {


  /**
   * (no documentation provided)
   */
  xmlChar *patientIdNs;

  /**
   * (no documentation provided)
   */
  xmlChar *patientSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *up;
};

/**
 * Reads a PatientComponentDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PatientComponentDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_patientComponentDTO *xmlTextReaderReadNs0PatientComponentDTOType(xmlTextReaderPtr reader);

/**
 * Writes a PatientComponentDTO to XML.
 *
 * @param writer The XML writer.
 * @param _patientComponentDTO The PatientComponentDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PatientComponentDTOType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_patientComponentDTO *_patientComponentDTO);

/**
 * Frees the elements of a PatientComponentDTO.
 *
 * @param _patientComponentDTO The PatientComponentDTO to free.
 */
static void freeNs0PatientComponentDTOType(struct PatientFolderAPI_ns0_patientComponentDTO *_patientComponentDTO);

#endif /* DEF_PatientFolderAPI_ns0_patientComponentDTO_H */
#ifndef DEF_PatientFolderAPI_ns0_Patient_H
#define DEF_PatientFolderAPI_ns0_Patient_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_Patient {


  /**
   * (no documentation provided)
   */
  xmlChar *src;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_extId *extIds;

  /**
   * Size of the extIds array.
   */
  int _sizeof_extIds;

  /**
   * (no documentation provided)
   */
  xmlChar *patientMasterId;

  /**
   * (no documentation provided)
   */
  xmlChar *firstName;

  /**
   * (no documentation provided)
   */
  xmlChar *lastName;

  /**
   * (no documentation provided)
   */
  xmlChar *otherNames;

  /**
   * (no documentation provided)
   */
  xmlChar *dob;

  /**
   * (no documentation provided)
   */
  xmlChar *dod;

  /**
   * (no documentation provided)
   */
  xmlChar *sex;

  /**
   * (no documentation provided)
   */
  xmlChar *addr1;

  /**
   * (no documentation provided)
   */
  xmlChar *addr2;

  /**
   * (no documentation provided)
   */
  xmlChar *city;

  /**
   * (no documentation provided)
   */
  xmlChar *postcode;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_PatientInfoField *infoFields;

  /**
   * Size of the infoFields array.
   */
  int _sizeof_infoFields;
};

/**
 * Reads a PatientDTO element from XML. The element to be read is "Patient", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PatientDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Patient *xml_read_PatientFolderAPI_ns0_Patient(xmlTextReaderPtr reader);

/**
 * Writes a PatientDTO to XML under element name "Patient".
 *
 * @param writer The XML writer.
 * @param _patientDTO The PatientDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_Patient(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Patient *_patientDTO);

/**
 * Frees a PatientDTO.
 *
 * @param _patientDTO The PatientDTO to free.
 */
void free_PatientFolderAPI_ns0_Patient(struct PatientFolderAPI_ns0_Patient *_patientDTO);

/**
 * Reads a PatientDTO element from XML. The element to be read is "Patient", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The PatientDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Patient *xmlTextReaderReadNs0PatientElement(xmlTextReaderPtr reader);

/**
 * Writes a PatientDTO to XML under element name "Patient".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _patientDTO The PatientDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PatientElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Patient *_patientDTO);

/**
 * Writes a PatientDTO to XML under element name "Patient".
 *
 * @param writer The XML writer.
 * @param _patientDTO The PatientDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PatientElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Patient *_patientDTO, int writeNamespaces);

/**
 * Frees the children of a PatientDTO.
 *
 * @param _patientDTO The PatientDTO whose children are to be free.
 */
static void freeNs0PatientElement(struct PatientFolderAPI_ns0_Patient *_patientDTO);

/**
 * Reads a PatientDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PatientDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_Patient *xmlTextReaderReadNs0PatientType(xmlTextReaderPtr reader);

/**
 * Writes a PatientDTO to XML.
 *
 * @param writer The XML writer.
 * @param _patientDTO The PatientDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PatientType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Patient *_patientDTO);

/**
 * Frees the elements of a PatientDTO.
 *
 * @param _patientDTO The PatientDTO to free.
 */
static void freeNs0PatientType(struct PatientFolderAPI_ns0_Patient *_patientDTO);

#endif /* DEF_PatientFolderAPI_ns0_Patient_H */
#ifndef DEF_PatientFolderAPI_ns0_PatientInfoField_H
#define DEF_PatientFolderAPI_ns0_PatientInfoField_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_PatientInfoField {


  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *value;
};

/**
 * Reads a PatientInfoFieldDTO element from XML. The element to be read is "PatientInfoField", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PatientInfoFieldDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_PatientInfoField *xml_read_PatientFolderAPI_ns0_PatientInfoField(xmlTextReaderPtr reader);

/**
 * Writes a PatientInfoFieldDTO to XML under element name "PatientInfoField".
 *
 * @param writer The XML writer.
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_PatientInfoField(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO);

/**
 * Frees a PatientInfoFieldDTO.
 *
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to free.
 */
void free_PatientFolderAPI_ns0_PatientInfoField(struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO);

/**
 * Reads a PatientInfoFieldDTO element from XML. The element to be read is "PatientInfoField", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The PatientInfoFieldDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_PatientInfoField *xmlTextReaderReadNs0PatientInfoFieldElement(xmlTextReaderPtr reader);

/**
 * Writes a PatientInfoFieldDTO to XML under element name "PatientInfoField".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PatientInfoFieldElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO);

/**
 * Writes a PatientInfoFieldDTO to XML under element name "PatientInfoField".
 *
 * @param writer The XML writer.
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PatientInfoFieldElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO, int writeNamespaces);

/**
 * Frees the children of a PatientInfoFieldDTO.
 *
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO whose children are to be free.
 */
static void freeNs0PatientInfoFieldElement(struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO);

/**
 * Reads a PatientInfoFieldDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PatientInfoFieldDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_PatientInfoField *xmlTextReaderReadNs0PatientInfoFieldType(xmlTextReaderPtr reader);

/**
 * Writes a PatientInfoFieldDTO to XML.
 *
 * @param writer The XML writer.
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PatientInfoFieldType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO);

/**
 * Frees the elements of a PatientInfoFieldDTO.
 *
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to free.
 */
static void freeNs0PatientInfoFieldType(struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO);

#endif /* DEF_PatientFolderAPI_ns0_PatientInfoField_H */
#ifndef DEF_PatientFolderAPI_ns0_PatientListItem_H
#define DEF_PatientFolderAPI_ns0_PatientListItem_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_PatientListItem {


  /**
   * (no documentation provided)
   */
  xmlChar *patientIdNs;

  /**
   * (no documentation provided)
   */
  xmlChar *patientSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *up;

  /**
   * (no documentation provided)
   */
  xmlChar *listId;

  /**
   * (no documentation provided)
   */
  xmlChar *description;

  /**
   * (no documentation provided)
   */
  int isEpisodic;
};

/**
 * Reads a PatientListItemDTO element from XML. The element to be read is "PatientListItem", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PatientListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_PatientListItem *xml_read_PatientFolderAPI_ns0_PatientListItem(xmlTextReaderPtr reader);

/**
 * Writes a PatientListItemDTO to XML under element name "PatientListItem".
 *
 * @param writer The XML writer.
 * @param _patientListItemDTO The PatientListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_PatientListItem(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO);

/**
 * Frees a PatientListItemDTO.
 *
 * @param _patientListItemDTO The PatientListItemDTO to free.
 */
void free_PatientFolderAPI_ns0_PatientListItem(struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO);

/**
 * Reads a PatientListItemDTO element from XML. The element to be read is "PatientListItem", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The PatientListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_PatientListItem *xmlTextReaderReadNs0PatientListItemElement(xmlTextReaderPtr reader);

/**
 * Writes a PatientListItemDTO to XML under element name "PatientListItem".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _patientListItemDTO The PatientListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PatientListItemElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO);

/**
 * Writes a PatientListItemDTO to XML under element name "PatientListItem".
 *
 * @param writer The XML writer.
 * @param _patientListItemDTO The PatientListItemDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PatientListItemElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO, int writeNamespaces);

/**
 * Frees the children of a PatientListItemDTO.
 *
 * @param _patientListItemDTO The PatientListItemDTO whose children are to be free.
 */
static void freeNs0PatientListItemElement(struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO);

/**
 * Reads a PatientListItemDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PatientListItemDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_PatientListItem *xmlTextReaderReadNs0PatientListItemType(xmlTextReaderPtr reader);

/**
 * Writes a PatientListItemDTO to XML.
 *
 * @param writer The XML writer.
 * @param _patientListItemDTO The PatientListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PatientListItemType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO);

/**
 * Frees the elements of a PatientListItemDTO.
 *
 * @param _patientListItemDTO The PatientListItemDTO to free.
 */
static void freeNs0PatientListItemType(struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO);

#endif /* DEF_PatientFolderAPI_ns0_PatientListItem_H */
#ifndef DEF_PatientFolderAPI_ns0_report_H
#define DEF_PatientFolderAPI_ns0_report_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_report {


  /**
   * (no documentation provided)
   */
  xmlChar *text;
};

/**
 * Reads a ReportDTO element from XML. The element to be read is "report", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ReportDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_report *xml_read_PatientFolderAPI_ns0_report(xmlTextReaderPtr reader);

/**
 * Writes a ReportDTO to XML under element name "report".
 *
 * @param writer The XML writer.
 * @param _reportDTO The ReportDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_report(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_report *_reportDTO);

/**
 * Frees a ReportDTO.
 *
 * @param _reportDTO The ReportDTO to free.
 */
void free_PatientFolderAPI_ns0_report(struct PatientFolderAPI_ns0_report *_reportDTO);

/**
 * Reads a ReportDTO element from XML. The element to be read is "report", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ReportDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_report *xmlTextReaderReadNs0ReportElement(xmlTextReaderPtr reader);

/**
 * Writes a ReportDTO to XML under element name "report".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _reportDTO The ReportDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ReportElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_report *_reportDTO);

/**
 * Writes a ReportDTO to XML under element name "report".
 *
 * @param writer The XML writer.
 * @param _reportDTO The ReportDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ReportElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_report *_reportDTO, int writeNamespaces);

/**
 * Frees the children of a ReportDTO.
 *
 * @param _reportDTO The ReportDTO whose children are to be free.
 */
static void freeNs0ReportElement(struct PatientFolderAPI_ns0_report *_reportDTO);

/**
 * Reads a ReportDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ReportDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_report *xmlTextReaderReadNs0ReportType(xmlTextReaderPtr reader);

/**
 * Writes a ReportDTO to XML.
 *
 * @param writer The XML writer.
 * @param _reportDTO The ReportDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ReportType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_report *_reportDTO);

/**
 * Frees the elements of a ReportDTO.
 *
 * @param _reportDTO The ReportDTO to free.
 */
static void freeNs0ReportType(struct PatientFolderAPI_ns0_report *_reportDTO);

#endif /* DEF_PatientFolderAPI_ns0_report_H */
#ifndef DEF_PatientFolderAPI_ns0_request_H
#define DEF_PatientFolderAPI_ns0_request_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_request {


  /**
   * (no documentation provided)
   */
  xmlChar *requestId;

  /**
   * (no documentation provided)
   */
  xmlChar *requestType;

  /**
   * (no documentation provided)
   */
  xmlChar *serviceDesc;

  /**
   * (no documentation provided)
   */
  xmlChar *requestStatus;

  /**
   * (no documentation provided)
   */
  xmlChar *requestDate;

  /**
   * (no documentation provided)
   */
  xmlChar *obsStart;

  /**
   * (no documentation provided)
   */
  xmlChar *obsStop;

  /**
   * (no documentation provided)
   */
  xmlChar *specimenRec;

  /**
   * (no documentation provided)
   */
  xmlChar *clinicalInformation;
};

/**
 * Reads a RequestDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The RequestDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_request *xmlTextReaderReadNs0RequestType(xmlTextReaderPtr reader);

/**
 * Writes a RequestDTO to XML.
 *
 * @param writer The XML writer.
 * @param _requestDTO The RequestDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RequestType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_request *_requestDTO);

/**
 * Frees the elements of a RequestDTO.
 *
 * @param _requestDTO The RequestDTO to free.
 */
static void freeNs0RequestType(struct PatientFolderAPI_ns0_request *_requestDTO);

#endif /* DEF_PatientFolderAPI_ns0_request_H */
#ifndef DEF_PatientFolderAPI_ns0_results_H
#define DEF_PatientFolderAPI_ns0_results_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_results {


  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_report *report;

  /**
   * Size of the report array.
   */
  int _sizeof_report;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_atomic *atomic;

  /**
   * Size of the atomic array.
   */
  int _sizeof_atomic;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_order *order;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_request *request;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_copiesto *copiesTo;

  /**
   * (no documentation provided)
   */
  struct PatientFolderAPI_ns0_image *image;
};

/**
 * Reads a ResultDataDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ResultDataDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_results *xml_read_PatientFolderAPI_ns0_results(xmlTextReaderPtr reader);

/**
 * Writes a ResultDataDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _resultDataDTO The ResultDataDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_results(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_results *_resultDataDTO);

/**
 * Frees a ResultDataDTO.
 *
 * @param _resultDataDTO The ResultDataDTO to free.
 */
void free_PatientFolderAPI_ns0_results(struct PatientFolderAPI_ns0_results *_resultDataDTO);

/**
 * Reads a ResultDataDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ResultDataDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_results *xmlTextReaderReadNs0ResultsElement(xmlTextReaderPtr reader);

/**
 * Writes a ResultDataDTO to XML under element name "results".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _resultDataDTO The ResultDataDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResultsElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_results *_resultDataDTO);

/**
 * Writes a ResultDataDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _resultDataDTO The ResultDataDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResultsElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_results *_resultDataDTO, int writeNamespaces);

/**
 * Frees the children of a ResultDataDTO.
 *
 * @param _resultDataDTO The ResultDataDTO whose children are to be free.
 */
static void freeNs0ResultsElement(struct PatientFolderAPI_ns0_results *_resultDataDTO);

/**
 * Reads a ResultDataDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ResultDataDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_results *xmlTextReaderReadNs0ResultsType(xmlTextReaderPtr reader);

/**
 * Writes a ResultDataDTO to XML.
 *
 * @param writer The XML writer.
 * @param _resultDataDTO The ResultDataDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResultsType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_results *_resultDataDTO);

/**
 * Frees the elements of a ResultDataDTO.
 *
 * @param _resultDataDTO The ResultDataDTO to free.
 */
static void freeNs0ResultsType(struct PatientFolderAPI_ns0_results *_resultDataDTO);

#endif /* DEF_PatientFolderAPI_ns0_results_H */
#ifndef DEF_PatientFolderAPI_ns0_Section_H
#define DEF_PatientFolderAPI_ns0_Section_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_Section {


  /**
   * (no documentation provided)
   */
  xmlChar *src;

  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  int episodal;

  /**
   * (no documentation provided)
   */
  int diagnostic;

  /**
   * (no documentation provided)
   */
  xmlChar *episodeType;

  /**
   * (no documentation provided)
   */
  xmlChar *rgbColor;

  /**
   * (no documentation provided)
   */
  int docCount;

  /**
   * (no documentation provided)
   */
  int episodeCount;

  /**
   * (no documentation provided)
   */
  struct tm *lastModifiedTimestamp;
};

/**
 * Reads a SectionDTO element from XML. The element to be read is "Section", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SectionDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Section *xml_read_PatientFolderAPI_ns0_Section(xmlTextReaderPtr reader);

/**
 * Writes a SectionDTO to XML under element name "Section".
 *
 * @param writer The XML writer.
 * @param _sectionDTO The SectionDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_Section(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Section *_sectionDTO);

/**
 * Frees a SectionDTO.
 *
 * @param _sectionDTO The SectionDTO to free.
 */
void free_PatientFolderAPI_ns0_Section(struct PatientFolderAPI_ns0_Section *_sectionDTO);

/**
 * Reads a SectionDTO element from XML. The element to be read is "Section", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SectionDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Section *xmlTextReaderReadNs0SectionElement(xmlTextReaderPtr reader);

/**
 * Writes a SectionDTO to XML under element name "Section".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _sectionDTO The SectionDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SectionElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Section *_sectionDTO);

/**
 * Writes a SectionDTO to XML under element name "Section".
 *
 * @param writer The XML writer.
 * @param _sectionDTO The SectionDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SectionElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Section *_sectionDTO, int writeNamespaces);

/**
 * Frees the children of a SectionDTO.
 *
 * @param _sectionDTO The SectionDTO whose children are to be free.
 */
static void freeNs0SectionElement(struct PatientFolderAPI_ns0_Section *_sectionDTO);

/**
 * Reads a SectionDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SectionDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_Section *xmlTextReaderReadNs0SectionType(xmlTextReaderPtr reader);

/**
 * Writes a SectionDTO to XML.
 *
 * @param writer The XML writer.
 * @param _sectionDTO The SectionDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SectionType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Section *_sectionDTO);

/**
 * Frees the elements of a SectionDTO.
 *
 * @param _sectionDTO The SectionDTO to free.
 */
static void freeNs0SectionType(struct PatientFolderAPI_ns0_Section *_sectionDTO);

#endif /* DEF_PatientFolderAPI_ns0_Section_H */
#ifndef DEF_PatientFolderAPI_ns0_UnitListItem_H
#define DEF_PatientFolderAPI_ns0_UnitListItem_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_UnitListItem {


  /**
   * (no documentation provided)
   */
  xmlChar *patientIdNs;

  /**
   * (no documentation provided)
   */
  xmlChar *patientSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *up;

  /**
   * (no documentation provided)
   */
  xmlChar *domain;

  /**
   * (no documentation provided)
   */
  xmlChar *campus;

  /**
   * (no documentation provided)
   */
  xmlChar *code;

  /**
   * (no documentation provided)
   */
  xmlChar *listId;

  /**
   * (no documentation provided)
   */
  xmlChar *description;
};

/**
 * Reads a UnitListItemDTO element from XML. The element to be read is "UnitListItem", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The UnitListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_UnitListItem *xml_read_PatientFolderAPI_ns0_UnitListItem(xmlTextReaderPtr reader);

/**
 * Writes a UnitListItemDTO to XML under element name "UnitListItem".
 *
 * @param writer The XML writer.
 * @param _unitListItemDTO The UnitListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_UnitListItem(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO);

/**
 * Frees a UnitListItemDTO.
 *
 * @param _unitListItemDTO The UnitListItemDTO to free.
 */
void free_PatientFolderAPI_ns0_UnitListItem(struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO);

/**
 * Reads a UnitListItemDTO element from XML. The element to be read is "UnitListItem", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The UnitListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_UnitListItem *xmlTextReaderReadNs0UnitListItemElement(xmlTextReaderPtr reader);

/**
 * Writes a UnitListItemDTO to XML under element name "UnitListItem".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _unitListItemDTO The UnitListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UnitListItemElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO);

/**
 * Writes a UnitListItemDTO to XML under element name "UnitListItem".
 *
 * @param writer The XML writer.
 * @param _unitListItemDTO The UnitListItemDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UnitListItemElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO, int writeNamespaces);

/**
 * Frees the children of a UnitListItemDTO.
 *
 * @param _unitListItemDTO The UnitListItemDTO whose children are to be free.
 */
static void freeNs0UnitListItemElement(struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO);

/**
 * Reads a UnitListItemDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The UnitListItemDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_UnitListItem *xmlTextReaderReadNs0UnitListItemType(xmlTextReaderPtr reader);

/**
 * Writes a UnitListItemDTO to XML.
 *
 * @param writer The XML writer.
 * @param _unitListItemDTO The UnitListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UnitListItemType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO);

/**
 * Frees the elements of a UnitListItemDTO.
 *
 * @param _unitListItemDTO The UnitListItemDTO to free.
 */
static void freeNs0UnitListItemType(struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO);

#endif /* DEF_PatientFolderAPI_ns0_UnitListItem_H */
#ifndef DEF_PatientFolderAPI_ns0_WardListItem_H
#define DEF_PatientFolderAPI_ns0_WardListItem_H

/**
 * (no documentation provided)
 */
struct PatientFolderAPI_ns0_WardListItem {


  /**
   * (no documentation provided)
   */
  xmlChar *patientIdNs;

  /**
   * (no documentation provided)
   */
  xmlChar *patientSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *up;

  /**
   * (no documentation provided)
   */
  xmlChar *domain;

  /**
   * (no documentation provided)
   */
  xmlChar *campus;

  /**
   * (no documentation provided)
   */
  xmlChar *code;

  /**
   * (no documentation provided)
   */
  xmlChar *listId;

  /**
   * (no documentation provided)
   */
  xmlChar *description;
};

/**
 * Reads a WardListItemDTO element from XML. The element to be read is "WardListItem", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The WardListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_WardListItem *xml_read_PatientFolderAPI_ns0_WardListItem(xmlTextReaderPtr reader);

/**
 * Writes a WardListItemDTO to XML under element name "WardListItem".
 *
 * @param writer The XML writer.
 * @param _wardListItemDTO The WardListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_PatientFolderAPI_ns0_WardListItem(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO);

/**
 * Frees a WardListItemDTO.
 *
 * @param _wardListItemDTO The WardListItemDTO to free.
 */
void free_PatientFolderAPI_ns0_WardListItem(struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO);

/**
 * Reads a WardListItemDTO element from XML. The element to be read is "WardListItem", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The WardListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_WardListItem *xmlTextReaderReadNs0WardListItemElement(xmlTextReaderPtr reader);

/**
 * Writes a WardListItemDTO to XML under element name "WardListItem".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _wardListItemDTO The WardListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0WardListItemElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO);

/**
 * Writes a WardListItemDTO to XML under element name "WardListItem".
 *
 * @param writer The XML writer.
 * @param _wardListItemDTO The WardListItemDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0WardListItemElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO, int writeNamespaces);

/**
 * Frees the children of a WardListItemDTO.
 *
 * @param _wardListItemDTO The WardListItemDTO whose children are to be free.
 */
static void freeNs0WardListItemElement(struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO);

/**
 * Reads a WardListItemDTO from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The WardListItemDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_WardListItem *xmlTextReaderReadNs0WardListItemType(xmlTextReaderPtr reader);

/**
 * Writes a WardListItemDTO to XML.
 *
 * @param writer The XML writer.
 * @param _wardListItemDTO The WardListItemDTO to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0WardListItemType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO);

/**
 * Frees the elements of a WardListItemDTO.
 *
 * @param _wardListItemDTO The WardListItemDTO to free.
 */
static void freeNs0WardListItemType(struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO);

#endif /* DEF_PatientFolderAPI_ns0_WardListItem_H */
#ifndef DEF_PatientFolderAPI_ns0_item_ident_M
#define DEF_PatientFolderAPI_ns0_item_ident_M

/**
 * Reads a ItemIdent from XML. The reader is assumed to be at the start element.
 *
 * @return the ItemIdent, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_item_ident *xmlTextReaderReadNs0Item_identType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_item_ident *_itemIdent = calloc(1, sizeof(struct PatientFolderAPI_ns0_item_ident));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0Item_identType(_itemIdent);
        free(_itemIdent);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0Item_identType(_itemIdent);
          free(_itemIdent);
          return NULL;
        }

        _itemIdent->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "text", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0Item_identType(_itemIdent);
          free(_itemIdent);
          return NULL;
        }

        _itemIdent->text = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}item_ident.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}item_ident. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _itemIdent;
}

/**
 * Writes a ItemIdent to XML.
 *
 * @param writer The XML writer.
 * @param _itemIdent The ItemIdent to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0Item_identType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_item_ident *_itemIdent) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_itemIdent->id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_itemIdent->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_itemIdent->text != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "text", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}text. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}text...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_itemIdent->text));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}text. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}text. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ItemIdent.
 *
 * @param _itemIdent The ItemIdent to free.
 */
static void freeNs0Item_identType(struct PatientFolderAPI_ns0_item_ident *_itemIdent) {
  int i;
  if (_itemIdent->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type PatientFolderAPI_ns0_item_ident...\n");
#endif
    freeXsStringType(_itemIdent->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type PatientFolderAPI_ns0_item_ident...\n");
#endif
    free(_itemIdent->id);
  }
  if (_itemIdent->text != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor text of type PatientFolderAPI_ns0_item_ident...\n");
#endif
    freeXsStringType(_itemIdent->text);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor text of type PatientFolderAPI_ns0_item_ident...\n");
#endif
    free(_itemIdent->text);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_item_ident_M */
#ifndef DEF_PatientFolderAPI_ns0_status_M
#define DEF_PatientFolderAPI_ns0_status_M

/**
 * Reads a Status from XML. The reader is assumed to be at the start element.
 *
 * @return the Status, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_status *xmlTextReaderReadNs0StatusType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_status *_status = calloc(1, sizeof(struct PatientFolderAPI_ns0_status));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0StatusType(_status);
        free(_status);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StatusType(_status);
          free(_status);
          return NULL;
        }

        _status->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "text", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StatusType(_status);
          free(_status);
          return NULL;
        }

        _status->text = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "order_control", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}order_control of type {}item_ident.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0Item_identType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}order_control of type {}item_ident.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StatusType(_status);
          free(_status);
          return NULL;
        }

        _status->orderControl = ((struct PatientFolderAPI_ns0_item_ident*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}status.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}status. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _status;
}

/**
 * Writes a Status to XML.
 *
 * @param writer The XML writer.
 * @param _status The Status to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0StatusType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_status *_status) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_status->id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_status->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_status->text != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "text", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}text. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}text...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_status->text));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}text. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}text. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_status->orderControl != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "order_control", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}order_control. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}item_ident for element {}order_control...\n");
#endif
    status = xmlTextWriterWriteNs0Item_identType(writer, (_status->orderControl));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}item_ident for element {}order_control. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}order_control. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Status.
 *
 * @param _status The Status to free.
 */
static void freeNs0StatusType(struct PatientFolderAPI_ns0_status *_status) {
  int i;
  if (_status->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type PatientFolderAPI_ns0_status...\n");
#endif
    freeXsStringType(_status->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type PatientFolderAPI_ns0_status...\n");
#endif
    free(_status->id);
  }
  if (_status->text != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor text of type PatientFolderAPI_ns0_status...\n");
#endif
    freeXsStringType(_status->text);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor text of type PatientFolderAPI_ns0_status...\n");
#endif
    free(_status->text);
  }
  if (_status->orderControl != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor orderControl of type PatientFolderAPI_ns0_status...\n");
#endif
    freeNs0Item_identType(_status->orderControl);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor orderControl of type PatientFolderAPI_ns0_status...\n");
#endif
    free(_status->orderControl);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_status_M */
#ifndef DEF_PatientFolderAPI_ns0_ActivityFeeds_M
#define DEF_PatientFolderAPI_ns0_ActivityFeeds_M

/**
 * Reads a ActivityFeedDTO element from XML. The element to be read is "Feeds", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ActivityFeedDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_ActivityFeeds *xml_read_PatientFolderAPI_ns0_ActivityFeeds(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0FeedsElement(reader);
}

/**
 * Writes a ActivityFeedDTO to XML under element name "Feeds".
 *
 * @param writer The XML writer.
 * @param _activityFeedDTO The ActivityFeedDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_ActivityFeeds(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO) {
  return xmlTextWriterWriteNs0FeedsElementNS(writer, _activityFeedDTO, 1);
}

/**
 * Frees a ActivityFeedDTO.
 *
 * @param _activityFeedDTO The ActivityFeedDTO to free.
 */
void free_PatientFolderAPI_ns0_ActivityFeeds(struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO) {
  freeNs0ActivityFeedsType(_activityFeedDTO);
  free(_activityFeedDTO);
}

/**
 * Reads a ActivityFeedDTO element from XML. The element to be read is "Feeds", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ActivityFeedDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_ActivityFeeds *xmlTextReaderReadNs0FeedsElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Feeds", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}Feeds.\n");
#endif
    _activityFeedDTO = xmlTextReaderReadNs0ActivityFeedsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_activityFeedDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}Feeds failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}Feeds failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _activityFeedDTO;
}

/**
 * Writes a ActivityFeedDTO to XML under element name "Feeds".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _activityFeedDTO The ActivityFeedDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FeedsElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO) {
  return xmlTextWriterWriteNs0FeedsElementNS(writer, _activityFeedDTO, 0);
}

/**
 * Writes a ActivityFeedDTO to XML under element name "Feeds".
 *
 * @param writer The XML writer.
 * @param _activityFeedDTO The ActivityFeedDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FeedsElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Feeds", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}Feeds. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}ActivityFeeds for root element {}Feeds...\n");
#endif
  status = xmlTextWriterWriteNs0ActivityFeedsType(writer, _activityFeedDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}Feeds. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}Feeds. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ActivityFeedDTO.
 *
 * @param _activityFeedDTO The ActivityFeedDTO whose children are to be free.
 */
static void freeNs0FeedsElement(struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO) {
  freeNs0ActivityFeedsType(_activityFeedDTO);
}

/**
 * Reads a ActivityFeedDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the ActivityFeedDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_ActivityFeeds *xmlTextReaderReadNs0ActivityFeedsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_ActivityFeeds));

  if (xmlTextReaderHasAttributes(reader)) {
    while (xmlTextReaderMoveToNextAttribute(reader)) {
      if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}src...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}src of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0ActivityFeedsType(_activityFeedDTO);
          free(_activityFeedDTO);
          return NULL;
        }
        _activityFeedDTO->src = ((xmlChar*)_child_accessor);
        continue;
      }
    }

    status = xmlTextReaderMoveToElement(reader);
    if (status < 1) {
      //panic: unable to return to the element node.
#if DEBUG_ENUNCIATE
      printf("Unable to return to element node from attributes.\n");
#endif
      freeNs0ActivityFeedsType(_activityFeedDTO);
      free(_activityFeedDTO);
      return NULL;
    }
  }


  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ActivityFeedsType(_activityFeedDTO);
        free(_activityFeedDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Urno", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ActivityFeedsType(_activityFeedDTO);
          free(_activityFeedDTO);
          return NULL;
        }

        _activityFeedDTO->urno = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "PatientNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ActivityFeedsType(_activityFeedDTO);
          free(_activityFeedDTO);
          return NULL;
        }

        _activityFeedDTO->patientNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ElectronicAlerts", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ElectronicAlerts of type {}result.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ResultType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ElectronicAlerts of type {}result.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ActivityFeedsType(_activityFeedDTO);
          free(_activityFeedDTO);
          return NULL;
        }

        _activityFeedDTO->electronicAlerts = ((struct PatientFolderAPI_ns0_result*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ScannedAlerts", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ScannedAlerts of type {}result.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ResultType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ScannedAlerts of type {}result.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ActivityFeedsType(_activityFeedDTO);
          free(_activityFeedDTO);
          return NULL;
        }

        _activityFeedDTO->scannedAlerts = ((struct PatientFolderAPI_ns0_result*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Documents", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Documents of type {}result.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ResultType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Documents of type {}result.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ActivityFeedsType(_activityFeedDTO);
          free(_activityFeedDTO);
          return NULL;
        }

        _activityFeedDTO->documents = ((struct PatientFolderAPI_ns0_result*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "results", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}results of type {}result.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ResultType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}results of type {}result.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ActivityFeedsType(_activityFeedDTO);
          free(_activityFeedDTO);
          return NULL;
        }

        _activityFeedDTO->results = ((struct PatientFolderAPI_ns0_result*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Episodes", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Episodes of type {}result.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ResultType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Episodes of type {}result.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ActivityFeedsType(_activityFeedDTO);
          free(_activityFeedDTO);
          return NULL;
        }

        _activityFeedDTO->episodes = ((struct PatientFolderAPI_ns0_result*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}ActivityFeeds.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}ActivityFeeds. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _activityFeedDTO;
}

/**
 * Writes a ActivityFeedDTO to XML.
 *
 * @param writer The XML writer.
 * @param _activityFeedDTO The ActivityFeedDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ActivityFeedsType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_activityFeedDTO->src != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}src. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}src...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_activityFeedDTO->src));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_activityFeedDTO->urno != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Urno", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Urno. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Urno...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_activityFeedDTO->urno));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Urno. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Urno. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_activityFeedDTO->patientNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PatientNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}PatientNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}PatientNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_activityFeedDTO->patientNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}PatientNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}PatientNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_activityFeedDTO->electronicAlerts != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ElectronicAlerts", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ElectronicAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}result for element {}ElectronicAlerts...\n");
#endif
    status = xmlTextWriterWriteNs0ResultType(writer, (_activityFeedDTO->electronicAlerts));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}result for element {}ElectronicAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ElectronicAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_activityFeedDTO->scannedAlerts != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ScannedAlerts", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ScannedAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}result for element {}ScannedAlerts...\n");
#endif
    status = xmlTextWriterWriteNs0ResultType(writer, (_activityFeedDTO->scannedAlerts));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}result for element {}ScannedAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ScannedAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_activityFeedDTO->documents != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Documents", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Documents. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}result for element {}Documents...\n");
#endif
    status = xmlTextWriterWriteNs0ResultType(writer, (_activityFeedDTO->documents));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}result for element {}Documents. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Documents. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_activityFeedDTO->results != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "results", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}results. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}result for element {}results...\n");
#endif
    status = xmlTextWriterWriteNs0ResultType(writer, (_activityFeedDTO->results));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}result for element {}results. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}results. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_activityFeedDTO->episodes != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Episodes", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Episodes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}result for element {}Episodes...\n");
#endif
    status = xmlTextWriterWriteNs0ResultType(writer, (_activityFeedDTO->episodes));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}result for element {}Episodes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Episodes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ActivityFeedDTO.
 *
 * @param _activityFeedDTO The ActivityFeedDTO to free.
 */
static void freeNs0ActivityFeedsType(struct PatientFolderAPI_ns0_ActivityFeeds *_activityFeedDTO) {
  int i;
  if (_activityFeedDTO->src != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor src of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    freeXsStringType(_activityFeedDTO->src);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor src of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    free(_activityFeedDTO->src);
  }
  if (_activityFeedDTO->urno != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor urno of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    freeXsStringType(_activityFeedDTO->urno);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor urno of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    free(_activityFeedDTO->urno);
  }
  if (_activityFeedDTO->patientNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientNs of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    freeXsStringType(_activityFeedDTO->patientNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientNs of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    free(_activityFeedDTO->patientNs);
  }
  if (_activityFeedDTO->electronicAlerts != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor electronicAlerts of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    freeNs0ResultType(_activityFeedDTO->electronicAlerts);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor electronicAlerts of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    free(_activityFeedDTO->electronicAlerts);
  }
  if (_activityFeedDTO->scannedAlerts != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor scannedAlerts of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    freeNs0ResultType(_activityFeedDTO->scannedAlerts);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor scannedAlerts of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    free(_activityFeedDTO->scannedAlerts);
  }
  if (_activityFeedDTO->documents != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor documents of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    freeNs0ResultType(_activityFeedDTO->documents);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor documents of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    free(_activityFeedDTO->documents);
  }
  if (_activityFeedDTO->results != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor results of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    freeNs0ResultType(_activityFeedDTO->results);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor results of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    free(_activityFeedDTO->results);
  }
  if (_activityFeedDTO->episodes != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor episodes of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    freeNs0ResultType(_activityFeedDTO->episodes);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor episodes of type PatientFolderAPI_ns0_ActivityFeeds...\n");
#endif
    free(_activityFeedDTO->episodes);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_ActivityFeeds_M */
#ifndef DEF_PatientFolderAPI_ns0_Alerts_M
#define DEF_PatientFolderAPI_ns0_Alerts_M

/**
 * Reads a AlertDTO element from XML. The element to be read is "Alerts", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AlertDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Alerts *xml_read_PatientFolderAPI_ns0_Alerts(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0AlertsElement(reader);
}

/**
 * Writes a AlertDTO to XML under element name "Alerts".
 *
 * @param writer The XML writer.
 * @param _alertDTO The AlertDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_Alerts(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Alerts *_alertDTO) {
  return xmlTextWriterWriteNs0AlertsElementNS(writer, _alertDTO, 1);
}

/**
 * Frees a AlertDTO.
 *
 * @param _alertDTO The AlertDTO to free.
 */
void free_PatientFolderAPI_ns0_Alerts(struct PatientFolderAPI_ns0_Alerts *_alertDTO) {
  freeNs0AlertsType(_alertDTO);
  free(_alertDTO);
}

/**
 * Reads a AlertDTO element from XML. The element to be read is "Alerts", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The AlertDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Alerts *xmlTextReaderReadNs0AlertsElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_Alerts *_alertDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Alerts", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}Alerts.\n");
#endif
    _alertDTO = xmlTextReaderReadNs0AlertsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_alertDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}Alerts failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}Alerts failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _alertDTO;
}

/**
 * Writes a AlertDTO to XML under element name "Alerts".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _alertDTO The AlertDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AlertsElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Alerts *_alertDTO) {
  return xmlTextWriterWriteNs0AlertsElementNS(writer, _alertDTO, 0);
}

/**
 * Writes a AlertDTO to XML under element name "Alerts".
 *
 * @param writer The XML writer.
 * @param _alertDTO The AlertDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AlertsElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Alerts *_alertDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Alerts", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}Alerts. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}Alerts for root element {}Alerts...\n");
#endif
  status = xmlTextWriterWriteNs0AlertsType(writer, _alertDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}Alerts. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}Alerts. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a AlertDTO.
 *
 * @param _alertDTO The AlertDTO whose children are to be free.
 */
static void freeNs0AlertsElement(struct PatientFolderAPI_ns0_Alerts *_alertDTO) {
  freeNs0AlertsType(_alertDTO);
}

/**
 * Reads a AlertDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the AlertDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_Alerts *xmlTextReaderReadNs0AlertsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_Alerts *_alertDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_Alerts));

  if (xmlTextReaderHasAttributes(reader)) {
    while (xmlTextReaderMoveToNextAttribute(reader)) {
      if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}src...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}src of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0AlertsType(_alertDTO);
          free(_alertDTO);
          return NULL;
        }
        _alertDTO->src = ((xmlChar*)_child_accessor);
        continue;
      }
    }

    status = xmlTextReaderMoveToElement(reader);
    if (status < 1) {
      //panic: unable to return to the element node.
#if DEBUG_ENUNCIATE
      printf("Unable to return to element node from attributes.\n");
#endif
      freeNs0AlertsType(_alertDTO);
      free(_alertDTO);
      return NULL;
    }
  }


  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0AlertsType(_alertDTO);
        free(_alertDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientIdNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertsType(_alertDTO);
          free(_alertDTO);
          return NULL;
        }

        _alertDTO->patientIdNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertsType(_alertDTO);
          free(_alertDTO);
          return NULL;
        }

        _alertDTO->patientSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertsType(_alertDTO);
          free(_alertDTO);
          return NULL;
        }

        _alertDTO->up = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Urno", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertsType(_alertDTO);
          free(_alertDTO);
          return NULL;
        }

        _alertDTO->urno = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "PatientNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertsType(_alertDTO);
          free(_alertDTO);
          return NULL;
        }

        _alertDTO->patientNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DocumentId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DocumentId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DocumentId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertsType(_alertDTO);
          free(_alertDTO);
          return NULL;
        }

        _alertDTO->documentId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DocumentNS", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DocumentNS of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DocumentNS of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertsType(_alertDTO);
          free(_alertDTO);
          return NULL;
        }

        _alertDTO->documentNS = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ElectronicAlerts", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ElectronicAlerts of type {}AlertItem.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0AlertItemType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ElectronicAlerts of type {}AlertItem.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertsType(_alertDTO);
          free(_alertDTO);
          return NULL;
        }

        _alertDTO->electronicAlerts = realloc(_alertDTO->electronicAlerts, (_alertDTO->_sizeof_electronicAlerts + 1) * sizeof(struct PatientFolderAPI_ns0_AlertItem));
        memcpy(&(_alertDTO->electronicAlerts[_alertDTO->_sizeof_electronicAlerts++]), _child_accessor, sizeof(struct PatientFolderAPI_ns0_AlertItem));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ScannedAlerts", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ScannedAlerts of type {}Document.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0DocumentType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ScannedAlerts of type {}Document.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertsType(_alertDTO);
          free(_alertDTO);
          return NULL;
        }

        _alertDTO->scannedAlerts = realloc(_alertDTO->scannedAlerts, (_alertDTO->_sizeof_scannedAlerts + 1) * sizeof(struct PatientFolderAPI_ns0_Document));
        memcpy(&(_alertDTO->scannedAlerts[_alertDTO->_sizeof_scannedAlerts++]), _child_accessor, sizeof(struct PatientFolderAPI_ns0_Document));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}Alerts.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}Alerts. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _alertDTO;
}

/**
 * Writes a AlertDTO to XML.
 *
 * @param writer The XML writer.
 * @param _alertDTO The AlertDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0AlertsType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Alerts *_alertDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_alertDTO->src != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}src. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}src...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertDTO->src));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertDTO->patientIdNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientIdNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertDTO->patientIdNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertDTO->patientSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertDTO->patientSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertDTO->up != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}up...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertDTO->up));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertDTO->urno != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Urno", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Urno. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Urno...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertDTO->urno));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Urno. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Urno. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertDTO->patientNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PatientNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}PatientNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}PatientNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertDTO->patientNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}PatientNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}PatientNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertDTO->documentId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DocumentId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertDTO->documentId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DocumentId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertDTO->documentNS != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentNS", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DocumentNS. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentNS...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertDTO->documentNS));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentNS. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DocumentNS. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _alertDTO->_sizeof_electronicAlerts; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ElectronicAlerts", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ElectronicAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}AlertItem for element {}ElectronicAlerts...\n");
#endif
    status = xmlTextWriterWriteNs0AlertItemType(writer, &(_alertDTO->electronicAlerts[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}AlertItem for element {}ElectronicAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ElectronicAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _alertDTO->_sizeof_scannedAlerts; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ScannedAlerts", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ScannedAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}Document for element {}ScannedAlerts...\n");
#endif
    status = xmlTextWriterWriteNs0DocumentType(writer, &(_alertDTO->scannedAlerts[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}Document for element {}ScannedAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ScannedAlerts. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a AlertDTO.
 *
 * @param _alertDTO The AlertDTO to free.
 */
static void freeNs0AlertsType(struct PatientFolderAPI_ns0_Alerts *_alertDTO) {
  int i;
  if (_alertDTO->src != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor src of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    freeXsStringType(_alertDTO->src);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor src of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    free(_alertDTO->src);
  }
  if (_alertDTO->patientIdNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientIdNs of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    freeXsStringType(_alertDTO->patientIdNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientIdNs of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    free(_alertDTO->patientIdNs);
  }
  if (_alertDTO->patientSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientSrc of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    freeXsStringType(_alertDTO->patientSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientSrc of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    free(_alertDTO->patientSrc);
  }
  if (_alertDTO->up != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor up of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    freeXsStringType(_alertDTO->up);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor up of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    free(_alertDTO->up);
  }
  if (_alertDTO->urno != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor urno of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    freeXsStringType(_alertDTO->urno);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor urno of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    free(_alertDTO->urno);
  }
  if (_alertDTO->patientNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientNs of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    freeXsStringType(_alertDTO->patientNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientNs of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    free(_alertDTO->patientNs);
  }
  if (_alertDTO->documentId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor documentId of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    freeXsStringType(_alertDTO->documentId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor documentId of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    free(_alertDTO->documentId);
  }
  if (_alertDTO->documentNS != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor documentNS of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    freeXsStringType(_alertDTO->documentNS);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor documentNS of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    free(_alertDTO->documentNS);
  }
  if (_alertDTO->electronicAlerts != NULL) {
    for (i = 0; i < _alertDTO->_sizeof_electronicAlerts; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor electronicAlerts[%i] of type PatientFolderAPI_ns0_Alerts...\n", i);
#endif
      freeNs0AlertItemType(&(_alertDTO->electronicAlerts[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor electronicAlerts of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    free(_alertDTO->electronicAlerts);
  }
  if (_alertDTO->scannedAlerts != NULL) {
    for (i = 0; i < _alertDTO->_sizeof_scannedAlerts; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor scannedAlerts[%i] of type PatientFolderAPI_ns0_Alerts...\n", i);
#endif
      freeNs0DocumentType(&(_alertDTO->scannedAlerts[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor scannedAlerts of type PatientFolderAPI_ns0_Alerts...\n");
#endif
    free(_alertDTO->scannedAlerts);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_Alerts_M */
#ifndef DEF_PatientFolderAPI_ns0_AlertItem_M
#define DEF_PatientFolderAPI_ns0_AlertItem_M

/**
 * Reads a AlertItemDTO element from XML. The element to be read is "AlertItem", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AlertItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_AlertItem *xml_read_PatientFolderAPI_ns0_AlertItem(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0AlertItemElement(reader);
}

/**
 * Writes a AlertItemDTO to XML under element name "AlertItem".
 *
 * @param writer The XML writer.
 * @param _alertItemDTO The AlertItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_AlertItem(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO) {
  return xmlTextWriterWriteNs0AlertItemElementNS(writer, _alertItemDTO, 1);
}

/**
 * Frees a AlertItemDTO.
 *
 * @param _alertItemDTO The AlertItemDTO to free.
 */
void free_PatientFolderAPI_ns0_AlertItem(struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO) {
  freeNs0AlertItemType(_alertItemDTO);
  free(_alertItemDTO);
}

/**
 * Reads a AlertItemDTO element from XML. The element to be read is "AlertItem", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The AlertItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_AlertItem *xmlTextReaderReadNs0AlertItemElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "AlertItem", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}AlertItem.\n");
#endif
    _alertItemDTO = xmlTextReaderReadNs0AlertItemType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_alertItemDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}AlertItem failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}AlertItem failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _alertItemDTO;
}

/**
 * Writes a AlertItemDTO to XML under element name "AlertItem".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _alertItemDTO The AlertItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AlertItemElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO) {
  return xmlTextWriterWriteNs0AlertItemElementNS(writer, _alertItemDTO, 0);
}

/**
 * Writes a AlertItemDTO to XML under element name "AlertItem".
 *
 * @param writer The XML writer.
 * @param _alertItemDTO The AlertItemDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AlertItemElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "AlertItem", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}AlertItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}AlertItem for root element {}AlertItem...\n");
#endif
  status = xmlTextWriterWriteNs0AlertItemType(writer, _alertItemDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}AlertItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}AlertItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a AlertItemDTO.
 *
 * @param _alertItemDTO The AlertItemDTO whose children are to be free.
 */
static void freeNs0AlertItemElement(struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO) {
  freeNs0AlertItemType(_alertItemDTO);
}

/**
 * Reads a AlertItemDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the AlertItemDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_AlertItem *xmlTextReaderReadNs0AlertItemType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_AlertItem));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0AlertItemType(_alertItemDTO);
        free(_alertItemDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientIdNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertItemType(_alertItemDTO);
          free(_alertItemDTO);
          return NULL;
        }

        _alertItemDTO->patientIdNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertItemType(_alertItemDTO);
          free(_alertItemDTO);
          return NULL;
        }

        _alertItemDTO->patientSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertItemType(_alertItemDTO);
          free(_alertItemDTO);
          return NULL;
        }

        _alertItemDTO->up = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "AlertNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}AlertNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}AlertNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertItemType(_alertItemDTO);
          free(_alertItemDTO);
          return NULL;
        }

        _alertItemDTO->alertNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Code", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertItemType(_alertItemDTO);
          free(_alertItemDTO);
          return NULL;
        }

        _alertItemDTO->code = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertItemType(_alertItemDTO);
          free(_alertItemDTO);
          return NULL;
        }

        _alertItemDTO->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Type", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertItemType(_alertItemDTO);
          free(_alertItemDTO);
          return NULL;
        }

        _alertItemDTO->type = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Comment", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Comment of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Comment of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertItemType(_alertItemDTO);
          free(_alertItemDTO);
          return NULL;
        }

        _alertItemDTO->comment = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "IdentificationDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}IdentificationDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}IdentificationDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AlertItemType(_alertItemDTO);
          free(_alertItemDTO);
          return NULL;
        }

        _alertItemDTO->identificationDate = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}AlertItem.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}AlertItem. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _alertItemDTO;
}

/**
 * Writes a AlertItemDTO to XML.
 *
 * @param writer The XML writer.
 * @param _alertItemDTO The AlertItemDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0AlertItemType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_alertItemDTO->patientIdNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientIdNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertItemDTO->patientIdNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertItemDTO->patientSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertItemDTO->patientSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertItemDTO->up != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}up...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertItemDTO->up));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertItemDTO->alertNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "AlertNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}AlertNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}AlertNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertItemDTO->alertNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}AlertNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}AlertNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertItemDTO->code != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Code", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Code...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertItemDTO->code));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertItemDTO->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertItemDTO->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertItemDTO->type != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Type", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Type...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertItemDTO->type));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertItemDTO->comment != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Comment", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Comment. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Comment...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertItemDTO->comment));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Comment. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Comment. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_alertItemDTO->identificationDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "IdentificationDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}IdentificationDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}IdentificationDate...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_alertItemDTO->identificationDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}IdentificationDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}IdentificationDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a AlertItemDTO.
 *
 * @param _alertItemDTO The AlertItemDTO to free.
 */
static void freeNs0AlertItemType(struct PatientFolderAPI_ns0_AlertItem *_alertItemDTO) {
  int i;
  if (_alertItemDTO->patientIdNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientIdNs of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    freeXsStringType(_alertItemDTO->patientIdNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientIdNs of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    free(_alertItemDTO->patientIdNs);
  }
  if (_alertItemDTO->patientSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientSrc of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    freeXsStringType(_alertItemDTO->patientSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientSrc of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    free(_alertItemDTO->patientSrc);
  }
  if (_alertItemDTO->up != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor up of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    freeXsStringType(_alertItemDTO->up);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor up of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    free(_alertItemDTO->up);
  }
  if (_alertItemDTO->alertNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor alertNs of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    freeXsStringType(_alertItemDTO->alertNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor alertNs of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    free(_alertItemDTO->alertNs);
  }
  if (_alertItemDTO->code != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor code of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    freeXsStringType(_alertItemDTO->code);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor code of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    free(_alertItemDTO->code);
  }
  if (_alertItemDTO->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    freeXsStringType(_alertItemDTO->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    free(_alertItemDTO->description);
  }
  if (_alertItemDTO->type != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor type of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    freeXsStringType(_alertItemDTO->type);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor type of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    free(_alertItemDTO->type);
  }
  if (_alertItemDTO->comment != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor comment of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    freeXsStringType(_alertItemDTO->comment);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor comment of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    free(_alertItemDTO->comment);
  }
  if (_alertItemDTO->identificationDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor identificationDate of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    freeXsStringType(_alertItemDTO->identificationDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor identificationDate of type PatientFolderAPI_ns0_AlertItem...\n");
#endif
    free(_alertItemDTO->identificationDate);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_AlertItem_M */
#ifndef DEF_PatientFolderAPI_ns0_atomic_M
#define DEF_PatientFolderAPI_ns0_atomic_M

/**
 * Reads a AtomicDTO element from XML. The element to be read is "atomic", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AtomicDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_atomic *xml_read_PatientFolderAPI_ns0_atomic(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0AtomicElement(reader);
}

/**
 * Writes a AtomicDTO to XML under element name "atomic".
 *
 * @param writer The XML writer.
 * @param _atomicDTO The AtomicDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_atomic(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_atomic *_atomicDTO) {
  return xmlTextWriterWriteNs0AtomicElementNS(writer, _atomicDTO, 1);
}

/**
 * Frees a AtomicDTO.
 *
 * @param _atomicDTO The AtomicDTO to free.
 */
void free_PatientFolderAPI_ns0_atomic(struct PatientFolderAPI_ns0_atomic *_atomicDTO) {
  freeNs0AtomicType(_atomicDTO);
  free(_atomicDTO);
}

/**
 * Reads a AtomicDTO element from XML. The element to be read is "atomic", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The AtomicDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_atomic *xmlTextReaderReadNs0AtomicElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_atomic *_atomicDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "atomic", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}atomic.\n");
#endif
    _atomicDTO = xmlTextReaderReadNs0AtomicType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_atomicDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}atomic failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}atomic failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _atomicDTO;
}

/**
 * Writes a AtomicDTO to XML under element name "atomic".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _atomicDTO The AtomicDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AtomicElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_atomic *_atomicDTO) {
  return xmlTextWriterWriteNs0AtomicElementNS(writer, _atomicDTO, 0);
}

/**
 * Writes a AtomicDTO to XML under element name "atomic".
 *
 * @param writer The XML writer.
 * @param _atomicDTO The AtomicDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AtomicElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_atomic *_atomicDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "atomic", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}atomic. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}atomic for root element {}atomic...\n");
#endif
  status = xmlTextWriterWriteNs0AtomicType(writer, _atomicDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}atomic. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}atomic. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a AtomicDTO.
 *
 * @param _atomicDTO The AtomicDTO whose children are to be free.
 */
static void freeNs0AtomicElement(struct PatientFolderAPI_ns0_atomic *_atomicDTO) {
  freeNs0AtomicType(_atomicDTO);
}

/**
 * Reads a AtomicDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the AtomicDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_atomic *xmlTextReaderReadNs0AtomicType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_atomic *_atomicDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_atomic));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0AtomicType(_atomicDTO);
        free(_atomicDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "valueTypeID", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}valueTypeID of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}valueTypeID of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AtomicType(_atomicDTO);
          free(_atomicDTO);
          return NULL;
        }

        _atomicDTO->valueTypeID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "valueTypeText", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}valueTypeText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}valueTypeText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AtomicType(_atomicDTO);
          free(_atomicDTO);
          return NULL;
        }

        _atomicDTO->valueTypeText = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "value", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}value of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}value of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AtomicType(_atomicDTO);
          free(_atomicDTO);
          return NULL;
        }

        _atomicDTO->value = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "units", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}units of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}units of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AtomicType(_atomicDTO);
          free(_atomicDTO);
          return NULL;
        }

        _atomicDTO->units = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "referenceRange", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}referenceRange of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}referenceRange of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AtomicType(_atomicDTO);
          free(_atomicDTO);
          return NULL;
        }

        _atomicDTO->referenceRange = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "abnormalFLagText", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}abnormalFLagText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}abnormalFLagText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AtomicType(_atomicDTO);
          free(_atomicDTO);
          return NULL;
        }

        _atomicDTO->abnormalFLagText = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "natureOfAbnormalTest", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}natureOfAbnormalTest of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}natureOfAbnormalTest of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AtomicType(_atomicDTO);
          free(_atomicDTO);
          return NULL;
        }

        _atomicDTO->natureOfAbnormalTest = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "statusText", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}statusText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}statusText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AtomicType(_atomicDTO);
          free(_atomicDTO);
          return NULL;
        }

        _atomicDTO->statusText = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}atomic.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}atomic. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _atomicDTO;
}

/**
 * Writes a AtomicDTO to XML.
 *
 * @param writer The XML writer.
 * @param _atomicDTO The AtomicDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0AtomicType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_atomic *_atomicDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_atomicDTO->valueTypeID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "valueTypeID", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}valueTypeID. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}valueTypeID...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_atomicDTO->valueTypeID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}valueTypeID. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}valueTypeID. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_atomicDTO->valueTypeText != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "valueTypeText", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}valueTypeText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}valueTypeText...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_atomicDTO->valueTypeText));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}valueTypeText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}valueTypeText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_atomicDTO->value != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "value", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}value. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}value...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_atomicDTO->value));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}value. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}value. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_atomicDTO->units != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "units", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}units. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}units...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_atomicDTO->units));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}units. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}units. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_atomicDTO->referenceRange != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "referenceRange", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}referenceRange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}referenceRange...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_atomicDTO->referenceRange));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}referenceRange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}referenceRange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_atomicDTO->abnormalFLagText != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "abnormalFLagText", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}abnormalFLagText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}abnormalFLagText...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_atomicDTO->abnormalFLagText));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}abnormalFLagText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}abnormalFLagText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_atomicDTO->natureOfAbnormalTest != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "natureOfAbnormalTest", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}natureOfAbnormalTest. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}natureOfAbnormalTest...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_atomicDTO->natureOfAbnormalTest));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}natureOfAbnormalTest. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}natureOfAbnormalTest. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_atomicDTO->statusText != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "statusText", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}statusText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}statusText...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_atomicDTO->statusText));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}statusText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}statusText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a AtomicDTO.
 *
 * @param _atomicDTO The AtomicDTO to free.
 */
static void freeNs0AtomicType(struct PatientFolderAPI_ns0_atomic *_atomicDTO) {
  int i;
  if (_atomicDTO->valueTypeID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor valueTypeID of type PatientFolderAPI_ns0_atomic...\n");
#endif
    freeXsStringType(_atomicDTO->valueTypeID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor valueTypeID of type PatientFolderAPI_ns0_atomic...\n");
#endif
    free(_atomicDTO->valueTypeID);
  }
  if (_atomicDTO->valueTypeText != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor valueTypeText of type PatientFolderAPI_ns0_atomic...\n");
#endif
    freeXsStringType(_atomicDTO->valueTypeText);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor valueTypeText of type PatientFolderAPI_ns0_atomic...\n");
#endif
    free(_atomicDTO->valueTypeText);
  }
  if (_atomicDTO->value != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor value of type PatientFolderAPI_ns0_atomic...\n");
#endif
    freeXsStringType(_atomicDTO->value);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor value of type PatientFolderAPI_ns0_atomic...\n");
#endif
    free(_atomicDTO->value);
  }
  if (_atomicDTO->units != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor units of type PatientFolderAPI_ns0_atomic...\n");
#endif
    freeXsStringType(_atomicDTO->units);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor units of type PatientFolderAPI_ns0_atomic...\n");
#endif
    free(_atomicDTO->units);
  }
  if (_atomicDTO->referenceRange != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor referenceRange of type PatientFolderAPI_ns0_atomic...\n");
#endif
    freeXsStringType(_atomicDTO->referenceRange);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor referenceRange of type PatientFolderAPI_ns0_atomic...\n");
#endif
    free(_atomicDTO->referenceRange);
  }
  if (_atomicDTO->abnormalFLagText != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor abnormalFLagText of type PatientFolderAPI_ns0_atomic...\n");
#endif
    freeXsStringType(_atomicDTO->abnormalFLagText);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor abnormalFLagText of type PatientFolderAPI_ns0_atomic...\n");
#endif
    free(_atomicDTO->abnormalFLagText);
  }
  if (_atomicDTO->natureOfAbnormalTest != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor natureOfAbnormalTest of type PatientFolderAPI_ns0_atomic...\n");
#endif
    freeXsStringType(_atomicDTO->natureOfAbnormalTest);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor natureOfAbnormalTest of type PatientFolderAPI_ns0_atomic...\n");
#endif
    free(_atomicDTO->natureOfAbnormalTest);
  }
  if (_atomicDTO->statusText != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor statusText of type PatientFolderAPI_ns0_atomic...\n");
#endif
    freeXsStringType(_atomicDTO->statusText);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor statusText of type PatientFolderAPI_ns0_atomic...\n");
#endif
    free(_atomicDTO->statusText);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_atomic_M */
#ifndef DEF_PatientFolderAPI_ns0_ClinicListItem_M
#define DEF_PatientFolderAPI_ns0_ClinicListItem_M

/**
 * Reads a ClinicListItemDTO element from XML. The element to be read is "ClinicListItem", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ClinicListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_ClinicListItem *xml_read_PatientFolderAPI_ns0_ClinicListItem(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ClinicListItemElement(reader);
}

/**
 * Writes a ClinicListItemDTO to XML under element name "ClinicListItem".
 *
 * @param writer The XML writer.
 * @param _clinicListItemDTO The ClinicListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_ClinicListItem(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO) {
  return xmlTextWriterWriteNs0ClinicListItemElementNS(writer, _clinicListItemDTO, 1);
}

/**
 * Frees a ClinicListItemDTO.
 *
 * @param _clinicListItemDTO The ClinicListItemDTO to free.
 */
void free_PatientFolderAPI_ns0_ClinicListItem(struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO) {
  freeNs0ClinicListItemType(_clinicListItemDTO);
  free(_clinicListItemDTO);
}

/**
 * Reads a ClinicListItemDTO element from XML. The element to be read is "ClinicListItem", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ClinicListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_ClinicListItem *xmlTextReaderReadNs0ClinicListItemElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ClinicListItem", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}ClinicListItem.\n");
#endif
    _clinicListItemDTO = xmlTextReaderReadNs0ClinicListItemType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_clinicListItemDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}ClinicListItem failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}ClinicListItem failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _clinicListItemDTO;
}

/**
 * Writes a ClinicListItemDTO to XML under element name "ClinicListItem".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _clinicListItemDTO The ClinicListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ClinicListItemElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO) {
  return xmlTextWriterWriteNs0ClinicListItemElementNS(writer, _clinicListItemDTO, 0);
}

/**
 * Writes a ClinicListItemDTO to XML under element name "ClinicListItem".
 *
 * @param writer The XML writer.
 * @param _clinicListItemDTO The ClinicListItemDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ClinicListItemElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ClinicListItem", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}ClinicListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}ClinicListItem for root element {}ClinicListItem...\n");
#endif
  status = xmlTextWriterWriteNs0ClinicListItemType(writer, _clinicListItemDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}ClinicListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}ClinicListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ClinicListItemDTO.
 *
 * @param _clinicListItemDTO The ClinicListItemDTO whose children are to be free.
 */
static void freeNs0ClinicListItemElement(struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO) {
  freeNs0ClinicListItemType(_clinicListItemDTO);
}

/**
 * Reads a ClinicListItemDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the ClinicListItemDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_ClinicListItem *xmlTextReaderReadNs0ClinicListItemType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_ClinicListItem));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ClinicListItemType(_clinicListItemDTO);
        free(_clinicListItemDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientIdNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClinicListItemType(_clinicListItemDTO);
          free(_clinicListItemDTO);
          return NULL;
        }

        _clinicListItemDTO->patientIdNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClinicListItemType(_clinicListItemDTO);
          free(_clinicListItemDTO);
          return NULL;
        }

        _clinicListItemDTO->patientSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClinicListItemType(_clinicListItemDTO);
          free(_clinicListItemDTO);
          return NULL;
        }

        _clinicListItemDTO->up = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Domain", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClinicListItemType(_clinicListItemDTO);
          free(_clinicListItemDTO);
          return NULL;
        }

        _clinicListItemDTO->domain = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Campus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClinicListItemType(_clinicListItemDTO);
          free(_clinicListItemDTO);
          return NULL;
        }

        _clinicListItemDTO->campus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Code", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClinicListItemType(_clinicListItemDTO);
          free(_clinicListItemDTO);
          return NULL;
        }

        _clinicListItemDTO->code = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ListId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClinicListItemType(_clinicListItemDTO);
          free(_clinicListItemDTO);
          return NULL;
        }

        _clinicListItemDTO->listId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ClinicListItemType(_clinicListItemDTO);
          free(_clinicListItemDTO);
          return NULL;
        }

        _clinicListItemDTO->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}ClinicListItem.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}ClinicListItem. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _clinicListItemDTO;
}

/**
 * Writes a ClinicListItemDTO to XML.
 *
 * @param writer The XML writer.
 * @param _clinicListItemDTO The ClinicListItemDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ClinicListItemType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_clinicListItemDTO->patientIdNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientIdNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_clinicListItemDTO->patientIdNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_clinicListItemDTO->patientSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_clinicListItemDTO->patientSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_clinicListItemDTO->up != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}up...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_clinicListItemDTO->up));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_clinicListItemDTO->domain != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Domain", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Domain. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Domain...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_clinicListItemDTO->domain));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Domain. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Domain. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_clinicListItemDTO->campus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Campus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Campus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_clinicListItemDTO->campus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_clinicListItemDTO->code != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Code", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Code...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_clinicListItemDTO->code));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_clinicListItemDTO->listId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ListId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ListId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_clinicListItemDTO->listId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_clinicListItemDTO->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_clinicListItemDTO->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ClinicListItemDTO.
 *
 * @param _clinicListItemDTO The ClinicListItemDTO to free.
 */
static void freeNs0ClinicListItemType(struct PatientFolderAPI_ns0_ClinicListItem *_clinicListItemDTO) {
  int i;
  if (_clinicListItemDTO->patientIdNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientIdNs of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    freeXsStringType(_clinicListItemDTO->patientIdNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientIdNs of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    free(_clinicListItemDTO->patientIdNs);
  }
  if (_clinicListItemDTO->patientSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientSrc of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    freeXsStringType(_clinicListItemDTO->patientSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientSrc of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    free(_clinicListItemDTO->patientSrc);
  }
  if (_clinicListItemDTO->up != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor up of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    freeXsStringType(_clinicListItemDTO->up);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor up of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    free(_clinicListItemDTO->up);
  }
  if (_clinicListItemDTO->domain != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor domain of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    freeXsStringType(_clinicListItemDTO->domain);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor domain of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    free(_clinicListItemDTO->domain);
  }
  if (_clinicListItemDTO->campus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor campus of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    freeXsStringType(_clinicListItemDTO->campus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor campus of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    free(_clinicListItemDTO->campus);
  }
  if (_clinicListItemDTO->code != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor code of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    freeXsStringType(_clinicListItemDTO->code);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor code of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    free(_clinicListItemDTO->code);
  }
  if (_clinicListItemDTO->listId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor listId of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    freeXsStringType(_clinicListItemDTO->listId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor listId of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    free(_clinicListItemDTO->listId);
  }
  if (_clinicListItemDTO->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    freeXsStringType(_clinicListItemDTO->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type PatientFolderAPI_ns0_ClinicListItem...\n");
#endif
    free(_clinicListItemDTO->description);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_ClinicListItem_M */
#ifndef DEF_PatientFolderAPI_ns0_copiesto_M
#define DEF_PatientFolderAPI_ns0_copiesto_M

/**
 * Reads a CopiesToDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the CopiesToDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_copiesto *xmlTextReaderReadNs0CopiestoType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_copiesto *_copiesToDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_copiesto));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0CopiestoType(_copiesToDTO);
        free(_copiesToDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "doctor", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}doctor of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}doctor of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0CopiestoType(_copiesToDTO);
          free(_copiesToDTO);
          return NULL;
        }

        _copiesToDTO->doctor = realloc(_copiesToDTO->doctor, (_copiesToDTO->_sizeof_doctor + 1) * sizeof(xmlChar));
        memcpy(&(_copiesToDTO->doctor[_copiesToDTO->_sizeof_doctor++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}copiesto.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}copiesto. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _copiesToDTO;
}

/**
 * Writes a CopiesToDTO to XML.
 *
 * @param writer The XML writer.
 * @param _copiesToDTO The CopiesToDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0CopiestoType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_copiesto *_copiesToDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _copiesToDTO->_sizeof_doctor; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "doctor", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}doctor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}doctor...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_copiesToDTO->doctor[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}doctor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}doctor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a CopiesToDTO.
 *
 * @param _copiesToDTO The CopiesToDTO to free.
 */
static void freeNs0CopiestoType(struct PatientFolderAPI_ns0_copiesto *_copiesToDTO) {
  int i;
  if (_copiesToDTO->doctor != NULL) {
    for (i = 0; i < _copiesToDTO->_sizeof_doctor; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor doctor[%i] of type PatientFolderAPI_ns0_copiesto...\n", i);
#endif
      freeXsStringType(&(_copiesToDTO->doctor[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor doctor of type PatientFolderAPI_ns0_copiesto...\n");
#endif
    free(_copiesToDTO->doctor);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_copiesto_M */
#ifndef DEF_PatientFolderAPI_ns0_docTypeSpecificDTO_M
#define DEF_PatientFolderAPI_ns0_docTypeSpecificDTO_M

/**
 * Reads a DocTypeSpecificDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the DocTypeSpecificDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_docTypeSpecificDTO *xmlTextReaderReadNs0DocTypeSpecificDTOType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_docTypeSpecificDTO *_docTypeSpecificDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_docTypeSpecificDTO));




  return _docTypeSpecificDTO;
}

/**
 * Writes a DocTypeSpecificDTO to XML.
 *
 * @param writer The XML writer.
 * @param _docTypeSpecificDTO The DocTypeSpecificDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0DocTypeSpecificDTOType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_docTypeSpecificDTO *_docTypeSpecificDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a DocTypeSpecificDTO.
 *
 * @param _docTypeSpecificDTO The DocTypeSpecificDTO to free.
 */
static void freeNs0DocTypeSpecificDTOType(struct PatientFolderAPI_ns0_docTypeSpecificDTO *_docTypeSpecificDTO) {
  int i;
}
#endif /* DEF_PatientFolderAPI_ns0_docTypeSpecificDTO_M */
#ifndef DEF_PatientFolderAPI_ns0_Document_M
#define DEF_PatientFolderAPI_ns0_Document_M

/**
 * Reads a DocumentDTO element from XML. The element to be read is "Document", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The DocumentDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Document *xml_read_PatientFolderAPI_ns0_Document(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0DocumentElement(reader);
}

/**
 * Writes a DocumentDTO to XML under element name "Document".
 *
 * @param writer The XML writer.
 * @param _documentDTO The DocumentDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_Document(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Document *_documentDTO) {
  return xmlTextWriterWriteNs0DocumentElementNS(writer, _documentDTO, 1);
}

/**
 * Frees a DocumentDTO.
 *
 * @param _documentDTO The DocumentDTO to free.
 */
void free_PatientFolderAPI_ns0_Document(struct PatientFolderAPI_ns0_Document *_documentDTO) {
  freeNs0DocumentType(_documentDTO);
  free(_documentDTO);
}

/**
 * Reads a DocumentDTO element from XML. The element to be read is "Document", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The DocumentDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Document *xmlTextReaderReadNs0DocumentElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_Document *_documentDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Document", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}Document.\n");
#endif
    _documentDTO = xmlTextReaderReadNs0DocumentType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_documentDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}Document failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}Document failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _documentDTO;
}

/**
 * Writes a DocumentDTO to XML under element name "Document".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _documentDTO The DocumentDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0DocumentElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Document *_documentDTO) {
  return xmlTextWriterWriteNs0DocumentElementNS(writer, _documentDTO, 0);
}

/**
 * Writes a DocumentDTO to XML under element name "Document".
 *
 * @param writer The XML writer.
 * @param _documentDTO The DocumentDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0DocumentElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Document *_documentDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Document", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}Document. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}Document for root element {}Document...\n");
#endif
  status = xmlTextWriterWriteNs0DocumentType(writer, _documentDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}Document. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}Document. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a DocumentDTO.
 *
 * @param _documentDTO The DocumentDTO whose children are to be free.
 */
static void freeNs0DocumentElement(struct PatientFolderAPI_ns0_Document *_documentDTO) {
  freeNs0DocumentType(_documentDTO);
}

/**
 * Reads a DocumentDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the DocumentDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_Document *xmlTextReaderReadNs0DocumentType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_Document *_documentDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_Document));

  if (xmlTextReaderHasAttributes(reader)) {
    while (xmlTextReaderMoveToNextAttribute(reader)) {
      if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}src...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}src of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }
        _documentDTO->src = ((xmlChar*)_child_accessor);
        continue;
      }
    }

    status = xmlTextReaderMoveToElement(reader);
    if (status < 1) {
      //panic: unable to return to the element node.
#if DEBUG_ENUNCIATE
      printf("Unable to return to element node from attributes.\n");
#endif
      freeNs0DocumentType(_documentDTO);
      free(_documentDTO);
      return NULL;
    }
  }


  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0DocumentType(_documentDTO);
        free(_documentDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientIdNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->patientIdNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->patientSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->up = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "MasterID", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}MasterID of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}MasterID of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->masterID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DocumentCode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DocumentCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DocumentCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->documentCode = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DocumentDesc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DocumentDesc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DocumentDesc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->documentDesc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Section", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Section of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Section of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->section = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Episode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Episode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Episode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->episode = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "MimeType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}MimeType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}MimeType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->mimeType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DocumentDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DocumentDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DocumentDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->documentDate = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "PageNumber", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}PageNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}PageNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->pageNumber = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "State", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}State of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}State of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->state = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Urno", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->urno = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "PatientNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->patientNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DocumentSource", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DocumentSource of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DocumentSource of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->documentSource = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DocumentTime", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DocumentTime of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DocumentTime of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->documentTime = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ScannedDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ScannedDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ScannedDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->scannedDate = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DocumentType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DocumentType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DocumentType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->documentType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "url", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}url of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}url of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->url = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DocTypeSpecific", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DocTypeSpecific of type {}docTypeSpecificDTO.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0DocTypeSpecificDTOType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DocTypeSpecific of type {}docTypeSpecificDTO.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0DocumentType(_documentDTO);
          free(_documentDTO);
          return NULL;
        }

        _documentDTO->docTypeSpecific = ((struct PatientFolderAPI_ns0_docTypeSpecificDTO*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}Document.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}Document. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _documentDTO;
}

/**
 * Writes a DocumentDTO to XML.
 *
 * @param writer The XML writer.
 * @param _documentDTO The DocumentDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0DocumentType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Document *_documentDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_documentDTO->src != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}src. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}src...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->src));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->patientIdNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientIdNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->patientIdNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->patientSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->patientSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->up != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}up...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->up));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->masterID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "MasterID", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}MasterID. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}MasterID...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->masterID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}MasterID. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}MasterID. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->documentCode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentCode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DocumentCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentCode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->documentCode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DocumentCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->documentDesc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentDesc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DocumentDesc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentDesc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->documentDesc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentDesc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DocumentDesc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->section != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Section", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Section. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Section...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->section));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Section. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Section. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->episode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Episode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Episode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Episode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->episode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Episode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Episode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->mimeType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "MimeType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}MimeType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}MimeType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->mimeType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}MimeType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}MimeType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->documentDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DocumentDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentDate...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->documentDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DocumentDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->pageNumber != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PageNumber", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}PageNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}PageNumber...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->pageNumber));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}PageNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}PageNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->state != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "State", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}State. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}State...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->state));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}State. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}State. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->urno != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Urno", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Urno. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Urno...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->urno));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Urno. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Urno. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->patientNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PatientNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}PatientNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}PatientNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->patientNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}PatientNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}PatientNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->documentSource != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentSource", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DocumentSource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentSource...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->documentSource));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentSource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DocumentSource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->documentTime != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentTime", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DocumentTime. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentTime...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->documentTime));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentTime. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DocumentTime. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->scannedDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ScannedDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ScannedDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ScannedDate...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->scannedDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ScannedDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ScannedDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->documentType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DocumentType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->documentType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DocumentType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DocumentType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->url != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "url", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}url. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}url...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_documentDTO->url));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}url. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}url. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_documentDTO->docTypeSpecific != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocTypeSpecific", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DocTypeSpecific. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}docTypeSpecificDTO for element {}DocTypeSpecific...\n");
#endif
    status = xmlTextWriterWriteNs0DocTypeSpecificDTOType(writer, (_documentDTO->docTypeSpecific));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}docTypeSpecificDTO for element {}DocTypeSpecific. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DocTypeSpecific. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a DocumentDTO.
 *
 * @param _documentDTO The DocumentDTO to free.
 */
static void freeNs0DocumentType(struct PatientFolderAPI_ns0_Document *_documentDTO) {
  int i;
  if (_documentDTO->src != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor src of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->src);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor src of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->src);
  }
  if (_documentDTO->patientIdNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientIdNs of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->patientIdNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientIdNs of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->patientIdNs);
  }
  if (_documentDTO->patientSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientSrc of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->patientSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientSrc of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->patientSrc);
  }
  if (_documentDTO->up != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor up of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->up);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor up of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->up);
  }
  if (_documentDTO->masterID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor masterID of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->masterID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor masterID of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->masterID);
  }
  if (_documentDTO->documentCode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor documentCode of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->documentCode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor documentCode of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->documentCode);
  }
  if (_documentDTO->documentDesc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor documentDesc of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->documentDesc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor documentDesc of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->documentDesc);
  }
  if (_documentDTO->section != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor section of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->section);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor section of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->section);
  }
  if (_documentDTO->episode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor episode of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->episode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor episode of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->episode);
  }
  if (_documentDTO->mimeType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor mimeType of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->mimeType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor mimeType of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->mimeType);
  }
  if (_documentDTO->documentDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor documentDate of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->documentDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor documentDate of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->documentDate);
  }
  if (_documentDTO->pageNumber != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor pageNumber of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->pageNumber);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor pageNumber of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->pageNumber);
  }
  if (_documentDTO->state != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor state of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->state);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor state of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->state);
  }
  if (_documentDTO->urno != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor urno of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->urno);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor urno of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->urno);
  }
  if (_documentDTO->patientNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientNs of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->patientNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientNs of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->patientNs);
  }
  if (_documentDTO->documentSource != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor documentSource of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->documentSource);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor documentSource of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->documentSource);
  }
  if (_documentDTO->documentTime != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor documentTime of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->documentTime);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor documentTime of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->documentTime);
  }
  if (_documentDTO->scannedDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor scannedDate of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->scannedDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor scannedDate of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->scannedDate);
  }
  if (_documentDTO->documentType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor documentType of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->documentType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor documentType of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->documentType);
  }
  if (_documentDTO->url != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor url of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeXsStringType(_documentDTO->url);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor url of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->url);
  }
  if (_documentDTO->docTypeSpecific != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor docTypeSpecific of type PatientFolderAPI_ns0_Document...\n");
#endif
    freeNs0DocTypeSpecificDTOType(_documentDTO->docTypeSpecific);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor docTypeSpecific of type PatientFolderAPI_ns0_Document...\n");
#endif
    free(_documentDTO->docTypeSpecific);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_Document_M */
#ifndef DEF_PatientFolderAPI_ns0_entry_M
#define DEF_PatientFolderAPI_ns0_entry_M

/**
 * Reads a EntryDTO element from XML. The element to be read is "entry", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The EntryDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_entry *xml_read_PatientFolderAPI_ns0_entry(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0EntryElement(reader);
}

/**
 * Writes a EntryDTO to XML under element name "entry".
 *
 * @param writer The XML writer.
 * @param _entryDTO The EntryDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_entry(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_entry *_entryDTO) {
  return xmlTextWriterWriteNs0EntryElementNS(writer, _entryDTO, 1);
}

/**
 * Frees a EntryDTO.
 *
 * @param _entryDTO The EntryDTO to free.
 */
void free_PatientFolderAPI_ns0_entry(struct PatientFolderAPI_ns0_entry *_entryDTO) {
  freeNs0EntryType(_entryDTO);
  free(_entryDTO);
}

/**
 * Reads a EntryDTO element from XML. The element to be read is "entry", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The EntryDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_entry *xmlTextReaderReadNs0EntryElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_entry *_entryDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "entry", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}entry.\n");
#endif
    _entryDTO = xmlTextReaderReadNs0EntryType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_entryDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}entry failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}entry failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _entryDTO;
}

/**
 * Writes a EntryDTO to XML under element name "entry".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _entryDTO The EntryDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0EntryElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_entry *_entryDTO) {
  return xmlTextWriterWriteNs0EntryElementNS(writer, _entryDTO, 0);
}

/**
 * Writes a EntryDTO to XML under element name "entry".
 *
 * @param writer The XML writer.
 * @param _entryDTO The EntryDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0EntryElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_entry *_entryDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "entry", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}entry. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}entry for root element {}entry...\n");
#endif
  status = xmlTextWriterWriteNs0EntryType(writer, _entryDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}entry. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}entry. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a EntryDTO.
 *
 * @param _entryDTO The EntryDTO whose children are to be free.
 */
static void freeNs0EntryElement(struct PatientFolderAPI_ns0_entry *_entryDTO) {
  freeNs0EntryType(_entryDTO);
}

/**
 * Reads a EntryDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the EntryDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_entry *xmlTextReaderReadNs0EntryType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_entry *_entryDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_entry));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0EntryType(_entryDTO);
        free(_entryDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EntryType(_entryDTO);
          free(_entryDTO);
          return NULL;
        }

        _entryDTO->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "label", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}label of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}label of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EntryType(_entryDTO);
          free(_entryDTO);
          return NULL;
        }

        _entryDTO->label = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}entry.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}entry. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _entryDTO;
}

/**
 * Writes a EntryDTO to XML.
 *
 * @param writer The XML writer.
 * @param _entryDTO The EntryDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0EntryType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_entry *_entryDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_entryDTO->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_entryDTO->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_entryDTO->label != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "label", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}label. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}label...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_entryDTO->label));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}label. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}label. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a EntryDTO.
 *
 * @param _entryDTO The EntryDTO to free.
 */
static void freeNs0EntryType(struct PatientFolderAPI_ns0_entry *_entryDTO) {
  int i;
  if (_entryDTO->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type PatientFolderAPI_ns0_entry...\n");
#endif
    freeXsStringType(_entryDTO->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type PatientFolderAPI_ns0_entry...\n");
#endif
    free(_entryDTO->name);
  }
  if (_entryDTO->label != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor label of type PatientFolderAPI_ns0_entry...\n");
#endif
    freeXsStringType(_entryDTO->label);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor label of type PatientFolderAPI_ns0_entry...\n");
#endif
    free(_entryDTO->label);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_entry_M */
#ifndef DEF_PatientFolderAPI_ns0_Episode_M
#define DEF_PatientFolderAPI_ns0_Episode_M

/**
 * Reads a EpisodeDTO element from XML. The element to be read is "Episode", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The EpisodeDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Episode *xml_read_PatientFolderAPI_ns0_Episode(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0EpisodeElement(reader);
}

/**
 * Writes a EpisodeDTO to XML under element name "Episode".
 *
 * @param writer The XML writer.
 * @param _episodeDTO The EpisodeDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_Episode(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Episode *_episodeDTO) {
  return xmlTextWriterWriteNs0EpisodeElementNS(writer, _episodeDTO, 1);
}

/**
 * Frees a EpisodeDTO.
 *
 * @param _episodeDTO The EpisodeDTO to free.
 */
void free_PatientFolderAPI_ns0_Episode(struct PatientFolderAPI_ns0_Episode *_episodeDTO) {
  freeNs0EpisodeType(_episodeDTO);
  free(_episodeDTO);
}

/**
 * Reads a EpisodeDTO element from XML. The element to be read is "Episode", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The EpisodeDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Episode *xmlTextReaderReadNs0EpisodeElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_Episode *_episodeDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Episode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}Episode.\n");
#endif
    _episodeDTO = xmlTextReaderReadNs0EpisodeType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_episodeDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}Episode failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}Episode failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _episodeDTO;
}

/**
 * Writes a EpisodeDTO to XML under element name "Episode".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _episodeDTO The EpisodeDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0EpisodeElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Episode *_episodeDTO) {
  return xmlTextWriterWriteNs0EpisodeElementNS(writer, _episodeDTO, 0);
}

/**
 * Writes a EpisodeDTO to XML under element name "Episode".
 *
 * @param writer The XML writer.
 * @param _episodeDTO The EpisodeDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0EpisodeElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Episode *_episodeDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Episode", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}Episode. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}Episode for root element {}Episode...\n");
#endif
  status = xmlTextWriterWriteNs0EpisodeType(writer, _episodeDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}Episode. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}Episode. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a EpisodeDTO.
 *
 * @param _episodeDTO The EpisodeDTO whose children are to be free.
 */
static void freeNs0EpisodeElement(struct PatientFolderAPI_ns0_Episode *_episodeDTO) {
  freeNs0EpisodeType(_episodeDTO);
}

/**
 * Reads a EpisodeDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the EpisodeDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_Episode *xmlTextReaderReadNs0EpisodeType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_Episode *_episodeDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_Episode));

  if (xmlTextReaderHasAttributes(reader)) {
    while (xmlTextReaderMoveToNextAttribute(reader)) {
      if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}src...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}src of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }
        _episodeDTO->src = ((xmlChar*)_child_accessor);
        continue;
      }
    }

    status = xmlTextReaderMoveToElement(reader);
    if (status < 1) {
      //panic: unable to return to the element node.
#if DEBUG_ENUNCIATE
      printf("Unable to return to element node from attributes.\n");
#endif
      freeNs0EpisodeType(_episodeDTO);
      free(_episodeDTO);
      return NULL;
    }
  }


  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0EpisodeType(_episodeDTO);
        free(_episodeDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientIdNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->patientIdNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->patientSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->up = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "intId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}intId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}intId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->intId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "extId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}extId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}extId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->extId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "extNS", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}extNS of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}extNS of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->extNS = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientURNO", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientURNO of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientURNO of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->patientURNO = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ward_code", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ward_code of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ward_code of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->ward_code = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "service_type", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}service_type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}service_type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->service_type = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "care_type", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}care_type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}care_type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->care_type = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "EpisodeId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}EpisodeId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}EpisodeId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->episodeId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "EpisodeNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}EpisodeNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}EpisodeNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->episodeNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Type", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->type = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "State", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}State of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}State of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->state = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Start", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Start of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Start of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->start = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "End", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}End of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}End of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->end = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Campus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->campus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "WardCode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}WardCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}WardCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->wardCode = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "WardDescription", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}WardDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}WardDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->wardDescription = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "UnitCode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}UnitCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}UnitCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->unitCode = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "UnitDescription", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}UnitDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}UnitDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->unitDescription = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "BedCode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}BedCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}BedCode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->bedCode = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "BedDescription", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}BedDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}BedDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->bedDescription = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ServiceType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ServiceType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ServiceType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->serviceType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "CareType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}CareType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}CareType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->careType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DoctorId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DoctorId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DoctorId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->doctorId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DoctorFamily", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DoctorFamily of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DoctorFamily of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->doctorFamily = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "doctorGiven", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}doctorGiven of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}doctorGiven of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->doctorGiven = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DRG", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DRG of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DRG of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->drg = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "LOS", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}LOS of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}LOS of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->los = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "NoOfDocuments", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}NoOfDocuments of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}NoOfDocuments of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->noOfDocuments = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "StartDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}StartDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}StartDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->startDate = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "EndDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}EndDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}EndDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->endDate = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "FinancialClass", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}FinancialClass of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}FinancialClass of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EpisodeType(_episodeDTO);
          free(_episodeDTO);
          return NULL;
        }

        _episodeDTO->financialClass = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}Episode.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}Episode. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _episodeDTO;
}

/**
 * Writes a EpisodeDTO to XML.
 *
 * @param writer The XML writer.
 * @param _episodeDTO The EpisodeDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0EpisodeType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Episode *_episodeDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_episodeDTO->src != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}src. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}src...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->src));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->patientIdNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientIdNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->patientIdNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->patientSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->patientSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->up != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}up...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->up));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->intId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "intId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}intId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}intId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->intId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}intId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}intId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->extId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}extId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}extId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->extId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}extId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}extId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->extNS != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extNS", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}extNS. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}extNS...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->extNS));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}extNS. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}extNS. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->patientURNO != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientURNO", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientURNO. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientURNO...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->patientURNO));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientURNO. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientURNO. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->ward_code != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ward_code", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ward_code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ward_code...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->ward_code));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ward_code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ward_code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->service_type != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "service_type", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}service_type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}service_type...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->service_type));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}service_type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}service_type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->care_type != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "care_type", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}care_type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}care_type...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->care_type));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}care_type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}care_type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->episodeId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "EpisodeId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}EpisodeId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}EpisodeId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->episodeId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}EpisodeId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}EpisodeId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->episodeNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "EpisodeNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}EpisodeNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}EpisodeNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->episodeNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}EpisodeNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}EpisodeNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->type != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Type", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Type...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->type));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->state != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "State", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}State. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}State...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->state));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}State. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}State. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->start != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Start", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Start. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Start...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->start));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Start. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Start. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->end != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "End", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}End. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}End...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->end));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}End. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}End. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->campus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Campus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Campus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->campus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->wardCode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "WardCode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}WardCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}WardCode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->wardCode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}WardCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}WardCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->wardDescription != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "WardDescription", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}WardDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}WardDescription...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->wardDescription));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}WardDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}WardDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->unitCode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "UnitCode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}UnitCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}UnitCode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->unitCode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}UnitCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}UnitCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->unitDescription != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "UnitDescription", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}UnitDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}UnitDescription...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->unitDescription));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}UnitDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}UnitDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->bedCode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "BedCode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}BedCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}BedCode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->bedCode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}BedCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}BedCode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->bedDescription != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "BedDescription", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}BedDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}BedDescription...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->bedDescription));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}BedDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}BedDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->serviceType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ServiceType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ServiceType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ServiceType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->serviceType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ServiceType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ServiceType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->careType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "CareType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}CareType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}CareType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->careType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}CareType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}CareType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->doctorId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DoctorId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DoctorId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DoctorId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->doctorId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DoctorId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DoctorId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->doctorFamily != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DoctorFamily", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DoctorFamily. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DoctorFamily...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->doctorFamily));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DoctorFamily. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DoctorFamily. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->doctorGiven != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "doctorGiven", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}doctorGiven. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}doctorGiven...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->doctorGiven));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}doctorGiven. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}doctorGiven. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->drg != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DRG", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DRG. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}DRG...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->drg));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}DRG. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DRG. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->los != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "LOS", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}LOS. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}LOS...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->los));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}LOS. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}LOS. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->noOfDocuments != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "NoOfDocuments", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}NoOfDocuments. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}NoOfDocuments...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->noOfDocuments));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}NoOfDocuments. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}NoOfDocuments. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->startDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "StartDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}StartDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}StartDate...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->startDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}StartDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}StartDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->endDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "EndDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}EndDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}EndDate...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->endDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}EndDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}EndDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_episodeDTO->financialClass != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "FinancialClass", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}FinancialClass. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}FinancialClass...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_episodeDTO->financialClass));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}FinancialClass. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}FinancialClass. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a EpisodeDTO.
 *
 * @param _episodeDTO The EpisodeDTO to free.
 */
static void freeNs0EpisodeType(struct PatientFolderAPI_ns0_Episode *_episodeDTO) {
  int i;
  if (_episodeDTO->src != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor src of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->src);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor src of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->src);
  }
  if (_episodeDTO->patientIdNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientIdNs of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->patientIdNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientIdNs of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->patientIdNs);
  }
  if (_episodeDTO->patientSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientSrc of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->patientSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientSrc of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->patientSrc);
  }
  if (_episodeDTO->up != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor up of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->up);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor up of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->up);
  }
  if (_episodeDTO->intId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor intId of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->intId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor intId of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->intId);
  }
  if (_episodeDTO->extId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor extId of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->extId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor extId of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->extId);
  }
  if (_episodeDTO->extNS != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor extNS of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->extNS);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor extNS of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->extNS);
  }
  if (_episodeDTO->patientURNO != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientURNO of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->patientURNO);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientURNO of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->patientURNO);
  }
  if (_episodeDTO->ward_code != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ward_code of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->ward_code);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ward_code of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->ward_code);
  }
  if (_episodeDTO->service_type != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor service_type of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->service_type);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor service_type of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->service_type);
  }
  if (_episodeDTO->care_type != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor care_type of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->care_type);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor care_type of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->care_type);
  }
  if (_episodeDTO->episodeId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor episodeId of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->episodeId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor episodeId of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->episodeId);
  }
  if (_episodeDTO->episodeNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor episodeNs of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->episodeNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor episodeNs of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->episodeNs);
  }
  if (_episodeDTO->type != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor type of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->type);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor type of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->type);
  }
  if (_episodeDTO->state != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor state of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->state);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor state of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->state);
  }
  if (_episodeDTO->start != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor start of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->start);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor start of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->start);
  }
  if (_episodeDTO->end != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor end of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->end);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor end of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->end);
  }
  if (_episodeDTO->campus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor campus of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->campus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor campus of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->campus);
  }
  if (_episodeDTO->wardCode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor wardCode of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->wardCode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor wardCode of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->wardCode);
  }
  if (_episodeDTO->wardDescription != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor wardDescription of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->wardDescription);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor wardDescription of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->wardDescription);
  }
  if (_episodeDTO->unitCode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor unitCode of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->unitCode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor unitCode of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->unitCode);
  }
  if (_episodeDTO->unitDescription != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor unitDescription of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->unitDescription);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor unitDescription of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->unitDescription);
  }
  if (_episodeDTO->bedCode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor bedCode of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->bedCode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor bedCode of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->bedCode);
  }
  if (_episodeDTO->bedDescription != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor bedDescription of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->bedDescription);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor bedDescription of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->bedDescription);
  }
  if (_episodeDTO->serviceType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor serviceType of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->serviceType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor serviceType of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->serviceType);
  }
  if (_episodeDTO->careType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor careType of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->careType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor careType of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->careType);
  }
  if (_episodeDTO->doctorId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor doctorId of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->doctorId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor doctorId of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->doctorId);
  }
  if (_episodeDTO->doctorFamily != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor doctorFamily of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->doctorFamily);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor doctorFamily of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->doctorFamily);
  }
  if (_episodeDTO->doctorGiven != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor doctorGiven of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->doctorGiven);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor doctorGiven of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->doctorGiven);
  }
  if (_episodeDTO->drg != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor drg of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->drg);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor drg of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->drg);
  }
  if (_episodeDTO->los != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor los of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->los);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor los of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->los);
  }
  if (_episodeDTO->noOfDocuments != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor noOfDocuments of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->noOfDocuments);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor noOfDocuments of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->noOfDocuments);
  }
  if (_episodeDTO->startDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor startDate of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->startDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor startDate of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->startDate);
  }
  if (_episodeDTO->endDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor endDate of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->endDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor endDate of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->endDate);
  }
  if (_episodeDTO->financialClass != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor financialClass of type PatientFolderAPI_ns0_Episode...\n");
#endif
    freeXsStringType(_episodeDTO->financialClass);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor financialClass of type PatientFolderAPI_ns0_Episode...\n");
#endif
    free(_episodeDTO->financialClass);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_Episode_M */
#ifndef DEF_PatientFolderAPI_ns0_extId_M
#define DEF_PatientFolderAPI_ns0_extId_M

/**
 * Reads a ExtIdDTO element from XML. The element to be read is "extId", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ExtIdDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_extId *xml_read_PatientFolderAPI_ns0_extId(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ExtIdElement(reader);
}

/**
 * Writes a ExtIdDTO to XML under element name "extId".
 *
 * @param writer The XML writer.
 * @param _extIdDTO The ExtIdDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_extId(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_extId *_extIdDTO) {
  return xmlTextWriterWriteNs0ExtIdElementNS(writer, _extIdDTO, 1);
}

/**
 * Frees a ExtIdDTO.
 *
 * @param _extIdDTO The ExtIdDTO to free.
 */
void free_PatientFolderAPI_ns0_extId(struct PatientFolderAPI_ns0_extId *_extIdDTO) {
  freeNs0ExtIdType(_extIdDTO);
  free(_extIdDTO);
}

/**
 * Reads a ExtIdDTO element from XML. The element to be read is "extId", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ExtIdDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_extId *xmlTextReaderReadNs0ExtIdElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_extId *_extIdDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "extId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}extId.\n");
#endif
    _extIdDTO = xmlTextReaderReadNs0ExtIdType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_extIdDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}extId failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}extId failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _extIdDTO;
}

/**
 * Writes a ExtIdDTO to XML under element name "extId".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _extIdDTO The ExtIdDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ExtIdElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_extId *_extIdDTO) {
  return xmlTextWriterWriteNs0ExtIdElementNS(writer, _extIdDTO, 0);
}

/**
 * Writes a ExtIdDTO to XML under element name "extId".
 *
 * @param writer The XML writer.
 * @param _extIdDTO The ExtIdDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ExtIdElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_extId *_extIdDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extId", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}extId. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}extId for root element {}extId...\n");
#endif
  status = xmlTextWriterWriteNs0ExtIdType(writer, _extIdDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}extId. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}extId. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ExtIdDTO.
 *
 * @param _extIdDTO The ExtIdDTO whose children are to be free.
 */
static void freeNs0ExtIdElement(struct PatientFolderAPI_ns0_extId *_extIdDTO) {
  freeNs0ExtIdType(_extIdDTO);
}

/**
 * Reads a ExtIdDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the ExtIdDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_extId *xmlTextReaderReadNs0ExtIdType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_extId *_extIdDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_extId));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ExtIdType(_extIdDTO);
        free(_extIdDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "extIdVal", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}extIdVal of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}extIdVal of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ExtIdType(_extIdDTO);
          free(_extIdDTO);
          return NULL;
        }

        _extIdDTO->extIdVal = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "extNsVal", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}extNsVal of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}extNsVal of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ExtIdType(_extIdDTO);
          free(_extIdDTO);
          return NULL;
        }

        _extIdDTO->extNsVal = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}extId.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}extId. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _extIdDTO;
}

/**
 * Writes a ExtIdDTO to XML.
 *
 * @param writer The XML writer.
 * @param _extIdDTO The ExtIdDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ExtIdType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_extId *_extIdDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_extIdDTO->extIdVal != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extIdVal", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}extIdVal. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}extIdVal...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_extIdDTO->extIdVal));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}extIdVal. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}extIdVal. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_extIdDTO->extNsVal != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extNsVal", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}extNsVal. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}extNsVal...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_extIdDTO->extNsVal));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}extNsVal. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}extNsVal. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ExtIdDTO.
 *
 * @param _extIdDTO The ExtIdDTO to free.
 */
static void freeNs0ExtIdType(struct PatientFolderAPI_ns0_extId *_extIdDTO) {
  int i;
  if (_extIdDTO->extIdVal != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor extIdVal of type PatientFolderAPI_ns0_extId...\n");
#endif
    freeXsStringType(_extIdDTO->extIdVal);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor extIdVal of type PatientFolderAPI_ns0_extId...\n");
#endif
    free(_extIdDTO->extIdVal);
  }
  if (_extIdDTO->extNsVal != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor extNsVal of type PatientFolderAPI_ns0_extId...\n");
#endif
    freeXsStringType(_extIdDTO->extNsVal);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor extNsVal of type PatientFolderAPI_ns0_extId...\n");
#endif
    free(_extIdDTO->extNsVal);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_extId_M */
#ifndef DEF_PatientFolderAPI_ns0_image_M
#define DEF_PatientFolderAPI_ns0_image_M

/**
 * Reads a ImageDTO element from XML. The element to be read is "image", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ImageDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_image *xml_read_PatientFolderAPI_ns0_image(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ImageElement(reader);
}

/**
 * Writes a ImageDTO to XML under element name "image".
 *
 * @param writer The XML writer.
 * @param _imageDTO The ImageDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_image(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_image *_imageDTO) {
  return xmlTextWriterWriteNs0ImageElementNS(writer, _imageDTO, 1);
}

/**
 * Frees a ImageDTO.
 *
 * @param _imageDTO The ImageDTO to free.
 */
void free_PatientFolderAPI_ns0_image(struct PatientFolderAPI_ns0_image *_imageDTO) {
  freeNs0ImageType(_imageDTO);
  free(_imageDTO);
}

/**
 * Reads a ImageDTO element from XML. The element to be read is "image", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ImageDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_image *xmlTextReaderReadNs0ImageElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_image *_imageDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "image", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}image.\n");
#endif
    _imageDTO = xmlTextReaderReadNs0ImageType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_imageDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}image failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}image failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _imageDTO;
}

/**
 * Writes a ImageDTO to XML under element name "image".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _imageDTO The ImageDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ImageElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_image *_imageDTO) {
  return xmlTextWriterWriteNs0ImageElementNS(writer, _imageDTO, 0);
}

/**
 * Writes a ImageDTO to XML under element name "image".
 *
 * @param writer The XML writer.
 * @param _imageDTO The ImageDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ImageElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_image *_imageDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "image", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}image. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}image for root element {}image...\n");
#endif
  status = xmlTextWriterWriteNs0ImageType(writer, _imageDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}image. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}image. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ImageDTO.
 *
 * @param _imageDTO The ImageDTO whose children are to be free.
 */
static void freeNs0ImageElement(struct PatientFolderAPI_ns0_image *_imageDTO) {
  freeNs0ImageType(_imageDTO);
}

/**
 * Reads a ImageDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the ImageDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_image *xmlTextReaderReadNs0ImageType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_image *_imageDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_image));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ImageType(_imageDTO);
        free(_imageDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "data", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read binary data of choice {}data.\n");
#endif
        _child_accessor = xmlTextReaderReadEntireNodeValue(reader);
        _imageDTO->data = _decode_base64((xmlChar *) _child_accessor, &(_imageDTO->_sizeof_data));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ext", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ext of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ext of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ImageType(_imageDTO);
          free(_imageDTO);
          return NULL;
        }

        _imageDTO->ext = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}image.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}image. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _imageDTO;
}

/**
 * Writes a ImageDTO to XML.
 *
 * @param writer The XML writer.
 * @param _imageDTO The ImageDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ImageType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_image *_imageDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_imageDTO->data != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "data", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}data. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing binary data for element {}data...\n");
#endif
    binaryData = _encode_base64(_imageDTO->data, _imageDTO->_sizeof_data);
    status = xmlTextWriterWriteString(writer, binaryData);
    free(binaryData);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write binary data for element {}data. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}data. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_imageDTO->ext != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ext", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ext. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ext...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_imageDTO->ext));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ext. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ext. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ImageDTO.
 *
 * @param _imageDTO The ImageDTO to free.
 */
static void freeNs0ImageType(struct PatientFolderAPI_ns0_image *_imageDTO) {
  int i;
  if (_imageDTO->data != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor data of type PatientFolderAPI_ns0_image...\n");
#endif
    free(_imageDTO->data);
  }
  if (_imageDTO->ext != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ext of type PatientFolderAPI_ns0_image...\n");
#endif
    freeXsStringType(_imageDTO->ext);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ext of type PatientFolderAPI_ns0_image...\n");
#endif
    free(_imageDTO->ext);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_image_M */
#ifndef DEF_PatientFolderAPI_ns0_result_M
#define DEF_PatientFolderAPI_ns0_result_M

/**
 * Reads a ListDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ListDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_result *xml_read_PatientFolderAPI_ns0_result(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ResultsElement(reader);
}

/**
 * Writes a ListDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _listDTO The ListDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_result(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_result *_listDTO) {
  return xmlTextWriterWriteNs0ResultsElementNS(writer, _listDTO, 1);
}

/**
 * Frees a ListDTO.
 *
 * @param _listDTO The ListDTO to free.
 */
void free_PatientFolderAPI_ns0_result(struct PatientFolderAPI_ns0_result *_listDTO) {
  freeNs0ResultType(_listDTO);
  free(_listDTO);
}

/**
 * Reads a ListDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ListDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_result *xmlTextReaderReadNs0ResultsElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_result *_listDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "results", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}results.\n");
#endif
    _listDTO = xmlTextReaderReadNs0ResultType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_listDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}results failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}results failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _listDTO;
}

/**
 * Writes a ListDTO to XML under element name "results".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _listDTO The ListDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ResultsElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_result *_listDTO) {
  return xmlTextWriterWriteNs0ResultsElementNS(writer, _listDTO, 0);
}

/**
 * Writes a ListDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _listDTO The ListDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ResultsElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_result *_listDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "results", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}results. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}result for root element {}results...\n");
#endif
  status = xmlTextWriterWriteNs0ResultType(writer, _listDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}results. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}results. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ListDTO.
 *
 * @param _listDTO The ListDTO whose children are to be free.
 */
static void freeNs0ResultsElement(struct PatientFolderAPI_ns0_result *_listDTO) {
  freeNs0ResultType(_listDTO);
}

/**
 * Reads a ListDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the ListDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_result *xmlTextReaderReadNs0ResultType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_result *_listDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_result));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ResultType(_listDTO);
        free(_listDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "result", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}result of type {http://www.w3.org/2001/XMLSchema}anyType.\n");
#endif
        _child_accessor = xmlTextReaderReadXsAnyTypeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}result of type {http://www.w3.org/2001/XMLSchema}anyType.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResultType(_listDTO);
          free(_listDTO);
          return NULL;
        }

        _listDTO->results = realloc(_listDTO->results, (_listDTO->_sizeof_results + 1) * sizeof(struct xmlBasicNode));
        memcpy(&(_listDTO->results[_listDTO->_sizeof_results++]), _child_accessor, sizeof(struct xmlBasicNode));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "total", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}total of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}total of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResultType(_listDTO);
          free(_listDTO);
          return NULL;
        }

        _listDTO->total = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}result.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}result. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _listDTO;
}

/**
 * Writes a ListDTO to XML.
 *
 * @param writer The XML writer.
 * @param _listDTO The ListDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ResultType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_result *_listDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _listDTO->_sizeof_results; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "result", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}result. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}anyType for element {}result...\n");
#endif
    status = xmlTextWriterWriteXsAnyTypeType(writer, &(_listDTO->results[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}anyType for element {}result. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}result. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "total", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}total. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}total...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_listDTO->total));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}total. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}total. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ListDTO.
 *
 * @param _listDTO The ListDTO to free.
 */
static void freeNs0ResultType(struct PatientFolderAPI_ns0_result *_listDTO) {
  int i;
  if (_listDTO->results != NULL) {
    for (i = 0; i < _listDTO->_sizeof_results; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor results[%i] of type PatientFolderAPI_ns0_result...\n", i);
#endif
      freeXsAnyTypeType(&(_listDTO->results[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor results of type PatientFolderAPI_ns0_result...\n");
#endif
    free(_listDTO->results);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_result_M */
#ifndef DEF_PatientFolderAPI_ns0_order_M
#define DEF_PatientFolderAPI_ns0_order_M

/**
 * Reads a OrderDTO element from XML. The element to be read is "order", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The OrderDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_order *xml_read_PatientFolderAPI_ns0_order(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0OrderElement(reader);
}

/**
 * Writes a OrderDTO to XML under element name "order".
 *
 * @param writer The XML writer.
 * @param _orderDTO The OrderDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_order(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_order *_orderDTO) {
  return xmlTextWriterWriteNs0OrderElementNS(writer, _orderDTO, 1);
}

/**
 * Frees a OrderDTO.
 *
 * @param _orderDTO The OrderDTO to free.
 */
void free_PatientFolderAPI_ns0_order(struct PatientFolderAPI_ns0_order *_orderDTO) {
  freeNs0OrderType(_orderDTO);
  free(_orderDTO);
}

/**
 * Reads a OrderDTO element from XML. The element to be read is "order", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The OrderDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_order *xmlTextReaderReadNs0OrderElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_order *_orderDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "order", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}order.\n");
#endif
    _orderDTO = xmlTextReaderReadNs0OrderType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_orderDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}order failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}order failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _orderDTO;
}

/**
 * Writes a OrderDTO to XML under element name "order".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _orderDTO The OrderDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OrderElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_order *_orderDTO) {
  return xmlTextWriterWriteNs0OrderElementNS(writer, _orderDTO, 0);
}

/**
 * Writes a OrderDTO to XML under element name "order".
 *
 * @param writer The XML writer.
 * @param _orderDTO The OrderDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OrderElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_order *_orderDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "order", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}order. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}order for root element {}order...\n");
#endif
  status = xmlTextWriterWriteNs0OrderType(writer, _orderDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}order. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}order. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a OrderDTO.
 *
 * @param _orderDTO The OrderDTO whose children are to be free.
 */
static void freeNs0OrderElement(struct PatientFolderAPI_ns0_order *_orderDTO) {
  freeNs0OrderType(_orderDTO);
}

/**
 * Reads a OrderDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the OrderDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_order *xmlTextReaderReadNs0OrderType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_order *_orderDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_order));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0OrderType(_orderDTO);
        free(_orderDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrderType(_orderDTO);
          free(_orderDTO);
          return NULL;
        }

        _orderDTO->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "status", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}status of type {}status.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0StatusType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}status of type {}status.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrderType(_orderDTO);
          free(_orderDTO);
          return NULL;
        }

        _orderDTO->status = ((struct PatientFolderAPI_ns0_status*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "enteringUser", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}enteringUser of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}enteringUser of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrderType(_orderDTO);
          free(_orderDTO);
          return NULL;
        }

        _orderDTO->enteringUser = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "actionedUser", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}actionedUser of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}actionedUser of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrderType(_orderDTO);
          free(_orderDTO);
          return NULL;
        }

        _orderDTO->actionedUser = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "organisation", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}organisation of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}organisation of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrderType(_orderDTO);
          free(_orderDTO);
          return NULL;
        }

        _orderDTO->organisation = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "doctor", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}doctor of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}doctor of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OrderType(_orderDTO);
          free(_orderDTO);
          return NULL;
        }

        _orderDTO->doctor = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}order.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}order. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _orderDTO;
}

/**
 * Writes a OrderDTO to XML.
 *
 * @param writer The XML writer.
 * @param _orderDTO The OrderDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0OrderType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_order *_orderDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_orderDTO->id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_orderDTO->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_orderDTO->status != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "status", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}status. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}status for element {}status...\n");
#endif
    status = xmlTextWriterWriteNs0StatusType(writer, (_orderDTO->status));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}status for element {}status. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}status. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_orderDTO->enteringUser != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "enteringUser", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}enteringUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}enteringUser...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_orderDTO->enteringUser));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}enteringUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}enteringUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_orderDTO->actionedUser != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actionedUser", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}actionedUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}actionedUser...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_orderDTO->actionedUser));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}actionedUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}actionedUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_orderDTO->organisation != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "organisation", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}organisation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}organisation...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_orderDTO->organisation));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}organisation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}organisation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_orderDTO->doctor != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "doctor", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}doctor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}doctor...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_orderDTO->doctor));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}doctor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}doctor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a OrderDTO.
 *
 * @param _orderDTO The OrderDTO to free.
 */
static void freeNs0OrderType(struct PatientFolderAPI_ns0_order *_orderDTO) {
  int i;
  if (_orderDTO->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type PatientFolderAPI_ns0_order...\n");
#endif
    freeXsStringType(_orderDTO->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type PatientFolderAPI_ns0_order...\n");
#endif
    free(_orderDTO->id);
  }
  if (_orderDTO->status != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor status of type PatientFolderAPI_ns0_order...\n");
#endif
    freeNs0StatusType(_orderDTO->status);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor status of type PatientFolderAPI_ns0_order...\n");
#endif
    free(_orderDTO->status);
  }
  if (_orderDTO->enteringUser != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor enteringUser of type PatientFolderAPI_ns0_order...\n");
#endif
    freeXsStringType(_orderDTO->enteringUser);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor enteringUser of type PatientFolderAPI_ns0_order...\n");
#endif
    free(_orderDTO->enteringUser);
  }
  if (_orderDTO->actionedUser != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor actionedUser of type PatientFolderAPI_ns0_order...\n");
#endif
    freeXsStringType(_orderDTO->actionedUser);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor actionedUser of type PatientFolderAPI_ns0_order...\n");
#endif
    free(_orderDTO->actionedUser);
  }
  if (_orderDTO->organisation != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor organisation of type PatientFolderAPI_ns0_order...\n");
#endif
    freeXsStringType(_orderDTO->organisation);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor organisation of type PatientFolderAPI_ns0_order...\n");
#endif
    free(_orderDTO->organisation);
  }
  if (_orderDTO->doctor != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor doctor of type PatientFolderAPI_ns0_order...\n");
#endif
    freeXsStringType(_orderDTO->doctor);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor doctor of type PatientFolderAPI_ns0_order...\n");
#endif
    free(_orderDTO->doctor);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_order_M */
#ifndef DEF_PatientFolderAPI_ns0_paginatedListDTO_M
#define DEF_PatientFolderAPI_ns0_paginatedListDTO_M

/**
 * Reads a PaginatedListDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PaginatedListDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_paginatedListDTO *xml_read_PatientFolderAPI_ns0_paginatedListDTO(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ResultsElement(reader);
}

/**
 * Writes a PaginatedListDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _paginatedListDTO The PaginatedListDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_paginatedListDTO(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO) {
  return xmlTextWriterWriteNs0ResultsElementNS(writer, _paginatedListDTO, 1);
}

/**
 * Frees a PaginatedListDTO.
 *
 * @param _paginatedListDTO The PaginatedListDTO to free.
 */
void free_PatientFolderAPI_ns0_paginatedListDTO(struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO) {
  freeNs0PaginatedListDTOType(_paginatedListDTO);
  free(_paginatedListDTO);
}

/**
 * Reads a PaginatedListDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The PaginatedListDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_paginatedListDTO *xmlTextReaderReadNs0ResultsElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "results", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}results.\n");
#endif
    _paginatedListDTO = xmlTextReaderReadNs0PaginatedListDTOType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_paginatedListDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}results failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}results failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _paginatedListDTO;
}

/**
 * Writes a PaginatedListDTO to XML under element name "results".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _paginatedListDTO The PaginatedListDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ResultsElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO) {
  return xmlTextWriterWriteNs0ResultsElementNS(writer, _paginatedListDTO, 0);
}

/**
 * Writes a PaginatedListDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _paginatedListDTO The PaginatedListDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ResultsElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "results", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}results. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}paginatedListDTO for root element {}results...\n");
#endif
  status = xmlTextWriterWriteNs0PaginatedListDTOType(writer, _paginatedListDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}results. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}results. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a PaginatedListDTO.
 *
 * @param _paginatedListDTO The PaginatedListDTO whose children are to be free.
 */
static void freeNs0ResultsElement(struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO) {
  freeNs0PaginatedListDTOType(_paginatedListDTO);
}

/**
 * Reads a PaginatedListDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the PaginatedListDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_paginatedListDTO *xmlTextReaderReadNs0PaginatedListDTOType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_paginatedListDTO));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PaginatedListDTOType(_paginatedListDTO);
        free(_paginatedListDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "result", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}result of type {http://www.w3.org/2001/XMLSchema}anyType.\n");
#endif
        _child_accessor = xmlTextReaderReadXsAnyTypeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}result of type {http://www.w3.org/2001/XMLSchema}anyType.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaginatedListDTOType(_paginatedListDTO);
          free(_paginatedListDTO);
          return NULL;
        }

        _paginatedListDTO->results = realloc(_paginatedListDTO->results, (_paginatedListDTO->_sizeof_results + 1) * sizeof(struct xmlBasicNode));
        memcpy(&(_paginatedListDTO->results[_paginatedListDTO->_sizeof_results++]), _child_accessor, sizeof(struct xmlBasicNode));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "total", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}total of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}total of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaginatedListDTOType(_paginatedListDTO);
          free(_paginatedListDTO);
          return NULL;
        }

        _paginatedListDTO->total = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "start", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}start of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}start of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaginatedListDTOType(_paginatedListDTO);
          free(_paginatedListDTO);
          return NULL;
        }

        _paginatedListDTO->start = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "size", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}size of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}size of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaginatedListDTOType(_paginatedListDTO);
          free(_paginatedListDTO);
          return NULL;
        }

        _paginatedListDTO->size = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "sort", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}sort of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}sort of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaginatedListDTOType(_paginatedListDTO);
          free(_paginatedListDTO);
          return NULL;
        }

        _paginatedListDTO->sort = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "order", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}order of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}order of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PaginatedListDTOType(_paginatedListDTO);
          free(_paginatedListDTO);
          return NULL;
        }

        _paginatedListDTO->order = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}paginatedListDTO.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}paginatedListDTO. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _paginatedListDTO;
}

/**
 * Writes a PaginatedListDTO to XML.
 *
 * @param writer The XML writer.
 * @param _paginatedListDTO The PaginatedListDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PaginatedListDTOType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _paginatedListDTO->_sizeof_results; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "result", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}result. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}anyType for element {}result...\n");
#endif
    status = xmlTextWriterWriteXsAnyTypeType(writer, &(_paginatedListDTO->results[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}anyType for element {}result. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}result. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "total", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}total. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}total...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_paginatedListDTO->total));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}total. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}total. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "start", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}start. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}start...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_paginatedListDTO->start));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}start. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}start. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "size", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}size. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}size...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_paginatedListDTO->size));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}size. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}size. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_paginatedListDTO->sort != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "sort", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}sort. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}sort...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_paginatedListDTO->sort));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}sort. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}sort. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_paginatedListDTO->order != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "order", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}order. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}order...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_paginatedListDTO->order));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}order. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}order. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a PaginatedListDTO.
 *
 * @param _paginatedListDTO The PaginatedListDTO to free.
 */
static void freeNs0PaginatedListDTOType(struct PatientFolderAPI_ns0_paginatedListDTO *_paginatedListDTO) {
  int i;
  if (_paginatedListDTO->results != NULL) {
    for (i = 0; i < _paginatedListDTO->_sizeof_results; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor results[%i] of type PatientFolderAPI_ns0_paginatedListDTO...\n", i);
#endif
      freeXsAnyTypeType(&(_paginatedListDTO->results[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor results of type PatientFolderAPI_ns0_paginatedListDTO...\n");
#endif
    free(_paginatedListDTO->results);
  }
  if (_paginatedListDTO->sort != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor sort of type PatientFolderAPI_ns0_paginatedListDTO...\n");
#endif
    freeXsStringType(_paginatedListDTO->sort);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor sort of type PatientFolderAPI_ns0_paginatedListDTO...\n");
#endif
    free(_paginatedListDTO->sort);
  }
  if (_paginatedListDTO->order != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor order of type PatientFolderAPI_ns0_paginatedListDTO...\n");
#endif
    freeXsStringType(_paginatedListDTO->order);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor order of type PatientFolderAPI_ns0_paginatedListDTO...\n");
#endif
    free(_paginatedListDTO->order);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_paginatedListDTO_M */
#ifndef DEF_PatientFolderAPI_ns0_patientComponentDTO_M
#define DEF_PatientFolderAPI_ns0_patientComponentDTO_M

/**
 * Reads a PatientComponentDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the PatientComponentDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_patientComponentDTO *xmlTextReaderReadNs0PatientComponentDTOType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_patientComponentDTO *_patientComponentDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_patientComponentDTO));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PatientComponentDTOType(_patientComponentDTO);
        free(_patientComponentDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientIdNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientComponentDTOType(_patientComponentDTO);
          free(_patientComponentDTO);
          return NULL;
        }

        _patientComponentDTO->patientIdNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientComponentDTOType(_patientComponentDTO);
          free(_patientComponentDTO);
          return NULL;
        }

        _patientComponentDTO->patientSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientComponentDTOType(_patientComponentDTO);
          free(_patientComponentDTO);
          return NULL;
        }

        _patientComponentDTO->up = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}patientComponentDTO.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}patientComponentDTO. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _patientComponentDTO;
}

/**
 * Writes a PatientComponentDTO to XML.
 *
 * @param writer The XML writer.
 * @param _patientComponentDTO The PatientComponentDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PatientComponentDTOType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_patientComponentDTO *_patientComponentDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_patientComponentDTO->patientIdNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientIdNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientComponentDTO->patientIdNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientComponentDTO->patientSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientComponentDTO->patientSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientComponentDTO->up != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}up...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientComponentDTO->up));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a PatientComponentDTO.
 *
 * @param _patientComponentDTO The PatientComponentDTO to free.
 */
static void freeNs0PatientComponentDTOType(struct PatientFolderAPI_ns0_patientComponentDTO *_patientComponentDTO) {
  int i;
  if (_patientComponentDTO->patientIdNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientIdNs of type PatientFolderAPI_ns0_patientComponentDTO...\n");
#endif
    freeXsStringType(_patientComponentDTO->patientIdNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientIdNs of type PatientFolderAPI_ns0_patientComponentDTO...\n");
#endif
    free(_patientComponentDTO->patientIdNs);
  }
  if (_patientComponentDTO->patientSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientSrc of type PatientFolderAPI_ns0_patientComponentDTO...\n");
#endif
    freeXsStringType(_patientComponentDTO->patientSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientSrc of type PatientFolderAPI_ns0_patientComponentDTO...\n");
#endif
    free(_patientComponentDTO->patientSrc);
  }
  if (_patientComponentDTO->up != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor up of type PatientFolderAPI_ns0_patientComponentDTO...\n");
#endif
    freeXsStringType(_patientComponentDTO->up);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor up of type PatientFolderAPI_ns0_patientComponentDTO...\n");
#endif
    free(_patientComponentDTO->up);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_patientComponentDTO_M */
#ifndef DEF_PatientFolderAPI_ns0_Patient_M
#define DEF_PatientFolderAPI_ns0_Patient_M

/**
 * Reads a PatientDTO element from XML. The element to be read is "Patient", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PatientDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Patient *xml_read_PatientFolderAPI_ns0_Patient(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PatientElement(reader);
}

/**
 * Writes a PatientDTO to XML under element name "Patient".
 *
 * @param writer The XML writer.
 * @param _patientDTO The PatientDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_Patient(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Patient *_patientDTO) {
  return xmlTextWriterWriteNs0PatientElementNS(writer, _patientDTO, 1);
}

/**
 * Frees a PatientDTO.
 *
 * @param _patientDTO The PatientDTO to free.
 */
void free_PatientFolderAPI_ns0_Patient(struct PatientFolderAPI_ns0_Patient *_patientDTO) {
  freeNs0PatientType(_patientDTO);
  free(_patientDTO);
}

/**
 * Reads a PatientDTO element from XML. The element to be read is "Patient", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The PatientDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Patient *xmlTextReaderReadNs0PatientElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_Patient *_patientDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Patient", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}Patient.\n");
#endif
    _patientDTO = xmlTextReaderReadNs0PatientType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_patientDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}Patient failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}Patient failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _patientDTO;
}

/**
 * Writes a PatientDTO to XML under element name "Patient".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _patientDTO The PatientDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PatientElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Patient *_patientDTO) {
  return xmlTextWriterWriteNs0PatientElementNS(writer, _patientDTO, 0);
}

/**
 * Writes a PatientDTO to XML under element name "Patient".
 *
 * @param writer The XML writer.
 * @param _patientDTO The PatientDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PatientElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Patient *_patientDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Patient", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}Patient. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}Patient for root element {}Patient...\n");
#endif
  status = xmlTextWriterWriteNs0PatientType(writer, _patientDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}Patient. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}Patient. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a PatientDTO.
 *
 * @param _patientDTO The PatientDTO whose children are to be free.
 */
static void freeNs0PatientElement(struct PatientFolderAPI_ns0_Patient *_patientDTO) {
  freeNs0PatientType(_patientDTO);
}

/**
 * Reads a PatientDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the PatientDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_Patient *xmlTextReaderReadNs0PatientType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_Patient *_patientDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_Patient));

  if (xmlTextReaderHasAttributes(reader)) {
    while (xmlTextReaderMoveToNextAttribute(reader)) {
      if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}src...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}src of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }
        _patientDTO->src = ((xmlChar*)_child_accessor);
        continue;
      }
    }

    status = xmlTextReaderMoveToElement(reader);
    if (status < 1) {
      //panic: unable to return to the element node.
#if DEBUG_ENUNCIATE
      printf("Unable to return to element node from attributes.\n");
#endif
      freeNs0PatientType(_patientDTO);
      free(_patientDTO);
      return NULL;
    }
  }


  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PatientType(_patientDTO);
        free(_patientDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "extIds", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}extIds of type {}extId.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ExtIdType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}extIds of type {}extId.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->extIds = realloc(_patientDTO->extIds, (_patientDTO->_sizeof_extIds + 1) * sizeof(struct PatientFolderAPI_ns0_extId));
        memcpy(&(_patientDTO->extIds[_patientDTO->_sizeof_extIds++]), _child_accessor, sizeof(struct PatientFolderAPI_ns0_extId));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientMasterId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientMasterId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientMasterId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->patientMasterId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "firstName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->firstName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lastName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->lastName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "otherNames", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}otherNames of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}otherNames of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->otherNames = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dob", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dob of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dob of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->dob = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dod", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dod of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dod of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->dod = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "sex", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}sex of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}sex of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->sex = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "addr1", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}addr1 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}addr1 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->addr1 = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "addr2", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}addr2 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}addr2 of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->addr2 = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "city", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->city = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "postcode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}postcode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}postcode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->postcode = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "infoFields", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}infoFields of type {}PatientInfoField.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PatientInfoFieldType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}infoFields of type {}PatientInfoField.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientType(_patientDTO);
          free(_patientDTO);
          return NULL;
        }

        _patientDTO->infoFields = realloc(_patientDTO->infoFields, (_patientDTO->_sizeof_infoFields + 1) * sizeof(struct PatientFolderAPI_ns0_PatientInfoField));
        memcpy(&(_patientDTO->infoFields[_patientDTO->_sizeof_infoFields++]), _child_accessor, sizeof(struct PatientFolderAPI_ns0_PatientInfoField));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}Patient.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}Patient. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _patientDTO;
}

/**
 * Writes a PatientDTO to XML.
 *
 * @param writer The XML writer.
 * @param _patientDTO The PatientDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PatientType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Patient *_patientDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_patientDTO->src != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}src. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}src...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->src));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _patientDTO->_sizeof_extIds; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extIds", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}extIds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}extId for element {}extIds...\n");
#endif
    status = xmlTextWriterWriteNs0ExtIdType(writer, &(_patientDTO->extIds[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}extId for element {}extIds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}extIds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->patientMasterId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientMasterId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientMasterId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientMasterId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->patientMasterId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientMasterId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientMasterId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->firstName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "firstName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}firstName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->firstName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->lastName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}lastName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->lastName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->otherNames != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "otherNames", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}otherNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}otherNames...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->otherNames));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}otherNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}otherNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->dob != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dob", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dob. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}dob...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->dob));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}dob. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dob. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->dod != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dod", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dod. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}dod...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->dod));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}dod. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dod. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->sex != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "sex", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}sex. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}sex...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->sex));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}sex. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}sex. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->addr1 != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "addr1", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}addr1. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}addr1...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->addr1));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}addr1. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}addr1. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->addr2 != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "addr2", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}addr2. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}addr2...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->addr2));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}addr2. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}addr2. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->city != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "city", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}city...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->city));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientDTO->postcode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "postcode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}postcode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}postcode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientDTO->postcode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}postcode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}postcode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _patientDTO->_sizeof_infoFields; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "infoFields", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}infoFields. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}PatientInfoField for element {}infoFields...\n");
#endif
    status = xmlTextWriterWriteNs0PatientInfoFieldType(writer, &(_patientDTO->infoFields[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}PatientInfoField for element {}infoFields. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}infoFields. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a PatientDTO.
 *
 * @param _patientDTO The PatientDTO to free.
 */
static void freeNs0PatientType(struct PatientFolderAPI_ns0_Patient *_patientDTO) {
  int i;
  if (_patientDTO->src != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor src of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->src);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor src of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->src);
  }
  if (_patientDTO->extIds != NULL) {
    for (i = 0; i < _patientDTO->_sizeof_extIds; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor extIds[%i] of type PatientFolderAPI_ns0_Patient...\n", i);
#endif
      freeNs0ExtIdType(&(_patientDTO->extIds[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor extIds of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->extIds);
  }
  if (_patientDTO->patientMasterId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientMasterId of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->patientMasterId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientMasterId of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->patientMasterId);
  }
  if (_patientDTO->firstName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor firstName of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->firstName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor firstName of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->firstName);
  }
  if (_patientDTO->lastName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor lastName of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->lastName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor lastName of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->lastName);
  }
  if (_patientDTO->otherNames != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor otherNames of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->otherNames);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor otherNames of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->otherNames);
  }
  if (_patientDTO->dob != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dob of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->dob);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dob of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->dob);
  }
  if (_patientDTO->dod != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dod of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->dod);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dod of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->dod);
  }
  if (_patientDTO->sex != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor sex of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->sex);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor sex of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->sex);
  }
  if (_patientDTO->addr1 != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor addr1 of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->addr1);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor addr1 of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->addr1);
  }
  if (_patientDTO->addr2 != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor addr2 of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->addr2);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor addr2 of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->addr2);
  }
  if (_patientDTO->city != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor city of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->city);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor city of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->city);
  }
  if (_patientDTO->postcode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor postcode of type PatientFolderAPI_ns0_Patient...\n");
#endif
    freeXsStringType(_patientDTO->postcode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor postcode of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->postcode);
  }
  if (_patientDTO->infoFields != NULL) {
    for (i = 0; i < _patientDTO->_sizeof_infoFields; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor infoFields[%i] of type PatientFolderAPI_ns0_Patient...\n", i);
#endif
      freeNs0PatientInfoFieldType(&(_patientDTO->infoFields[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor infoFields of type PatientFolderAPI_ns0_Patient...\n");
#endif
    free(_patientDTO->infoFields);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_Patient_M */
#ifndef DEF_PatientFolderAPI_ns0_PatientInfoField_M
#define DEF_PatientFolderAPI_ns0_PatientInfoField_M

/**
 * Reads a PatientInfoFieldDTO element from XML. The element to be read is "PatientInfoField", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PatientInfoFieldDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_PatientInfoField *xml_read_PatientFolderAPI_ns0_PatientInfoField(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PatientInfoFieldElement(reader);
}

/**
 * Writes a PatientInfoFieldDTO to XML under element name "PatientInfoField".
 *
 * @param writer The XML writer.
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_PatientInfoField(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO) {
  return xmlTextWriterWriteNs0PatientInfoFieldElementNS(writer, _patientInfoFieldDTO, 1);
}

/**
 * Frees a PatientInfoFieldDTO.
 *
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to free.
 */
void free_PatientFolderAPI_ns0_PatientInfoField(struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO) {
  freeNs0PatientInfoFieldType(_patientInfoFieldDTO);
  free(_patientInfoFieldDTO);
}

/**
 * Reads a PatientInfoFieldDTO element from XML. The element to be read is "PatientInfoField", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The PatientInfoFieldDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_PatientInfoField *xmlTextReaderReadNs0PatientInfoFieldElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "PatientInfoField", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}PatientInfoField.\n");
#endif
    _patientInfoFieldDTO = xmlTextReaderReadNs0PatientInfoFieldType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_patientInfoFieldDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}PatientInfoField failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}PatientInfoField failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _patientInfoFieldDTO;
}

/**
 * Writes a PatientInfoFieldDTO to XML under element name "PatientInfoField".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PatientInfoFieldElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO) {
  return xmlTextWriterWriteNs0PatientInfoFieldElementNS(writer, _patientInfoFieldDTO, 0);
}

/**
 * Writes a PatientInfoFieldDTO to XML under element name "PatientInfoField".
 *
 * @param writer The XML writer.
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PatientInfoFieldElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PatientInfoField", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}PatientInfoField. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}PatientInfoField for root element {}PatientInfoField...\n");
#endif
  status = xmlTextWriterWriteNs0PatientInfoFieldType(writer, _patientInfoFieldDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}PatientInfoField. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}PatientInfoField. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a PatientInfoFieldDTO.
 *
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO whose children are to be free.
 */
static void freeNs0PatientInfoFieldElement(struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO) {
  freeNs0PatientInfoFieldType(_patientInfoFieldDTO);
}

/**
 * Reads a PatientInfoFieldDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the PatientInfoFieldDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_PatientInfoField *xmlTextReaderReadNs0PatientInfoFieldType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_PatientInfoField));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PatientInfoFieldType(_patientInfoFieldDTO);
        free(_patientInfoFieldDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientInfoFieldType(_patientInfoFieldDTO);
          free(_patientInfoFieldDTO);
          return NULL;
        }

        _patientInfoFieldDTO->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "value", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}value of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}value of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientInfoFieldType(_patientInfoFieldDTO);
          free(_patientInfoFieldDTO);
          return NULL;
        }

        _patientInfoFieldDTO->value = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}PatientInfoField.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}PatientInfoField. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _patientInfoFieldDTO;
}

/**
 * Writes a PatientInfoFieldDTO to XML.
 *
 * @param writer The XML writer.
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PatientInfoFieldType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_patientInfoFieldDTO->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientInfoFieldDTO->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientInfoFieldDTO->value != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "value", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}value. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}value...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientInfoFieldDTO->value));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}value. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}value. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a PatientInfoFieldDTO.
 *
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to free.
 */
static void freeNs0PatientInfoFieldType(struct PatientFolderAPI_ns0_PatientInfoField *_patientInfoFieldDTO) {
  int i;
  if (_patientInfoFieldDTO->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type PatientFolderAPI_ns0_PatientInfoField...\n");
#endif
    freeXsStringType(_patientInfoFieldDTO->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type PatientFolderAPI_ns0_PatientInfoField...\n");
#endif
    free(_patientInfoFieldDTO->name);
  }
  if (_patientInfoFieldDTO->value != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor value of type PatientFolderAPI_ns0_PatientInfoField...\n");
#endif
    freeXsStringType(_patientInfoFieldDTO->value);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor value of type PatientFolderAPI_ns0_PatientInfoField...\n");
#endif
    free(_patientInfoFieldDTO->value);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_PatientInfoField_M */
#ifndef DEF_PatientFolderAPI_ns0_PatientListItem_M
#define DEF_PatientFolderAPI_ns0_PatientListItem_M

/**
 * Reads a PatientListItemDTO element from XML. The element to be read is "PatientListItem", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PatientListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_PatientListItem *xml_read_PatientFolderAPI_ns0_PatientListItem(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PatientListItemElement(reader);
}

/**
 * Writes a PatientListItemDTO to XML under element name "PatientListItem".
 *
 * @param writer The XML writer.
 * @param _patientListItemDTO The PatientListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_PatientListItem(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO) {
  return xmlTextWriterWriteNs0PatientListItemElementNS(writer, _patientListItemDTO, 1);
}

/**
 * Frees a PatientListItemDTO.
 *
 * @param _patientListItemDTO The PatientListItemDTO to free.
 */
void free_PatientFolderAPI_ns0_PatientListItem(struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO) {
  freeNs0PatientListItemType(_patientListItemDTO);
  free(_patientListItemDTO);
}

/**
 * Reads a PatientListItemDTO element from XML. The element to be read is "PatientListItem", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The PatientListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_PatientListItem *xmlTextReaderReadNs0PatientListItemElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "PatientListItem", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}PatientListItem.\n");
#endif
    _patientListItemDTO = xmlTextReaderReadNs0PatientListItemType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_patientListItemDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}PatientListItem failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}PatientListItem failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _patientListItemDTO;
}

/**
 * Writes a PatientListItemDTO to XML under element name "PatientListItem".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _patientListItemDTO The PatientListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PatientListItemElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO) {
  return xmlTextWriterWriteNs0PatientListItemElementNS(writer, _patientListItemDTO, 0);
}

/**
 * Writes a PatientListItemDTO to XML under element name "PatientListItem".
 *
 * @param writer The XML writer.
 * @param _patientListItemDTO The PatientListItemDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PatientListItemElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PatientListItem", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}PatientListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}PatientListItem for root element {}PatientListItem...\n");
#endif
  status = xmlTextWriterWriteNs0PatientListItemType(writer, _patientListItemDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}PatientListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}PatientListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a PatientListItemDTO.
 *
 * @param _patientListItemDTO The PatientListItemDTO whose children are to be free.
 */
static void freeNs0PatientListItemElement(struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO) {
  freeNs0PatientListItemType(_patientListItemDTO);
}

/**
 * Reads a PatientListItemDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the PatientListItemDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_PatientListItem *xmlTextReaderReadNs0PatientListItemType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_PatientListItem));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PatientListItemType(_patientListItemDTO);
        free(_patientListItemDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientIdNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientListItemType(_patientListItemDTO);
          free(_patientListItemDTO);
          return NULL;
        }

        _patientListItemDTO->patientIdNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientListItemType(_patientListItemDTO);
          free(_patientListItemDTO);
          return NULL;
        }

        _patientListItemDTO->patientSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientListItemType(_patientListItemDTO);
          free(_patientListItemDTO);
          return NULL;
        }

        _patientListItemDTO->up = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ListId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientListItemType(_patientListItemDTO);
          free(_patientListItemDTO);
          return NULL;
        }

        _patientListItemDTO->listId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientListItemType(_patientListItemDTO);
          free(_patientListItemDTO);
          return NULL;
        }

        _patientListItemDTO->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "IsEpisodic", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}IsEpisodic of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}IsEpisodic of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PatientListItemType(_patientListItemDTO);
          free(_patientListItemDTO);
          return NULL;
        }

        _patientListItemDTO->isEpisodic = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}PatientListItem.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}PatientListItem. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _patientListItemDTO;
}

/**
 * Writes a PatientListItemDTO to XML.
 *
 * @param writer The XML writer.
 * @param _patientListItemDTO The PatientListItemDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PatientListItemType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_patientListItemDTO->patientIdNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientIdNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientListItemDTO->patientIdNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientListItemDTO->patientSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientListItemDTO->patientSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientListItemDTO->up != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}up...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientListItemDTO->up));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientListItemDTO->listId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ListId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ListId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientListItemDTO->listId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_patientListItemDTO->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_patientListItemDTO->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "IsEpisodic", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}IsEpisodic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}IsEpisodic...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_patientListItemDTO->isEpisodic));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}IsEpisodic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}IsEpisodic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a PatientListItemDTO.
 *
 * @param _patientListItemDTO The PatientListItemDTO to free.
 */
static void freeNs0PatientListItemType(struct PatientFolderAPI_ns0_PatientListItem *_patientListItemDTO) {
  int i;
  if (_patientListItemDTO->patientIdNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientIdNs of type PatientFolderAPI_ns0_PatientListItem...\n");
#endif
    freeXsStringType(_patientListItemDTO->patientIdNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientIdNs of type PatientFolderAPI_ns0_PatientListItem...\n");
#endif
    free(_patientListItemDTO->patientIdNs);
  }
  if (_patientListItemDTO->patientSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientSrc of type PatientFolderAPI_ns0_PatientListItem...\n");
#endif
    freeXsStringType(_patientListItemDTO->patientSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientSrc of type PatientFolderAPI_ns0_PatientListItem...\n");
#endif
    free(_patientListItemDTO->patientSrc);
  }
  if (_patientListItemDTO->up != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor up of type PatientFolderAPI_ns0_PatientListItem...\n");
#endif
    freeXsStringType(_patientListItemDTO->up);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor up of type PatientFolderAPI_ns0_PatientListItem...\n");
#endif
    free(_patientListItemDTO->up);
  }
  if (_patientListItemDTO->listId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor listId of type PatientFolderAPI_ns0_PatientListItem...\n");
#endif
    freeXsStringType(_patientListItemDTO->listId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor listId of type PatientFolderAPI_ns0_PatientListItem...\n");
#endif
    free(_patientListItemDTO->listId);
  }
  if (_patientListItemDTO->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type PatientFolderAPI_ns0_PatientListItem...\n");
#endif
    freeXsStringType(_patientListItemDTO->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type PatientFolderAPI_ns0_PatientListItem...\n");
#endif
    free(_patientListItemDTO->description);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_PatientListItem_M */
#ifndef DEF_PatientFolderAPI_ns0_report_M
#define DEF_PatientFolderAPI_ns0_report_M

/**
 * Reads a ReportDTO element from XML. The element to be read is "report", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ReportDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_report *xml_read_PatientFolderAPI_ns0_report(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ReportElement(reader);
}

/**
 * Writes a ReportDTO to XML under element name "report".
 *
 * @param writer The XML writer.
 * @param _reportDTO The ReportDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_report(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_report *_reportDTO) {
  return xmlTextWriterWriteNs0ReportElementNS(writer, _reportDTO, 1);
}

/**
 * Frees a ReportDTO.
 *
 * @param _reportDTO The ReportDTO to free.
 */
void free_PatientFolderAPI_ns0_report(struct PatientFolderAPI_ns0_report *_reportDTO) {
  freeNs0ReportType(_reportDTO);
  free(_reportDTO);
}

/**
 * Reads a ReportDTO element from XML. The element to be read is "report", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ReportDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_report *xmlTextReaderReadNs0ReportElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_report *_reportDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "report", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}report.\n");
#endif
    _reportDTO = xmlTextReaderReadNs0ReportType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_reportDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}report failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}report failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _reportDTO;
}

/**
 * Writes a ReportDTO to XML under element name "report".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _reportDTO The ReportDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ReportElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_report *_reportDTO) {
  return xmlTextWriterWriteNs0ReportElementNS(writer, _reportDTO, 0);
}

/**
 * Writes a ReportDTO to XML under element name "report".
 *
 * @param writer The XML writer.
 * @param _reportDTO The ReportDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ReportElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_report *_reportDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "report", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}report. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}report for root element {}report...\n");
#endif
  status = xmlTextWriterWriteNs0ReportType(writer, _reportDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}report. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}report. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ReportDTO.
 *
 * @param _reportDTO The ReportDTO whose children are to be free.
 */
static void freeNs0ReportElement(struct PatientFolderAPI_ns0_report *_reportDTO) {
  freeNs0ReportType(_reportDTO);
}

/**
 * Reads a ReportDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the ReportDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_report *xmlTextReaderReadNs0ReportType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_report *_reportDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_report));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ReportType(_reportDTO);
        free(_reportDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "text", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ReportType(_reportDTO);
          free(_reportDTO);
          return NULL;
        }

        _reportDTO->text = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}report.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}report. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _reportDTO;
}

/**
 * Writes a ReportDTO to XML.
 *
 * @param writer The XML writer.
 * @param _reportDTO The ReportDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ReportType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_report *_reportDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_reportDTO->text != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "text", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}text. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}text...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_reportDTO->text));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}text. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}text. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ReportDTO.
 *
 * @param _reportDTO The ReportDTO to free.
 */
static void freeNs0ReportType(struct PatientFolderAPI_ns0_report *_reportDTO) {
  int i;
  if (_reportDTO->text != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor text of type PatientFolderAPI_ns0_report...\n");
#endif
    freeXsStringType(_reportDTO->text);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor text of type PatientFolderAPI_ns0_report...\n");
#endif
    free(_reportDTO->text);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_report_M */
#ifndef DEF_PatientFolderAPI_ns0_request_M
#define DEF_PatientFolderAPI_ns0_request_M

/**
 * Reads a RequestDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the RequestDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_request *xmlTextReaderReadNs0RequestType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_request *_requestDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_request));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0RequestType(_requestDTO);
        free(_requestDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "requestId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}requestId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}requestId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RequestType(_requestDTO);
          free(_requestDTO);
          return NULL;
        }

        _requestDTO->requestId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "requestType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}requestType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}requestType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RequestType(_requestDTO);
          free(_requestDTO);
          return NULL;
        }

        _requestDTO->requestType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "serviceDesc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}serviceDesc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}serviceDesc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RequestType(_requestDTO);
          free(_requestDTO);
          return NULL;
        }

        _requestDTO->serviceDesc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "requestStatus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}requestStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}requestStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RequestType(_requestDTO);
          free(_requestDTO);
          return NULL;
        }

        _requestDTO->requestStatus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "requestDate", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}requestDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}requestDate of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RequestType(_requestDTO);
          free(_requestDTO);
          return NULL;
        }

        _requestDTO->requestDate = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "obsStart", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}obsStart of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}obsStart of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RequestType(_requestDTO);
          free(_requestDTO);
          return NULL;
        }

        _requestDTO->obsStart = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "obsStop", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}obsStop of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}obsStop of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RequestType(_requestDTO);
          free(_requestDTO);
          return NULL;
        }

        _requestDTO->obsStop = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "specimenRec", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}specimenRec of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}specimenRec of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RequestType(_requestDTO);
          free(_requestDTO);
          return NULL;
        }

        _requestDTO->specimenRec = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "clinicalInformation", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}clinicalInformation of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}clinicalInformation of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RequestType(_requestDTO);
          free(_requestDTO);
          return NULL;
        }

        _requestDTO->clinicalInformation = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}request.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}request. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _requestDTO;
}

/**
 * Writes a RequestDTO to XML.
 *
 * @param writer The XML writer.
 * @param _requestDTO The RequestDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0RequestType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_request *_requestDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_requestDTO->requestId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "requestId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}requestId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}requestId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_requestDTO->requestId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}requestId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}requestId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_requestDTO->requestType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "requestType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}requestType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}requestType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_requestDTO->requestType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}requestType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}requestType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_requestDTO->serviceDesc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "serviceDesc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}serviceDesc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}serviceDesc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_requestDTO->serviceDesc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}serviceDesc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}serviceDesc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_requestDTO->requestStatus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "requestStatus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}requestStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}requestStatus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_requestDTO->requestStatus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}requestStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}requestStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_requestDTO->requestDate != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "requestDate", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}requestDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}requestDate...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_requestDTO->requestDate));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}requestDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}requestDate. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_requestDTO->obsStart != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "obsStart", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}obsStart. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}obsStart...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_requestDTO->obsStart));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}obsStart. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}obsStart. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_requestDTO->obsStop != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "obsStop", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}obsStop. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}obsStop...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_requestDTO->obsStop));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}obsStop. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}obsStop. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_requestDTO->specimenRec != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "specimenRec", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}specimenRec. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}specimenRec...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_requestDTO->specimenRec));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}specimenRec. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}specimenRec. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_requestDTO->clinicalInformation != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "clinicalInformation", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}clinicalInformation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}clinicalInformation...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_requestDTO->clinicalInformation));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}clinicalInformation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}clinicalInformation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a RequestDTO.
 *
 * @param _requestDTO The RequestDTO to free.
 */
static void freeNs0RequestType(struct PatientFolderAPI_ns0_request *_requestDTO) {
  int i;
  if (_requestDTO->requestId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor requestId of type PatientFolderAPI_ns0_request...\n");
#endif
    freeXsStringType(_requestDTO->requestId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor requestId of type PatientFolderAPI_ns0_request...\n");
#endif
    free(_requestDTO->requestId);
  }
  if (_requestDTO->requestType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor requestType of type PatientFolderAPI_ns0_request...\n");
#endif
    freeXsStringType(_requestDTO->requestType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor requestType of type PatientFolderAPI_ns0_request...\n");
#endif
    free(_requestDTO->requestType);
  }
  if (_requestDTO->serviceDesc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor serviceDesc of type PatientFolderAPI_ns0_request...\n");
#endif
    freeXsStringType(_requestDTO->serviceDesc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor serviceDesc of type PatientFolderAPI_ns0_request...\n");
#endif
    free(_requestDTO->serviceDesc);
  }
  if (_requestDTO->requestStatus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor requestStatus of type PatientFolderAPI_ns0_request...\n");
#endif
    freeXsStringType(_requestDTO->requestStatus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor requestStatus of type PatientFolderAPI_ns0_request...\n");
#endif
    free(_requestDTO->requestStatus);
  }
  if (_requestDTO->requestDate != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor requestDate of type PatientFolderAPI_ns0_request...\n");
#endif
    freeXsStringType(_requestDTO->requestDate);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor requestDate of type PatientFolderAPI_ns0_request...\n");
#endif
    free(_requestDTO->requestDate);
  }
  if (_requestDTO->obsStart != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor obsStart of type PatientFolderAPI_ns0_request...\n");
#endif
    freeXsStringType(_requestDTO->obsStart);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor obsStart of type PatientFolderAPI_ns0_request...\n");
#endif
    free(_requestDTO->obsStart);
  }
  if (_requestDTO->obsStop != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor obsStop of type PatientFolderAPI_ns0_request...\n");
#endif
    freeXsStringType(_requestDTO->obsStop);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor obsStop of type PatientFolderAPI_ns0_request...\n");
#endif
    free(_requestDTO->obsStop);
  }
  if (_requestDTO->specimenRec != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor specimenRec of type PatientFolderAPI_ns0_request...\n");
#endif
    freeXsStringType(_requestDTO->specimenRec);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor specimenRec of type PatientFolderAPI_ns0_request...\n");
#endif
    free(_requestDTO->specimenRec);
  }
  if (_requestDTO->clinicalInformation != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor clinicalInformation of type PatientFolderAPI_ns0_request...\n");
#endif
    freeXsStringType(_requestDTO->clinicalInformation);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor clinicalInformation of type PatientFolderAPI_ns0_request...\n");
#endif
    free(_requestDTO->clinicalInformation);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_request_M */
#ifndef DEF_PatientFolderAPI_ns0_results_M
#define DEF_PatientFolderAPI_ns0_results_M

/**
 * Reads a ResultDataDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ResultDataDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_results *xml_read_PatientFolderAPI_ns0_results(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ResultsElement(reader);
}

/**
 * Writes a ResultDataDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _resultDataDTO The ResultDataDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_results(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_results *_resultDataDTO) {
  return xmlTextWriterWriteNs0ResultsElementNS(writer, _resultDataDTO, 1);
}

/**
 * Frees a ResultDataDTO.
 *
 * @param _resultDataDTO The ResultDataDTO to free.
 */
void free_PatientFolderAPI_ns0_results(struct PatientFolderAPI_ns0_results *_resultDataDTO) {
  freeNs0ResultsType(_resultDataDTO);
  free(_resultDataDTO);
}

/**
 * Reads a ResultDataDTO element from XML. The element to be read is "results", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ResultDataDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_results *xmlTextReaderReadNs0ResultsElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_results *_resultDataDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "results", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}results.\n");
#endif
    _resultDataDTO = xmlTextReaderReadNs0ResultsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_resultDataDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}results failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}results failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _resultDataDTO;
}

/**
 * Writes a ResultDataDTO to XML under element name "results".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _resultDataDTO The ResultDataDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ResultsElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_results *_resultDataDTO) {
  return xmlTextWriterWriteNs0ResultsElementNS(writer, _resultDataDTO, 0);
}

/**
 * Writes a ResultDataDTO to XML under element name "results".
 *
 * @param writer The XML writer.
 * @param _resultDataDTO The ResultDataDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ResultsElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_results *_resultDataDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "results", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}results. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}results for root element {}results...\n");
#endif
  status = xmlTextWriterWriteNs0ResultsType(writer, _resultDataDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}results. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}results. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ResultDataDTO.
 *
 * @param _resultDataDTO The ResultDataDTO whose children are to be free.
 */
static void freeNs0ResultsElement(struct PatientFolderAPI_ns0_results *_resultDataDTO) {
  freeNs0ResultsType(_resultDataDTO);
}

/**
 * Reads a ResultDataDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the ResultDataDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_results *xmlTextReaderReadNs0ResultsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_results *_resultDataDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_results));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ResultsType(_resultDataDTO);
        free(_resultDataDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "report", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}report of type {}report.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ReportType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}report of type {}report.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResultsType(_resultDataDTO);
          free(_resultDataDTO);
          return NULL;
        }

        _resultDataDTO->report = realloc(_resultDataDTO->report, (_resultDataDTO->_sizeof_report + 1) * sizeof(struct PatientFolderAPI_ns0_report));
        memcpy(&(_resultDataDTO->report[_resultDataDTO->_sizeof_report++]), _child_accessor, sizeof(struct PatientFolderAPI_ns0_report));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "atomic", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}atomic of type {}atomic.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0AtomicType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}atomic of type {}atomic.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResultsType(_resultDataDTO);
          free(_resultDataDTO);
          return NULL;
        }

        _resultDataDTO->atomic = realloc(_resultDataDTO->atomic, (_resultDataDTO->_sizeof_atomic + 1) * sizeof(struct PatientFolderAPI_ns0_atomic));
        memcpy(&(_resultDataDTO->atomic[_resultDataDTO->_sizeof_atomic++]), _child_accessor, sizeof(struct PatientFolderAPI_ns0_atomic));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "order", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}order of type {}order.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0OrderType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}order of type {}order.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResultsType(_resultDataDTO);
          free(_resultDataDTO);
          return NULL;
        }

        _resultDataDTO->order = ((struct PatientFolderAPI_ns0_order*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "request", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}request of type {}request.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0RequestType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}request of type {}request.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResultsType(_resultDataDTO);
          free(_resultDataDTO);
          return NULL;
        }

        _resultDataDTO->request = ((struct PatientFolderAPI_ns0_request*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "copies", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}copies of type {}copiesto.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0CopiestoType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}copies of type {}copiesto.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResultsType(_resultDataDTO);
          free(_resultDataDTO);
          return NULL;
        }

        _resultDataDTO->copiesTo = ((struct PatientFolderAPI_ns0_copiesto*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "image", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}image of type {}image.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ImageType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}image of type {}image.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResultsType(_resultDataDTO);
          free(_resultDataDTO);
          return NULL;
        }

        _resultDataDTO->image = ((struct PatientFolderAPI_ns0_image*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}results.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}results. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _resultDataDTO;
}

/**
 * Writes a ResultDataDTO to XML.
 *
 * @param writer The XML writer.
 * @param _resultDataDTO The ResultDataDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ResultsType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_results *_resultDataDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _resultDataDTO->_sizeof_report; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "report", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}report. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}report for element {}report...\n");
#endif
    status = xmlTextWriterWriteNs0ReportType(writer, &(_resultDataDTO->report[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}report for element {}report. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}report. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _resultDataDTO->_sizeof_atomic; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "atomic", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}atomic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}atomic for element {}atomic...\n");
#endif
    status = xmlTextWriterWriteNs0AtomicType(writer, &(_resultDataDTO->atomic[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}atomic for element {}atomic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}atomic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_resultDataDTO->order != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "order", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}order. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}order for element {}order...\n");
#endif
    status = xmlTextWriterWriteNs0OrderType(writer, (_resultDataDTO->order));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}order for element {}order. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}order. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_resultDataDTO->request != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "request", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}request. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}request for element {}request...\n");
#endif
    status = xmlTextWriterWriteNs0RequestType(writer, (_resultDataDTO->request));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}request for element {}request. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}request. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_resultDataDTO->copiesTo != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "copies", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}copies. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}copiesto for element {}copies...\n");
#endif
    status = xmlTextWriterWriteNs0CopiestoType(writer, (_resultDataDTO->copiesTo));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}copiesto for element {}copies. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}copies. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_resultDataDTO->image != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "image", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}image. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}image for element {}image...\n");
#endif
    status = xmlTextWriterWriteNs0ImageType(writer, (_resultDataDTO->image));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}image for element {}image. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}image. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ResultDataDTO.
 *
 * @param _resultDataDTO The ResultDataDTO to free.
 */
static void freeNs0ResultsType(struct PatientFolderAPI_ns0_results *_resultDataDTO) {
  int i;
  if (_resultDataDTO->report != NULL) {
    for (i = 0; i < _resultDataDTO->_sizeof_report; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor report[%i] of type PatientFolderAPI_ns0_results...\n", i);
#endif
      freeNs0ReportType(&(_resultDataDTO->report[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor report of type PatientFolderAPI_ns0_results...\n");
#endif
    free(_resultDataDTO->report);
  }
  if (_resultDataDTO->atomic != NULL) {
    for (i = 0; i < _resultDataDTO->_sizeof_atomic; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor atomic[%i] of type PatientFolderAPI_ns0_results...\n", i);
#endif
      freeNs0AtomicType(&(_resultDataDTO->atomic[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor atomic of type PatientFolderAPI_ns0_results...\n");
#endif
    free(_resultDataDTO->atomic);
  }
  if (_resultDataDTO->order != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor order of type PatientFolderAPI_ns0_results...\n");
#endif
    freeNs0OrderType(_resultDataDTO->order);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor order of type PatientFolderAPI_ns0_results...\n");
#endif
    free(_resultDataDTO->order);
  }
  if (_resultDataDTO->request != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor request of type PatientFolderAPI_ns0_results...\n");
#endif
    freeNs0RequestType(_resultDataDTO->request);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor request of type PatientFolderAPI_ns0_results...\n");
#endif
    free(_resultDataDTO->request);
  }
  if (_resultDataDTO->copiesTo != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor copiesTo of type PatientFolderAPI_ns0_results...\n");
#endif
    freeNs0CopiestoType(_resultDataDTO->copiesTo);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor copiesTo of type PatientFolderAPI_ns0_results...\n");
#endif
    free(_resultDataDTO->copiesTo);
  }
  if (_resultDataDTO->image != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor image of type PatientFolderAPI_ns0_results...\n");
#endif
    freeNs0ImageType(_resultDataDTO->image);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor image of type PatientFolderAPI_ns0_results...\n");
#endif
    free(_resultDataDTO->image);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_results_M */
#ifndef DEF_PatientFolderAPI_ns0_Section_M
#define DEF_PatientFolderAPI_ns0_Section_M

/**
 * Reads a SectionDTO element from XML. The element to be read is "Section", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SectionDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Section *xml_read_PatientFolderAPI_ns0_Section(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SectionElement(reader);
}

/**
 * Writes a SectionDTO to XML under element name "Section".
 *
 * @param writer The XML writer.
 * @param _sectionDTO The SectionDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_Section(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Section *_sectionDTO) {
  return xmlTextWriterWriteNs0SectionElementNS(writer, _sectionDTO, 1);
}

/**
 * Frees a SectionDTO.
 *
 * @param _sectionDTO The SectionDTO to free.
 */
void free_PatientFolderAPI_ns0_Section(struct PatientFolderAPI_ns0_Section *_sectionDTO) {
  freeNs0SectionType(_sectionDTO);
  free(_sectionDTO);
}

/**
 * Reads a SectionDTO element from XML. The element to be read is "Section", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SectionDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_Section *xmlTextReaderReadNs0SectionElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_Section *_sectionDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Section", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}Section.\n");
#endif
    _sectionDTO = xmlTextReaderReadNs0SectionType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_sectionDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}Section failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}Section failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _sectionDTO;
}

/**
 * Writes a SectionDTO to XML under element name "Section".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _sectionDTO The SectionDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SectionElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Section *_sectionDTO) {
  return xmlTextWriterWriteNs0SectionElementNS(writer, _sectionDTO, 0);
}

/**
 * Writes a SectionDTO to XML under element name "Section".
 *
 * @param writer The XML writer.
 * @param _sectionDTO The SectionDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SectionElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Section *_sectionDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Section", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}Section. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}Section for root element {}Section...\n");
#endif
  status = xmlTextWriterWriteNs0SectionType(writer, _sectionDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}Section. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}Section. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SectionDTO.
 *
 * @param _sectionDTO The SectionDTO whose children are to be free.
 */
static void freeNs0SectionElement(struct PatientFolderAPI_ns0_Section *_sectionDTO) {
  freeNs0SectionType(_sectionDTO);
}

/**
 * Reads a SectionDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the SectionDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_Section *xmlTextReaderReadNs0SectionType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_Section *_sectionDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_Section));

  if (xmlTextReaderHasAttributes(reader)) {
    while (xmlTextReaderMoveToNextAttribute(reader)) {
      if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read type {http://www.w3.org/2001/XMLSchema}string from attribute {}src...\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
          //panic: unable to return the attribute value for some reason.
#if DEBUG_ENUNCIATE
          printf("Failed to read attribute {}src of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          freeNs0SectionType(_sectionDTO);
          free(_sectionDTO);
          return NULL;
        }
        _sectionDTO->src = ((xmlChar*)_child_accessor);
        continue;
      }
    }

    status = xmlTextReaderMoveToElement(reader);
    if (status < 1) {
      //panic: unable to return to the element node.
#if DEBUG_ENUNCIATE
      printf("Unable to return to element node from attributes.\n");
#endif
      freeNs0SectionType(_sectionDTO);
      free(_sectionDTO);
      return NULL;
    }
  }


  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SectionType(_sectionDTO);
        free(_sectionDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SectionType(_sectionDTO);
          free(_sectionDTO);
          return NULL;
        }

        _sectionDTO->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SectionType(_sectionDTO);
          free(_sectionDTO);
          return NULL;
        }

        _sectionDTO->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "episodal", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}episodal of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}episodal of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SectionType(_sectionDTO);
          free(_sectionDTO);
          return NULL;
        }

        _sectionDTO->episodal = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "diagnostic", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}diagnostic of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}diagnostic of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SectionType(_sectionDTO);
          free(_sectionDTO);
          return NULL;
        }

        _sectionDTO->diagnostic = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "EpisodeType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}EpisodeType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}EpisodeType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SectionType(_sectionDTO);
          free(_sectionDTO);
          return NULL;
        }

        _sectionDTO->episodeType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "rgbColor", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}rgbColor of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}rgbColor of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SectionType(_sectionDTO);
          free(_sectionDTO);
          return NULL;
        }

        _sectionDTO->rgbColor = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "DocCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}DocCount of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}DocCount of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SectionType(_sectionDTO);
          free(_sectionDTO);
          return NULL;
        }

        _sectionDTO->docCount = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "EpisodeCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}EpisodeCount of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}EpisodeCount of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SectionType(_sectionDTO);
          free(_sectionDTO);
          return NULL;
        }

        _sectionDTO->episodeCount = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lastModifiedTimestamp", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lastModifiedTimestamp of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
        _child_accessor = xmlTextReaderReadXsDateTimeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lastModifiedTimestamp of type {http://www.w3.org/2001/XMLSchema}dateTime.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0SectionType(_sectionDTO);
          free(_sectionDTO);
          return NULL;
        }

        _sectionDTO->lastModifiedTimestamp = ((struct tm*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}Section.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}Section. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _sectionDTO;
}

/**
 * Writes a SectionDTO to XML.
 *
 * @param writer The XML writer.
 * @param _sectionDTO The SectionDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0SectionType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_Section *_sectionDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_sectionDTO->src != NULL) {
    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start attribute {}src. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for attribute {}src...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_sectionDTO->src));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end attribute {}src. status: %i", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_sectionDTO->id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_sectionDTO->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_sectionDTO->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_sectionDTO->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "episodal", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}episodal. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}episodal...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_sectionDTO->episodal));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}episodal. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}episodal. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "diagnostic", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}diagnostic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}diagnostic...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_sectionDTO->diagnostic));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}diagnostic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}diagnostic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_sectionDTO->episodeType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "EpisodeType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}EpisodeType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}EpisodeType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_sectionDTO->episodeType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}EpisodeType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}EpisodeType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_sectionDTO->rgbColor != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "rgbColor", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}rgbColor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}rgbColor...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_sectionDTO->rgbColor));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}rgbColor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}rgbColor. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}DocCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}DocCount...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_sectionDTO->docCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}DocCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}DocCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "EpisodeCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}EpisodeCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}EpisodeCount...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_sectionDTO->episodeCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}EpisodeCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}EpisodeCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_sectionDTO->lastModifiedTimestamp != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastModifiedTimestamp", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lastModifiedTimestamp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}dateTime for element {}lastModifiedTimestamp...\n");
#endif
    status = xmlTextWriterWriteXsDateTimeType(writer, (_sectionDTO->lastModifiedTimestamp));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}dateTime for element {}lastModifiedTimestamp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lastModifiedTimestamp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SectionDTO.
 *
 * @param _sectionDTO The SectionDTO to free.
 */
static void freeNs0SectionType(struct PatientFolderAPI_ns0_Section *_sectionDTO) {
  int i;
  if (_sectionDTO->src != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor src of type PatientFolderAPI_ns0_Section...\n");
#endif
    freeXsStringType(_sectionDTO->src);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor src of type PatientFolderAPI_ns0_Section...\n");
#endif
    free(_sectionDTO->src);
  }
  if (_sectionDTO->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type PatientFolderAPI_ns0_Section...\n");
#endif
    freeXsStringType(_sectionDTO->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type PatientFolderAPI_ns0_Section...\n");
#endif
    free(_sectionDTO->id);
  }
  if (_sectionDTO->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type PatientFolderAPI_ns0_Section...\n");
#endif
    freeXsStringType(_sectionDTO->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type PatientFolderAPI_ns0_Section...\n");
#endif
    free(_sectionDTO->name);
  }
  if (_sectionDTO->episodeType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor episodeType of type PatientFolderAPI_ns0_Section...\n");
#endif
    freeXsStringType(_sectionDTO->episodeType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor episodeType of type PatientFolderAPI_ns0_Section...\n");
#endif
    free(_sectionDTO->episodeType);
  }
  if (_sectionDTO->rgbColor != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor rgbColor of type PatientFolderAPI_ns0_Section...\n");
#endif
    freeXsStringType(_sectionDTO->rgbColor);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor rgbColor of type PatientFolderAPI_ns0_Section...\n");
#endif
    free(_sectionDTO->rgbColor);
  }
  if (_sectionDTO->lastModifiedTimestamp != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor lastModifiedTimestamp of type PatientFolderAPI_ns0_Section...\n");
#endif
    freeXsDateTimeType(_sectionDTO->lastModifiedTimestamp);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor lastModifiedTimestamp of type PatientFolderAPI_ns0_Section...\n");
#endif
    free(_sectionDTO->lastModifiedTimestamp);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_Section_M */
#ifndef DEF_PatientFolderAPI_ns0_UnitListItem_M
#define DEF_PatientFolderAPI_ns0_UnitListItem_M

/**
 * Reads a UnitListItemDTO element from XML. The element to be read is "UnitListItem", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The UnitListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_UnitListItem *xml_read_PatientFolderAPI_ns0_UnitListItem(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0UnitListItemElement(reader);
}

/**
 * Writes a UnitListItemDTO to XML under element name "UnitListItem".
 *
 * @param writer The XML writer.
 * @param _unitListItemDTO The UnitListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_UnitListItem(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO) {
  return xmlTextWriterWriteNs0UnitListItemElementNS(writer, _unitListItemDTO, 1);
}

/**
 * Frees a UnitListItemDTO.
 *
 * @param _unitListItemDTO The UnitListItemDTO to free.
 */
void free_PatientFolderAPI_ns0_UnitListItem(struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO) {
  freeNs0UnitListItemType(_unitListItemDTO);
  free(_unitListItemDTO);
}

/**
 * Reads a UnitListItemDTO element from XML. The element to be read is "UnitListItem", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The UnitListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_UnitListItem *xmlTextReaderReadNs0UnitListItemElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "UnitListItem", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}UnitListItem.\n");
#endif
    _unitListItemDTO = xmlTextReaderReadNs0UnitListItemType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_unitListItemDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}UnitListItem failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}UnitListItem failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _unitListItemDTO;
}

/**
 * Writes a UnitListItemDTO to XML under element name "UnitListItem".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _unitListItemDTO The UnitListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UnitListItemElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO) {
  return xmlTextWriterWriteNs0UnitListItemElementNS(writer, _unitListItemDTO, 0);
}

/**
 * Writes a UnitListItemDTO to XML under element name "UnitListItem".
 *
 * @param writer The XML writer.
 * @param _unitListItemDTO The UnitListItemDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UnitListItemElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "UnitListItem", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}UnitListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}UnitListItem for root element {}UnitListItem...\n");
#endif
  status = xmlTextWriterWriteNs0UnitListItemType(writer, _unitListItemDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}UnitListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}UnitListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a UnitListItemDTO.
 *
 * @param _unitListItemDTO The UnitListItemDTO whose children are to be free.
 */
static void freeNs0UnitListItemElement(struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO) {
  freeNs0UnitListItemType(_unitListItemDTO);
}

/**
 * Reads a UnitListItemDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the UnitListItemDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_UnitListItem *xmlTextReaderReadNs0UnitListItemType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_UnitListItem));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0UnitListItemType(_unitListItemDTO);
        free(_unitListItemDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientIdNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UnitListItemType(_unitListItemDTO);
          free(_unitListItemDTO);
          return NULL;
        }

        _unitListItemDTO->patientIdNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UnitListItemType(_unitListItemDTO);
          free(_unitListItemDTO);
          return NULL;
        }

        _unitListItemDTO->patientSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UnitListItemType(_unitListItemDTO);
          free(_unitListItemDTO);
          return NULL;
        }

        _unitListItemDTO->up = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Domain", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UnitListItemType(_unitListItemDTO);
          free(_unitListItemDTO);
          return NULL;
        }

        _unitListItemDTO->domain = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Campus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UnitListItemType(_unitListItemDTO);
          free(_unitListItemDTO);
          return NULL;
        }

        _unitListItemDTO->campus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Code", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UnitListItemType(_unitListItemDTO);
          free(_unitListItemDTO);
          return NULL;
        }

        _unitListItemDTO->code = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ListId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UnitListItemType(_unitListItemDTO);
          free(_unitListItemDTO);
          return NULL;
        }

        _unitListItemDTO->listId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UnitListItemType(_unitListItemDTO);
          free(_unitListItemDTO);
          return NULL;
        }

        _unitListItemDTO->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}UnitListItem.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}UnitListItem. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _unitListItemDTO;
}

/**
 * Writes a UnitListItemDTO to XML.
 *
 * @param writer The XML writer.
 * @param _unitListItemDTO The UnitListItemDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0UnitListItemType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_unitListItemDTO->patientIdNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientIdNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_unitListItemDTO->patientIdNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_unitListItemDTO->patientSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_unitListItemDTO->patientSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_unitListItemDTO->up != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}up...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_unitListItemDTO->up));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_unitListItemDTO->domain != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Domain", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Domain. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Domain...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_unitListItemDTO->domain));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Domain. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Domain. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_unitListItemDTO->campus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Campus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Campus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_unitListItemDTO->campus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_unitListItemDTO->code != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Code", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Code...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_unitListItemDTO->code));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_unitListItemDTO->listId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ListId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ListId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_unitListItemDTO->listId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_unitListItemDTO->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_unitListItemDTO->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a UnitListItemDTO.
 *
 * @param _unitListItemDTO The UnitListItemDTO to free.
 */
static void freeNs0UnitListItemType(struct PatientFolderAPI_ns0_UnitListItem *_unitListItemDTO) {
  int i;
  if (_unitListItemDTO->patientIdNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientIdNs of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    freeXsStringType(_unitListItemDTO->patientIdNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientIdNs of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    free(_unitListItemDTO->patientIdNs);
  }
  if (_unitListItemDTO->patientSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientSrc of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    freeXsStringType(_unitListItemDTO->patientSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientSrc of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    free(_unitListItemDTO->patientSrc);
  }
  if (_unitListItemDTO->up != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor up of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    freeXsStringType(_unitListItemDTO->up);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor up of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    free(_unitListItemDTO->up);
  }
  if (_unitListItemDTO->domain != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor domain of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    freeXsStringType(_unitListItemDTO->domain);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor domain of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    free(_unitListItemDTO->domain);
  }
  if (_unitListItemDTO->campus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor campus of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    freeXsStringType(_unitListItemDTO->campus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor campus of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    free(_unitListItemDTO->campus);
  }
  if (_unitListItemDTO->code != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor code of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    freeXsStringType(_unitListItemDTO->code);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor code of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    free(_unitListItemDTO->code);
  }
  if (_unitListItemDTO->listId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor listId of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    freeXsStringType(_unitListItemDTO->listId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor listId of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    free(_unitListItemDTO->listId);
  }
  if (_unitListItemDTO->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    freeXsStringType(_unitListItemDTO->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type PatientFolderAPI_ns0_UnitListItem...\n");
#endif
    free(_unitListItemDTO->description);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_UnitListItem_M */
#ifndef DEF_PatientFolderAPI_ns0_WardListItem_M
#define DEF_PatientFolderAPI_ns0_WardListItem_M

/**
 * Reads a WardListItemDTO element from XML. The element to be read is "WardListItem", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The WardListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_WardListItem *xml_read_PatientFolderAPI_ns0_WardListItem(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0WardListItemElement(reader);
}

/**
 * Writes a WardListItemDTO to XML under element name "WardListItem".
 *
 * @param writer The XML writer.
 * @param _wardListItemDTO The WardListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_PatientFolderAPI_ns0_WardListItem(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO) {
  return xmlTextWriterWriteNs0WardListItemElementNS(writer, _wardListItemDTO, 1);
}

/**
 * Frees a WardListItemDTO.
 *
 * @param _wardListItemDTO The WardListItemDTO to free.
 */
void free_PatientFolderAPI_ns0_WardListItem(struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO) {
  freeNs0WardListItemType(_wardListItemDTO);
  free(_wardListItemDTO);
}

/**
 * Reads a WardListItemDTO element from XML. The element to be read is "WardListItem", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The WardListItemDTO, or NULL in case of error.
 */
struct PatientFolderAPI_ns0_WardListItem *xmlTextReaderReadNs0WardListItemElement(xmlTextReaderPtr reader) {
  struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "WardListItem", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}WardListItem.\n");
#endif
    _wardListItemDTO = xmlTextReaderReadNs0WardListItemType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_wardListItemDTO == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}WardListItem failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}WardListItem failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _wardListItemDTO;
}

/**
 * Writes a WardListItemDTO to XML under element name "WardListItem".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _wardListItemDTO The WardListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0WardListItemElement(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO) {
  return xmlTextWriterWriteNs0WardListItemElementNS(writer, _wardListItemDTO, 0);
}

/**
 * Writes a WardListItemDTO to XML under element name "WardListItem".
 *
 * @param writer The XML writer.
 * @param _wardListItemDTO The WardListItemDTO to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0WardListItemElementNS(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "WardListItem", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}WardListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}WardListItem for root element {}WardListItem...\n");
#endif
  status = xmlTextWriterWriteNs0WardListItemType(writer, _wardListItemDTO);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}WardListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}WardListItem. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a WardListItemDTO.
 *
 * @param _wardListItemDTO The WardListItemDTO whose children are to be free.
 */
static void freeNs0WardListItemElement(struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO) {
  freeNs0WardListItemType(_wardListItemDTO);
}

/**
 * Reads a WardListItemDTO from XML. The reader is assumed to be at the start element.
 *
 * @return the WardListItemDTO, or NULL in case of error.
 */
static struct PatientFolderAPI_ns0_WardListItem *xmlTextReaderReadNs0WardListItemType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO = calloc(1, sizeof(struct PatientFolderAPI_ns0_WardListItem));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0WardListItemType(_wardListItemDTO);
        free(_wardListItemDTO);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientIdNs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0WardListItemType(_wardListItemDTO);
          free(_wardListItemDTO);
          return NULL;
        }

        _wardListItemDTO->patientIdNs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "patientSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0WardListItemType(_wardListItemDTO);
          free(_wardListItemDTO);
          return NULL;
        }

        _wardListItemDTO->patientSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0WardListItemType(_wardListItemDTO);
          free(_wardListItemDTO);
          return NULL;
        }

        _wardListItemDTO->up = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Domain", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0WardListItemType(_wardListItemDTO);
          free(_wardListItemDTO);
          return NULL;
        }

        _wardListItemDTO->domain = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Campus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0WardListItemType(_wardListItemDTO);
          free(_wardListItemDTO);
          return NULL;
        }

        _wardListItemDTO->campus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Code", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0WardListItemType(_wardListItemDTO);
          free(_wardListItemDTO);
          return NULL;
        }

        _wardListItemDTO->code = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ListId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0WardListItemType(_wardListItemDTO);
          free(_wardListItemDTO);
          return NULL;
        }

        _wardListItemDTO->listId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "Description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0WardListItemType(_wardListItemDTO);
          free(_wardListItemDTO);
          return NULL;
        }

        _wardListItemDTO->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}WardListItem.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}WardListItem. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _wardListItemDTO;
}

/**
 * Writes a WardListItemDTO to XML.
 *
 * @param writer The XML writer.
 * @param _wardListItemDTO The WardListItemDTO to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0WardListItemType(xmlTextWriterPtr writer, struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_wardListItemDTO->patientIdNs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientIdNs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_wardListItemDTO->patientIdNs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientIdNs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_wardListItemDTO->patientSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_wardListItemDTO->patientSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}patientSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_wardListItemDTO->up != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}up...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_wardListItemDTO->up));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_wardListItemDTO->domain != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Domain", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Domain. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Domain...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_wardListItemDTO->domain));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Domain. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Domain. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_wardListItemDTO->campus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Campus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Campus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_wardListItemDTO->campus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Campus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_wardListItemDTO->code != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Code", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Code...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_wardListItemDTO->code));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Code. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_wardListItemDTO->listId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ListId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ListId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_wardListItemDTO->listId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ListId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_wardListItemDTO->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}Description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_wardListItemDTO->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}Description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a WardListItemDTO.
 *
 * @param _wardListItemDTO The WardListItemDTO to free.
 */
static void freeNs0WardListItemType(struct PatientFolderAPI_ns0_WardListItem *_wardListItemDTO) {
  int i;
  if (_wardListItemDTO->patientIdNs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientIdNs of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    freeXsStringType(_wardListItemDTO->patientIdNs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientIdNs of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    free(_wardListItemDTO->patientIdNs);
  }
  if (_wardListItemDTO->patientSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor patientSrc of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    freeXsStringType(_wardListItemDTO->patientSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor patientSrc of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    free(_wardListItemDTO->patientSrc);
  }
  if (_wardListItemDTO->up != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor up of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    freeXsStringType(_wardListItemDTO->up);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor up of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    free(_wardListItemDTO->up);
  }
  if (_wardListItemDTO->domain != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor domain of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    freeXsStringType(_wardListItemDTO->domain);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor domain of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    free(_wardListItemDTO->domain);
  }
  if (_wardListItemDTO->campus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor campus of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    freeXsStringType(_wardListItemDTO->campus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor campus of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    free(_wardListItemDTO->campus);
  }
  if (_wardListItemDTO->code != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor code of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    freeXsStringType(_wardListItemDTO->code);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor code of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    free(_wardListItemDTO->code);
  }
  if (_wardListItemDTO->listId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor listId of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    freeXsStringType(_wardListItemDTO->listId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor listId of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    free(_wardListItemDTO->listId);
  }
  if (_wardListItemDTO->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    freeXsStringType(_wardListItemDTO->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type PatientFolderAPI_ns0_WardListItem...\n");
#endif
    free(_wardListItemDTO->description);
  }
}
#endif /* DEF_PatientFolderAPI_ns0_WardListItem_M */
