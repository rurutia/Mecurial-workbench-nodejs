#import "PatientFolderAPI.h"
#ifndef DEF_PATIENTFOLDERAPINS0ActivityFeedDTO_M
#define DEF_PATIENTFOLDERAPINS0ActivityFeedDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0ActivityFeedDTO

/**
 * (no documentation provided)
 */
- (NSString *) src
{
  return _src;
}

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc
{
  [newSrc retain];
  [_src release];
  _src = newSrc;
}

/**
 * (no documentation provided)
 */
- (NSString *) urno
{
  return _urno;
}

/**
 * (no documentation provided)
 */
- (void) setUrno: (NSString *) newUrno
{
  [newUrno retain];
  [_urno release];
  _urno = newUrno;
}

/**
 * (no documentation provided)
 */
- (NSString *) patientNs
{
  return _patientNs;
}

/**
 * (no documentation provided)
 */
- (void) setPatientNs: (NSString *) newPatientNs
{
  [newPatientNs retain];
  [_patientNs release];
  _patientNs = newPatientNs;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ListDTO *) electronicAlerts
{
  return _electronicAlerts;
}

/**
 * (no documentation provided)
 */
- (void) setElectronicAlerts: (PATIENTFOLDERAPINS0ListDTO *) newElectronicAlerts
{
  [newElectronicAlerts retain];
  [_electronicAlerts release];
  _electronicAlerts = newElectronicAlerts;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ListDTO *) scannedAlerts
{
  return _scannedAlerts;
}

/**
 * (no documentation provided)
 */
- (void) setScannedAlerts: (PATIENTFOLDERAPINS0ListDTO *) newScannedAlerts
{
  [newScannedAlerts retain];
  [_scannedAlerts release];
  _scannedAlerts = newScannedAlerts;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ListDTO *) documents
{
  return _documents;
}

/**
 * (no documentation provided)
 */
- (void) setDocuments: (PATIENTFOLDERAPINS0ListDTO *) newDocuments
{
  [newDocuments retain];
  [_documents release];
  _documents = newDocuments;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ListDTO *) results
{
  return _results;
}

/**
 * (no documentation provided)
 */
- (void) setResults: (PATIENTFOLDERAPINS0ListDTO *) newResults
{
  [newResults retain];
  [_results release];
  _results = newResults;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ListDTO *) episodes
{
  return _episodes;
}

/**
 * (no documentation provided)
 */
- (void) setEpisodes: (PATIENTFOLDERAPINS0ListDTO *) newEpisodes
{
  [newEpisodes retain];
  [_episodes release];
  _episodes = newEpisodes;
}

- (void) dealloc
{
  [self setSrc: nil];
  [self setUrno: nil];
  [self setPatientNs: nil];
  [self setElectronicAlerts: nil];
  [self setScannedAlerts: nil];
  [self setDocuments: nil];
  [self setResults: nil];
  [self setEpisodes: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0ActivityFeedDTO *_pATIENTFOLDERAPINS0ActivityFeedDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0ActivityFeedDTO = (PATIENTFOLDERAPINS0ActivityFeedDTO *) [PATIENTFOLDERAPINS0ActivityFeedDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0ActivityFeedDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0ActivityFeedDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0ActivityFeedDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0ActivityFeedDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0ActivityFeedDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0ActivityFeedDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0ActivityFeedDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0ActivityFeedDTO *_pATIENTFOLDERAPINS0ActivityFeedDTO = [[PATIENTFOLDERAPINS0ActivityFeedDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0ActivityFeedDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0ActivityFeedDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0ActivityFeedDTO autorelease];
  return _pATIENTFOLDERAPINS0ActivityFeedDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0ActivityFeedDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0ActivityFeedDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0ActivityFeedDTO from an XML reader. The element to be read is
 * "Feeds".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0ActivityFeedDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0ActivityFeedDTO *_activityFeedDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element Feeds."];
    }
  }

  if (xmlStrcmp(BAD_CAST "Feeds", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}Feeds.");
#endif
    _activityFeedDTO = (PATIENTFOLDERAPINS0ActivityFeedDTO *)[PATIENTFOLDERAPINS0ActivityFeedDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}Feeds.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ActivityFeedDTO. Expected element Feeds. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ActivityFeedDTO. Expected element Feeds. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _activityFeedDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0ActivityFeedDTO to XML under element name "Feeds".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _activityFeedDTO The ActivityFeedDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0ActivityFeedDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Feeds", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}Feeds. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}ActivityFeeds for root element {}Feeds...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}ActivityFeeds for root element {}Feeds...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}Feeds. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}src...");
#endif
    [self setSrc: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}src...");
#endif
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Urno", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUrno: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "PatientNs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPatientNs: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ElectronicAlerts", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ElectronicAlerts of type {}result.");
#endif
    __child = [PATIENTFOLDERAPINS0ListDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ElectronicAlerts of type {}result.");
#endif

    [self setElectronicAlerts: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ScannedAlerts", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ScannedAlerts of type {}result.");
#endif
    __child = [PATIENTFOLDERAPINS0ListDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ScannedAlerts of type {}result.");
#endif

    [self setScannedAlerts: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Documents", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Documents of type {}result.");
#endif
    __child = [PATIENTFOLDERAPINS0ListDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Documents of type {}result.");
#endif

    [self setDocuments: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "results", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}results of type {}result.");
#endif
    __child = [PATIENTFOLDERAPINS0ListDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}results of type {}result.");
#endif

    [self setResults: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Episodes", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Episodes of type {}result.");
#endif
    __child = [PATIENTFOLDERAPINS0ListDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Episodes of type {}result.");
#endif

    [self setEpisodes: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

  if ([self src]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}src."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}src...");
#endif
    [[self src] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}src...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}src."];
    }
  }
}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self urno]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Urno", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Urno."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Urno...");
#endif
    [[self urno] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Urno...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Urno."];
    }
  }
  if ([self patientNs]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PatientNs", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}PatientNs."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}PatientNs...");
#endif
    [[self patientNs] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}PatientNs...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}PatientNs."];
    }
  }
  if ([self electronicAlerts]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ElectronicAlerts", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ElectronicAlerts."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ElectronicAlerts...");
#endif
    [[self electronicAlerts] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ElectronicAlerts...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ElectronicAlerts."];
    }
  }
  if ([self scannedAlerts]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ScannedAlerts", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ScannedAlerts."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ScannedAlerts...");
#endif
    [[self scannedAlerts] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ScannedAlerts...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ScannedAlerts."];
    }
  }
  if ([self documents]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Documents", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Documents."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Documents...");
#endif
    [[self documents] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Documents...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Documents."];
    }
  }
  if ([self results]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "results", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}results."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}results...");
#endif
    [[self results] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}results...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}results."];
    }
  }
  if ([self episodes]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Episodes", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Episodes."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Episodes...");
#endif
    [[self episodes] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Episodes...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Episodes."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0ActivityFeedDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0ActivityFeedDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0Status_M
#define DEF_PATIENTFOLDERAPINS0Status_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0Status

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (NSString *) text
{
  return _text;
}

/**
 * (no documentation provided)
 */
- (void) setText: (NSString *) newText
{
  [newText retain];
  [_text release];
  _text = newText;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ItemIdent *) orderControl
{
  return _orderControl;
}

/**
 * (no documentation provided)
 */
- (void) setOrderControl: (PATIENTFOLDERAPINS0ItemIdent *) newOrderControl
{
  [newOrderControl retain];
  [_orderControl release];
  _orderControl = newOrderControl;
}

- (void) dealloc
{
  [self setIdentifier: nil];
  [self setText: nil];
  [self setOrderControl: nil];
  [super dealloc];
}
@end /* implementation PATIENTFOLDERAPINS0Status */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0Status (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface PATIENTFOLDERAPINS0Status (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0Status (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0Status from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0Status defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0Status *_pATIENTFOLDERAPINS0Status = [[PATIENTFOLDERAPINS0Status alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0Status initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0Status = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0Status autorelease];
  return _pATIENTFOLDERAPINS0Status;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0Status according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0Status to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "text", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setText: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "order_control", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}order_control of type {}item_ident.");
#endif
    __child = [PATIENTFOLDERAPINS0ItemIdent readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}order_control of type {}item_ident.");
#endif

    [self setOrderControl: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self text]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "text", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}text."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}text...");
#endif
    [[self text] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}text...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}text."];
    }
  }
  if ([self orderControl]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "order_control", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}order_control."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}order_control...");
#endif
    [[self orderControl] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}order_control...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}order_control."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0Status (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0Status_M */
#ifndef DEF_PATIENTFOLDERAPINS0AtomicDTO_M
#define DEF_PATIENTFOLDERAPINS0AtomicDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0AtomicDTO

/**
 * (no documentation provided)
 */
- (NSString *) valueTypeID
{
  return _valueTypeID;
}

/**
 * (no documentation provided)
 */
- (void) setValueTypeID: (NSString *) newValueTypeID
{
  [newValueTypeID retain];
  [_valueTypeID release];
  _valueTypeID = newValueTypeID;
}

/**
 * (no documentation provided)
 */
- (NSString *) valueTypeText
{
  return _valueTypeText;
}

/**
 * (no documentation provided)
 */
- (void) setValueTypeText: (NSString *) newValueTypeText
{
  [newValueTypeText retain];
  [_valueTypeText release];
  _valueTypeText = newValueTypeText;
}

/**
 * (no documentation provided)
 */
- (NSString *) value
{
  return _value;
}

/**
 * (no documentation provided)
 */
- (void) setValue: (NSString *) newValue
{
  [newValue retain];
  [_value release];
  _value = newValue;
}

/**
 * (no documentation provided)
 */
- (NSString *) units
{
  return _units;
}

/**
 * (no documentation provided)
 */
- (void) setUnits: (NSString *) newUnits
{
  [newUnits retain];
  [_units release];
  _units = newUnits;
}

/**
 * (no documentation provided)
 */
- (NSString *) referenceRange
{
  return _referenceRange;
}

/**
 * (no documentation provided)
 */
- (void) setReferenceRange: (NSString *) newReferenceRange
{
  [newReferenceRange retain];
  [_referenceRange release];
  _referenceRange = newReferenceRange;
}

/**
 * (no documentation provided)
 */
- (NSString *) abnormalFLagText
{
  return _abnormalFLagText;
}

/**
 * (no documentation provided)
 */
- (void) setAbnormalFLagText: (NSString *) newAbnormalFLagText
{
  [newAbnormalFLagText retain];
  [_abnormalFLagText release];
  _abnormalFLagText = newAbnormalFLagText;
}

/**
 * (no documentation provided)
 */
- (NSString *) natureOfAbnormalTest
{
  return _natureOfAbnormalTest;
}

/**
 * (no documentation provided)
 */
- (void) setNatureOfAbnormalTest: (NSString *) newNatureOfAbnormalTest
{
  [newNatureOfAbnormalTest retain];
  [_natureOfAbnormalTest release];
  _natureOfAbnormalTest = newNatureOfAbnormalTest;
}

/**
 * (no documentation provided)
 */
- (NSString *) statusText
{
  return _statusText;
}

/**
 * (no documentation provided)
 */
- (void) setStatusText: (NSString *) newStatusText
{
  [newStatusText retain];
  [_statusText release];
  _statusText = newStatusText;
}

- (void) dealloc
{
  [self setValueTypeID: nil];
  [self setValueTypeText: nil];
  [self setValue: nil];
  [self setUnits: nil];
  [self setReferenceRange: nil];
  [self setAbnormalFLagText: nil];
  [self setNatureOfAbnormalTest: nil];
  [self setStatusText: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0AtomicDTO *_pATIENTFOLDERAPINS0AtomicDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0AtomicDTO = (PATIENTFOLDERAPINS0AtomicDTO *) [PATIENTFOLDERAPINS0AtomicDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0AtomicDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0AtomicDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0AtomicDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0AtomicDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0AtomicDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0AtomicDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0AtomicDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0AtomicDTO *_pATIENTFOLDERAPINS0AtomicDTO = [[PATIENTFOLDERAPINS0AtomicDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0AtomicDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0AtomicDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0AtomicDTO autorelease];
  return _pATIENTFOLDERAPINS0AtomicDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0AtomicDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0AtomicDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0AtomicDTO from an XML reader. The element to be read is
 * "atomic".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0AtomicDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0AtomicDTO *_atomicDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element atomic."];
    }
  }

  if (xmlStrcmp(BAD_CAST "atomic", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}atomic.");
#endif
    _atomicDTO = (PATIENTFOLDERAPINS0AtomicDTO *)[PATIENTFOLDERAPINS0AtomicDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}atomic.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0AtomicDTO. Expected element atomic. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0AtomicDTO. Expected element atomic. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _atomicDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0AtomicDTO to XML under element name "atomic".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _atomicDTO The AtomicDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0AtomicDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "atomic", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}atomic. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}atomic for root element {}atomic...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}atomic for root element {}atomic...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}atomic. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "valueTypeID", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}valueTypeID of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}valueTypeID of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setValueTypeID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "valueTypeText", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}valueTypeText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}valueTypeText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setValueTypeText: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "value", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}value of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}value of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setValue: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "units", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}units of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}units of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUnits: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "referenceRange", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}referenceRange of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}referenceRange of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setReferenceRange: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "abnormalFLagText", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}abnormalFLagText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}abnormalFLagText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAbnormalFLagText: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "natureOfAbnormalTest", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}natureOfAbnormalTest of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}natureOfAbnormalTest of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNatureOfAbnormalTest: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "statusText", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}statusText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}statusText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setStatusText: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self valueTypeID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "valueTypeID", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}valueTypeID."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}valueTypeID...");
#endif
    [[self valueTypeID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}valueTypeID...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}valueTypeID."];
    }
  }
  if ([self valueTypeText]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "valueTypeText", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}valueTypeText."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}valueTypeText...");
#endif
    [[self valueTypeText] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}valueTypeText...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}valueTypeText."];
    }
  }
  if ([self value]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "value", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}value."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}value...");
#endif
    [[self value] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}value...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}value."];
    }
  }
  if ([self units]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "units", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}units."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}units...");
#endif
    [[self units] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}units...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}units."];
    }
  }
  if ([self referenceRange]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "referenceRange", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}referenceRange."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}referenceRange...");
#endif
    [[self referenceRange] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}referenceRange...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}referenceRange."];
    }
  }
  if ([self abnormalFLagText]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "abnormalFLagText", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}abnormalFLagText."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}abnormalFLagText...");
#endif
    [[self abnormalFLagText] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}abnormalFLagText...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}abnormalFLagText."];
    }
  }
  if ([self natureOfAbnormalTest]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "natureOfAbnormalTest", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}natureOfAbnormalTest."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}natureOfAbnormalTest...");
#endif
    [[self natureOfAbnormalTest] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}natureOfAbnormalTest...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}natureOfAbnormalTest."];
    }
  }
  if ([self statusText]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "statusText", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}statusText."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}statusText...");
#endif
    [[self statusText] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}statusText...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}statusText."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0AtomicDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0AtomicDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0DocTypeSpecificDTO_M
#define DEF_PATIENTFOLDERAPINS0DocTypeSpecificDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0DocTypeSpecificDTO

- (void) dealloc
{
  [super dealloc];
}
@end /* implementation PATIENTFOLDERAPINS0DocTypeSpecificDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0DocTypeSpecificDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface PATIENTFOLDERAPINS0DocTypeSpecificDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0DocTypeSpecificDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0DocTypeSpecificDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0DocTypeSpecificDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0DocTypeSpecificDTO *_pATIENTFOLDERAPINS0DocTypeSpecificDTO = [[PATIENTFOLDERAPINS0DocTypeSpecificDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0DocTypeSpecificDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0DocTypeSpecificDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0DocTypeSpecificDTO autorelease];
  return _pATIENTFOLDERAPINS0DocTypeSpecificDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0DocTypeSpecificDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0DocTypeSpecificDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation PATIENTFOLDERAPINS0DocTypeSpecificDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0DocTypeSpecificDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0EntryDTO_M
#define DEF_PATIENTFOLDERAPINS0EntryDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0EntryDTO

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSString *) label
{
  return _label;
}

/**
 * (no documentation provided)
 */
- (void) setLabel: (NSString *) newLabel
{
  [newLabel retain];
  [_label release];
  _label = newLabel;
}

- (void) dealloc
{
  [self setName: nil];
  [self setLabel: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0EntryDTO *_pATIENTFOLDERAPINS0EntryDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0EntryDTO = (PATIENTFOLDERAPINS0EntryDTO *) [PATIENTFOLDERAPINS0EntryDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0EntryDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0EntryDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0EntryDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0EntryDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0EntryDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0EntryDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0EntryDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0EntryDTO *_pATIENTFOLDERAPINS0EntryDTO = [[PATIENTFOLDERAPINS0EntryDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0EntryDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0EntryDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0EntryDTO autorelease];
  return _pATIENTFOLDERAPINS0EntryDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0EntryDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0EntryDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0EntryDTO from an XML reader. The element to be read is
 * "entry".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0EntryDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0EntryDTO *_entryDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element entry."];
    }
  }

  if (xmlStrcmp(BAD_CAST "entry", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}entry.");
#endif
    _entryDTO = (PATIENTFOLDERAPINS0EntryDTO *)[PATIENTFOLDERAPINS0EntryDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}entry.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0EntryDTO. Expected element entry. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0EntryDTO. Expected element entry. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _entryDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0EntryDTO to XML under element name "entry".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _entryDTO The EntryDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0EntryDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "entry", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}entry. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}entry for root element {}entry...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}entry for root element {}entry...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}entry. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "label", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}label of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}label of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLabel: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self label]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "label", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}label."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}label...");
#endif
    [[self label] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}label...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}label."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0EntryDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0EntryDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0ExtIdDTO_M
#define DEF_PATIENTFOLDERAPINS0ExtIdDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0ExtIdDTO

/**
 * (no documentation provided)
 */
- (NSString *) extIdVal
{
  return _extIdVal;
}

/**
 * (no documentation provided)
 */
- (void) setExtIdVal: (NSString *) newExtIdVal
{
  [newExtIdVal retain];
  [_extIdVal release];
  _extIdVal = newExtIdVal;
}

/**
 * (no documentation provided)
 */
- (NSString *) extNsVal
{
  return _extNsVal;
}

/**
 * (no documentation provided)
 */
- (void) setExtNsVal: (NSString *) newExtNsVal
{
  [newExtNsVal retain];
  [_extNsVal release];
  _extNsVal = newExtNsVal;
}

- (void) dealloc
{
  [self setExtIdVal: nil];
  [self setExtNsVal: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0ExtIdDTO *_pATIENTFOLDERAPINS0ExtIdDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0ExtIdDTO = (PATIENTFOLDERAPINS0ExtIdDTO *) [PATIENTFOLDERAPINS0ExtIdDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0ExtIdDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0ExtIdDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0ExtIdDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0ExtIdDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0ExtIdDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0ExtIdDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0ExtIdDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0ExtIdDTO *_pATIENTFOLDERAPINS0ExtIdDTO = [[PATIENTFOLDERAPINS0ExtIdDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0ExtIdDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0ExtIdDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0ExtIdDTO autorelease];
  return _pATIENTFOLDERAPINS0ExtIdDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0ExtIdDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0ExtIdDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0ExtIdDTO from an XML reader. The element to be read is
 * "extId".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0ExtIdDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0ExtIdDTO *_extIdDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element extId."];
    }
  }

  if (xmlStrcmp(BAD_CAST "extId", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}extId.");
#endif
    _extIdDTO = (PATIENTFOLDERAPINS0ExtIdDTO *)[PATIENTFOLDERAPINS0ExtIdDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}extId.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ExtIdDTO. Expected element extId. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ExtIdDTO. Expected element extId. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _extIdDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0ExtIdDTO to XML under element name "extId".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _extIdDTO The ExtIdDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0ExtIdDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extId", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}extId. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}extId for root element {}extId...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}extId for root element {}extId...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}extId. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "extIdVal", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}extIdVal of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}extIdVal of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setExtIdVal: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "extNsVal", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}extNsVal of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}extNsVal of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setExtNsVal: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self extIdVal]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extIdVal", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}extIdVal."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}extIdVal...");
#endif
    [[self extIdVal] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}extIdVal...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}extIdVal."];
    }
  }
  if ([self extNsVal]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extNsVal", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}extNsVal."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}extNsVal...");
#endif
    [[self extNsVal] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}extNsVal...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}extNsVal."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0ExtIdDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0ExtIdDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0ListDTO_M
#define DEF_PATIENTFOLDERAPINS0ListDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0ListDTO

/**
 * (no documentation provided)
 */
- (NSArray *) results
{
  return _results;
}

/**
 * (no documentation provided)
 */
- (void) setResults: (NSArray *) newResults
{
  [newResults retain];
  [_results release];
  _results = newResults;
}

/**
 * (no documentation provided)
 */
- (int) total
{
  return _total;
}

/**
 * (no documentation provided)
 */
- (void) setTotal: (int) newTotal
{
  _total = newTotal;
}

- (void) dealloc
{
  [self setResults: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0ListDTO *_pATIENTFOLDERAPINS0ListDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0ListDTO = (PATIENTFOLDERAPINS0ListDTO *) [PATIENTFOLDERAPINS0ListDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0ListDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0ListDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0ListDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0ListDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0ListDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0ListDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0ListDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0ListDTO *_pATIENTFOLDERAPINS0ListDTO = [[PATIENTFOLDERAPINS0ListDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0ListDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0ListDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0ListDTO autorelease];
  return _pATIENTFOLDERAPINS0ListDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0ListDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0ListDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0ListDTO from an XML reader. The element to be read is
 * "results".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0ListDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0ListDTO *_listDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element results."];
    }
  }

  if (xmlStrcmp(BAD_CAST "results", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}results.");
#endif
    _listDTO = (PATIENTFOLDERAPINS0ListDTO *)[PATIENTFOLDERAPINS0ListDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}results.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ListDTO. Expected element results. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ListDTO. Expected element results. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _listDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0ListDTO to XML under element name "results".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _listDTO The ListDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0ListDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "results", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}results. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}result for root element {}results...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}result for root element {}results...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}results. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "result", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}result of type {http://www.w3.org/2001/XMLSchema}anyType.");
#endif

    __child = [NSObject readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}result of type {http://www.w3.org/2001/XMLSchema}anyType.");
#endif

    if ([self results]) {
      [self setResults: [[self results] arrayByAddingObject: __child]];
    }
    else {
      [self setResults: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "total", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTotal: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self results]) {
    __enumerator = [[self results] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "result", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}result."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}result...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}result...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}result."];
      }
    } //end item iterator.
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "total", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}total."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}total...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_total);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}total...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}total."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}total."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0ListDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0ListDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0OrderDTO_M
#define DEF_PATIENTFOLDERAPINS0OrderDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0OrderDTO

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0Status *) status
{
  return _status;
}

/**
 * (no documentation provided)
 */
- (void) setStatus: (PATIENTFOLDERAPINS0Status *) newStatus
{
  [newStatus retain];
  [_status release];
  _status = newStatus;
}

/**
 * (no documentation provided)
 */
- (NSString *) enteringUser
{
  return _enteringUser;
}

/**
 * (no documentation provided)
 */
- (void) setEnteringUser: (NSString *) newEnteringUser
{
  [newEnteringUser retain];
  [_enteringUser release];
  _enteringUser = newEnteringUser;
}

/**
 * (no documentation provided)
 */
- (NSString *) actionedUser
{
  return _actionedUser;
}

/**
 * (no documentation provided)
 */
- (void) setActionedUser: (NSString *) newActionedUser
{
  [newActionedUser retain];
  [_actionedUser release];
  _actionedUser = newActionedUser;
}

/**
 * (no documentation provided)
 */
- (NSString *) organisation
{
  return _organisation;
}

/**
 * (no documentation provided)
 */
- (void) setOrganisation: (NSString *) newOrganisation
{
  [newOrganisation retain];
  [_organisation release];
  _organisation = newOrganisation;
}

/**
 * (no documentation provided)
 */
- (NSString *) doctor
{
  return _doctor;
}

/**
 * (no documentation provided)
 */
- (void) setDoctor: (NSString *) newDoctor
{
  [newDoctor retain];
  [_doctor release];
  _doctor = newDoctor;
}

- (void) dealloc
{
  [self setIdentifier: nil];
  [self setStatus: nil];
  [self setEnteringUser: nil];
  [self setActionedUser: nil];
  [self setOrganisation: nil];
  [self setDoctor: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0OrderDTO *_pATIENTFOLDERAPINS0OrderDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0OrderDTO = (PATIENTFOLDERAPINS0OrderDTO *) [PATIENTFOLDERAPINS0OrderDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0OrderDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0OrderDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0OrderDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0OrderDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0OrderDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0OrderDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0OrderDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0OrderDTO *_pATIENTFOLDERAPINS0OrderDTO = [[PATIENTFOLDERAPINS0OrderDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0OrderDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0OrderDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0OrderDTO autorelease];
  return _pATIENTFOLDERAPINS0OrderDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0OrderDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0OrderDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0OrderDTO from an XML reader. The element to be read is
 * "order".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0OrderDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0OrderDTO *_orderDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element order."];
    }
  }

  if (xmlStrcmp(BAD_CAST "order", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}order.");
#endif
    _orderDTO = (PATIENTFOLDERAPINS0OrderDTO *)[PATIENTFOLDERAPINS0OrderDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}order.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0OrderDTO. Expected element order. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0OrderDTO. Expected element order. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _orderDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0OrderDTO to XML under element name "order".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _orderDTO The OrderDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0OrderDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "order", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}order. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}order for root element {}order...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}order for root element {}order...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}order. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "status", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}status of type {}status.");
#endif
    __child = [PATIENTFOLDERAPINS0Status readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}status of type {}status.");
#endif

    [self setStatus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "enteringUser", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}enteringUser of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}enteringUser of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEnteringUser: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "actionedUser", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}actionedUser of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}actionedUser of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setActionedUser: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "organisation", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}organisation of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}organisation of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOrganisation: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "doctor", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}doctor of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}doctor of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDoctor: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self status]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "status", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}status."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}status...");
#endif
    [[self status] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}status...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}status."];
    }
  }
  if ([self enteringUser]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "enteringUser", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}enteringUser."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}enteringUser...");
#endif
    [[self enteringUser] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}enteringUser...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}enteringUser."];
    }
  }
  if ([self actionedUser]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actionedUser", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}actionedUser."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}actionedUser...");
#endif
    [[self actionedUser] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}actionedUser...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}actionedUser."];
    }
  }
  if ([self organisation]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "organisation", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}organisation."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}organisation...");
#endif
    [[self organisation] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}organisation...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}organisation."];
    }
  }
  if ([self doctor]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "doctor", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}doctor."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}doctor...");
#endif
    [[self doctor] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}doctor...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}doctor."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0OrderDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0OrderDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0PatientDTO_M
#define DEF_PATIENTFOLDERAPINS0PatientDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0PatientDTO

/**
 * (no documentation provided)
 */
- (NSString *) src
{
  return _src;
}

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc
{
  [newSrc retain];
  [_src release];
  _src = newSrc;
}

/**
 * (no documentation provided)
 */
- (NSArray *) extIds
{
  return _extIds;
}

/**
 * (no documentation provided)
 */
- (void) setExtIds: (NSArray *) newExtIds
{
  [newExtIds retain];
  [_extIds release];
  _extIds = newExtIds;
}

/**
 * (no documentation provided)
 */
- (NSString *) patientMasterId
{
  return _patientMasterId;
}

/**
 * (no documentation provided)
 */
- (void) setPatientMasterId: (NSString *) newPatientMasterId
{
  [newPatientMasterId retain];
  [_patientMasterId release];
  _patientMasterId = newPatientMasterId;
}

/**
 * (no documentation provided)
 */
- (NSString *) firstName
{
  return _firstName;
}

/**
 * (no documentation provided)
 */
- (void) setFirstName: (NSString *) newFirstName
{
  [newFirstName retain];
  [_firstName release];
  _firstName = newFirstName;
}

/**
 * (no documentation provided)
 */
- (NSString *) lastName
{
  return _lastName;
}

/**
 * (no documentation provided)
 */
- (void) setLastName: (NSString *) newLastName
{
  [newLastName retain];
  [_lastName release];
  _lastName = newLastName;
}

/**
 * (no documentation provided)
 */
- (NSString *) otherNames
{
  return _otherNames;
}

/**
 * (no documentation provided)
 */
- (void) setOtherNames: (NSString *) newOtherNames
{
  [newOtherNames retain];
  [_otherNames release];
  _otherNames = newOtherNames;
}

/**
 * (no documentation provided)
 */
- (NSString *) dob
{
  return _dob;
}

/**
 * (no documentation provided)
 */
- (void) setDob: (NSString *) newDob
{
  [newDob retain];
  [_dob release];
  _dob = newDob;
}

/**
 * (no documentation provided)
 */
- (NSString *) dod
{
  return _dod;
}

/**
 * (no documentation provided)
 */
- (void) setDod: (NSString *) newDod
{
  [newDod retain];
  [_dod release];
  _dod = newDod;
}

/**
 * (no documentation provided)
 */
- (NSString *) sex
{
  return _sex;
}

/**
 * (no documentation provided)
 */
- (void) setSex: (NSString *) newSex
{
  [newSex retain];
  [_sex release];
  _sex = newSex;
}

/**
 * (no documentation provided)
 */
- (NSString *) addr1
{
  return _addr1;
}

/**
 * (no documentation provided)
 */
- (void) setAddr1: (NSString *) newAddr1
{
  [newAddr1 retain];
  [_addr1 release];
  _addr1 = newAddr1;
}

/**
 * (no documentation provided)
 */
- (NSString *) addr2
{
  return _addr2;
}

/**
 * (no documentation provided)
 */
- (void) setAddr2: (NSString *) newAddr2
{
  [newAddr2 retain];
  [_addr2 release];
  _addr2 = newAddr2;
}

/**
 * (no documentation provided)
 */
- (NSString *) city
{
  return _city;
}

/**
 * (no documentation provided)
 */
- (void) setCity: (NSString *) newCity
{
  [newCity retain];
  [_city release];
  _city = newCity;
}

/**
 * (no documentation provided)
 */
- (NSString *) postcode
{
  return _postcode;
}

/**
 * (no documentation provided)
 */
- (void) setPostcode: (NSString *) newPostcode
{
  [newPostcode retain];
  [_postcode release];
  _postcode = newPostcode;
}

/**
 * (no documentation provided)
 */
- (NSArray *) infoFields
{
  return _infoFields;
}

/**
 * (no documentation provided)
 */
- (void) setInfoFields: (NSArray *) newInfoFields
{
  [newInfoFields retain];
  [_infoFields release];
  _infoFields = newInfoFields;
}

- (void) dealloc
{
  [self setSrc: nil];
  [self setExtIds: nil];
  [self setPatientMasterId: nil];
  [self setFirstName: nil];
  [self setLastName: nil];
  [self setOtherNames: nil];
  [self setDob: nil];
  [self setDod: nil];
  [self setSex: nil];
  [self setAddr1: nil];
  [self setAddr2: nil];
  [self setCity: nil];
  [self setPostcode: nil];
  [self setInfoFields: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0PatientDTO *_pATIENTFOLDERAPINS0PatientDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0PatientDTO = (PATIENTFOLDERAPINS0PatientDTO *) [PATIENTFOLDERAPINS0PatientDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0PatientDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0PatientDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0PatientDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0PatientDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0PatientDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0PatientDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0PatientDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0PatientDTO *_pATIENTFOLDERAPINS0PatientDTO = [[PATIENTFOLDERAPINS0PatientDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0PatientDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0PatientDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0PatientDTO autorelease];
  return _pATIENTFOLDERAPINS0PatientDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0PatientDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0PatientDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0PatientDTO from an XML reader. The element to be read is
 * "Patient".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0PatientDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0PatientDTO *_patientDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element Patient."];
    }
  }

  if (xmlStrcmp(BAD_CAST "Patient", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}Patient.");
#endif
    _patientDTO = (PATIENTFOLDERAPINS0PatientDTO *)[PATIENTFOLDERAPINS0PatientDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}Patient.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0PatientDTO. Expected element Patient. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0PatientDTO. Expected element Patient. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _patientDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0PatientDTO to XML under element name "Patient".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _patientDTO The PatientDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0PatientDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Patient", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}Patient. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}Patient for root element {}Patient...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}Patient for root element {}Patient...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}Patient. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}src...");
#endif
    [self setSrc: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}src...");
#endif
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "extIds", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}extIds of type {}extId.");
#endif

    __child = [PATIENTFOLDERAPINS0ExtIdDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}extIds of type {}extId.");
#endif

    if ([self extIds]) {
      [self setExtIds: [[self extIds] arrayByAddingObject: __child]];
    }
    else {
      [self setExtIds: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "patientMasterId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}patientMasterId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}patientMasterId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPatientMasterId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "firstName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFirstName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "lastName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLastName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "otherNames", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}otherNames of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}otherNames of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOtherNames: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "dob", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}dob of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}dob of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDob: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "dod", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}dod of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}dod of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDod: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "sex", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}sex of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}sex of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSex: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "addr1", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}addr1 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}addr1 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddr1: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "addr2", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}addr2 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}addr2 of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddr2: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "city", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCity: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "postcode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}postcode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}postcode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPostcode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "infoFields", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}infoFields of type {}PatientInfoField.");
#endif

    __child = [PATIENTFOLDERAPINS0PatientInfoFieldDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}infoFields of type {}PatientInfoField.");
#endif

    if ([self infoFields]) {
      [self setInfoFields: [[self infoFields] arrayByAddingObject: __child]];
    }
    else {
      [self setInfoFields: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

  if ([self src]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}src."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}src...");
#endif
    [[self src] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}src...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}src."];
    }
  }
}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self extIds]) {
    __enumerator = [[self extIds] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extIds", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}extIds."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}extIds...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}extIds...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}extIds."];
      }
    } //end item iterator.
  }
  if ([self patientMasterId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientMasterId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}patientMasterId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}patientMasterId...");
#endif
    [[self patientMasterId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}patientMasterId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}patientMasterId."];
    }
  }
  if ([self firstName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "firstName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}firstName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}firstName...");
#endif
    [[self firstName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}firstName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}firstName."];
    }
  }
  if ([self lastName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}lastName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}lastName...");
#endif
    [[self lastName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}lastName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}lastName."];
    }
  }
  if ([self otherNames]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "otherNames", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}otherNames."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}otherNames...");
#endif
    [[self otherNames] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}otherNames...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}otherNames."];
    }
  }
  if ([self dob]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dob", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}dob."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}dob...");
#endif
    [[self dob] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}dob...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}dob."];
    }
  }
  if ([self dod]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dod", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}dod."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}dod...");
#endif
    [[self dod] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}dod...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}dod."];
    }
  }
  if ([self sex]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "sex", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}sex."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}sex...");
#endif
    [[self sex] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}sex...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}sex."];
    }
  }
  if ([self addr1]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "addr1", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}addr1."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}addr1...");
#endif
    [[self addr1] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}addr1...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}addr1."];
    }
  }
  if ([self addr2]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "addr2", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}addr2."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}addr2...");
#endif
    [[self addr2] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}addr2...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}addr2."];
    }
  }
  if ([self city]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "city", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}city."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}city...");
#endif
    [[self city] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}city...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}city."];
    }
  }
  if ([self postcode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "postcode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}postcode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}postcode...");
#endif
    [[self postcode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}postcode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}postcode."];
    }
  }
  if ([self infoFields]) {
    __enumerator = [[self infoFields] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "infoFields", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}infoFields."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}infoFields...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}infoFields...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}infoFields."];
      }
    } //end item iterator.
  }
}
@end /* implementation PATIENTFOLDERAPINS0PatientDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0PatientDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0PatientInfoFieldDTO_M
#define DEF_PATIENTFOLDERAPINS0PatientInfoFieldDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0PatientInfoFieldDTO

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSString *) value
{
  return _value;
}

/**
 * (no documentation provided)
 */
- (void) setValue: (NSString *) newValue
{
  [newValue retain];
  [_value release];
  _value = newValue;
}

- (void) dealloc
{
  [self setName: nil];
  [self setValue: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0PatientInfoFieldDTO *_pATIENTFOLDERAPINS0PatientInfoFieldDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0PatientInfoFieldDTO = (PATIENTFOLDERAPINS0PatientInfoFieldDTO *) [PATIENTFOLDERAPINS0PatientInfoFieldDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0PatientInfoFieldDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0PatientInfoFieldDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0PatientInfoFieldDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0PatientInfoFieldDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0PatientInfoFieldDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0PatientInfoFieldDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0PatientInfoFieldDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0PatientInfoFieldDTO *_pATIENTFOLDERAPINS0PatientInfoFieldDTO = [[PATIENTFOLDERAPINS0PatientInfoFieldDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0PatientInfoFieldDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0PatientInfoFieldDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0PatientInfoFieldDTO autorelease];
  return _pATIENTFOLDERAPINS0PatientInfoFieldDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0PatientInfoFieldDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0PatientInfoFieldDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0PatientInfoFieldDTO from an XML reader. The element to be read is
 * "PatientInfoField".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0PatientInfoFieldDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0PatientInfoFieldDTO *_patientInfoFieldDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element PatientInfoField."];
    }
  }

  if (xmlStrcmp(BAD_CAST "PatientInfoField", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}PatientInfoField.");
#endif
    _patientInfoFieldDTO = (PATIENTFOLDERAPINS0PatientInfoFieldDTO *)[PATIENTFOLDERAPINS0PatientInfoFieldDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}PatientInfoField.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0PatientInfoFieldDTO. Expected element PatientInfoField. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0PatientInfoFieldDTO. Expected element PatientInfoField. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _patientInfoFieldDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0PatientInfoFieldDTO to XML under element name "PatientInfoField".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _patientInfoFieldDTO The PatientInfoFieldDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0PatientInfoFieldDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PatientInfoField", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}PatientInfoField. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}PatientInfoField for root element {}PatientInfoField...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}PatientInfoField for root element {}PatientInfoField...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}PatientInfoField. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "value", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}value of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}value of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setValue: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self value]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "value", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}value."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}value...");
#endif
    [[self value] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}value...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}value."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0PatientInfoFieldDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0PatientInfoFieldDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0RequestDTO_M
#define DEF_PATIENTFOLDERAPINS0RequestDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0RequestDTO

/**
 * (no documentation provided)
 */
- (NSString *) requestId
{
  return _requestId;
}

/**
 * (no documentation provided)
 */
- (void) setRequestId: (NSString *) newRequestId
{
  [newRequestId retain];
  [_requestId release];
  _requestId = newRequestId;
}

/**
 * (no documentation provided)
 */
- (NSString *) requestType
{
  return _requestType;
}

/**
 * (no documentation provided)
 */
- (void) setRequestType: (NSString *) newRequestType
{
  [newRequestType retain];
  [_requestType release];
  _requestType = newRequestType;
}

/**
 * (no documentation provided)
 */
- (NSString *) serviceDesc
{
  return _serviceDesc;
}

/**
 * (no documentation provided)
 */
- (void) setServiceDesc: (NSString *) newServiceDesc
{
  [newServiceDesc retain];
  [_serviceDesc release];
  _serviceDesc = newServiceDesc;
}

/**
 * (no documentation provided)
 */
- (NSString *) requestStatus
{
  return _requestStatus;
}

/**
 * (no documentation provided)
 */
- (void) setRequestStatus: (NSString *) newRequestStatus
{
  [newRequestStatus retain];
  [_requestStatus release];
  _requestStatus = newRequestStatus;
}

/**
 * (no documentation provided)
 */
- (NSString *) requestDate
{
  return _requestDate;
}

/**
 * (no documentation provided)
 */
- (void) setRequestDate: (NSString *) newRequestDate
{
  [newRequestDate retain];
  [_requestDate release];
  _requestDate = newRequestDate;
}

/**
 * (no documentation provided)
 */
- (NSString *) obsStart
{
  return _obsStart;
}

/**
 * (no documentation provided)
 */
- (void) setObsStart: (NSString *) newObsStart
{
  [newObsStart retain];
  [_obsStart release];
  _obsStart = newObsStart;
}

/**
 * (no documentation provided)
 */
- (NSString *) obsStop
{
  return _obsStop;
}

/**
 * (no documentation provided)
 */
- (void) setObsStop: (NSString *) newObsStop
{
  [newObsStop retain];
  [_obsStop release];
  _obsStop = newObsStop;
}

/**
 * (no documentation provided)
 */
- (NSString *) specimenRec
{
  return _specimenRec;
}

/**
 * (no documentation provided)
 */
- (void) setSpecimenRec: (NSString *) newSpecimenRec
{
  [newSpecimenRec retain];
  [_specimenRec release];
  _specimenRec = newSpecimenRec;
}

/**
 * (no documentation provided)
 */
- (NSString *) clinicalInformation
{
  return _clinicalInformation;
}

/**
 * (no documentation provided)
 */
- (void) setClinicalInformation: (NSString *) newClinicalInformation
{
  [newClinicalInformation retain];
  [_clinicalInformation release];
  _clinicalInformation = newClinicalInformation;
}

- (void) dealloc
{
  [self setRequestId: nil];
  [self setRequestType: nil];
  [self setServiceDesc: nil];
  [self setRequestStatus: nil];
  [self setRequestDate: nil];
  [self setObsStart: nil];
  [self setObsStop: nil];
  [self setSpecimenRec: nil];
  [self setClinicalInformation: nil];
  [super dealloc];
}
@end /* implementation PATIENTFOLDERAPINS0RequestDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0RequestDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface PATIENTFOLDERAPINS0RequestDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0RequestDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0RequestDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0RequestDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0RequestDTO *_pATIENTFOLDERAPINS0RequestDTO = [[PATIENTFOLDERAPINS0RequestDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0RequestDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0RequestDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0RequestDTO autorelease];
  return _pATIENTFOLDERAPINS0RequestDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0RequestDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0RequestDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "requestId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}requestId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}requestId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRequestId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "requestType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}requestType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}requestType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRequestType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "serviceDesc", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}serviceDesc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}serviceDesc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setServiceDesc: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "requestStatus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}requestStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}requestStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRequestStatus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "requestDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}requestDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}requestDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRequestDate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "obsStart", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}obsStart of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}obsStart of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setObsStart: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "obsStop", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}obsStop of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}obsStop of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setObsStop: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "specimenRec", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}specimenRec of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}specimenRec of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSpecimenRec: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "clinicalInformation", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}clinicalInformation of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}clinicalInformation of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setClinicalInformation: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self requestId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "requestId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}requestId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}requestId...");
#endif
    [[self requestId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}requestId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}requestId."];
    }
  }
  if ([self requestType]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "requestType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}requestType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}requestType...");
#endif
    [[self requestType] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}requestType...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}requestType."];
    }
  }
  if ([self serviceDesc]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "serviceDesc", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}serviceDesc."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}serviceDesc...");
#endif
    [[self serviceDesc] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}serviceDesc...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}serviceDesc."];
    }
  }
  if ([self requestStatus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "requestStatus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}requestStatus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}requestStatus...");
#endif
    [[self requestStatus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}requestStatus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}requestStatus."];
    }
  }
  if ([self requestDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "requestDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}requestDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}requestDate...");
#endif
    [[self requestDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}requestDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}requestDate."];
    }
  }
  if ([self obsStart]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "obsStart", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}obsStart."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}obsStart...");
#endif
    [[self obsStart] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}obsStart...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}obsStart."];
    }
  }
  if ([self obsStop]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "obsStop", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}obsStop."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}obsStop...");
#endif
    [[self obsStop] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}obsStop...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}obsStop."];
    }
  }
  if ([self specimenRec]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "specimenRec", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}specimenRec."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}specimenRec...");
#endif
    [[self specimenRec] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}specimenRec...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}specimenRec."];
    }
  }
  if ([self clinicalInformation]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "clinicalInformation", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}clinicalInformation."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}clinicalInformation...");
#endif
    [[self clinicalInformation] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}clinicalInformation...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}clinicalInformation."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0RequestDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0RequestDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0SectionDTO_M
#define DEF_PATIENTFOLDERAPINS0SectionDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0SectionDTO

/**
 * (no documentation provided)
 */
- (NSString *) src
{
  return _src;
}

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc
{
  [newSrc retain];
  [_src release];
  _src = newSrc;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (BOOL) episodal
{
  return _episodal;
}

/**
 * (no documentation provided)
 */
- (void) setEpisodal: (BOOL) newEpisodal
{
  _episodal = newEpisodal;
}

/**
 * (no documentation provided)
 */
- (BOOL) diagnostic
{
  return _diagnostic;
}

/**
 * (no documentation provided)
 */
- (void) setDiagnostic: (BOOL) newDiagnostic
{
  _diagnostic = newDiagnostic;
}

/**
 * (no documentation provided)
 */
- (NSString *) episodeType
{
  return _episodeType;
}

/**
 * (no documentation provided)
 */
- (void) setEpisodeType: (NSString *) newEpisodeType
{
  [newEpisodeType retain];
  [_episodeType release];
  _episodeType = newEpisodeType;
}

/**
 * (no documentation provided)
 */
- (NSString *) rgbColor
{
  return _rgbColor;
}

/**
 * (no documentation provided)
 */
- (void) setRgbColor: (NSString *) newRgbColor
{
  [newRgbColor retain];
  [_rgbColor release];
  _rgbColor = newRgbColor;
}

/**
 * (no documentation provided)
 */
- (int) docCount
{
  return _docCount;
}

/**
 * (no documentation provided)
 */
- (void) setDocCount: (int) newDocCount
{
  _docCount = newDocCount;
}

/**
 * (no documentation provided)
 */
- (int) episodeCount
{
  return _episodeCount;
}

/**
 * (no documentation provided)
 */
- (void) setEpisodeCount: (int) newEpisodeCount
{
  _episodeCount = newEpisodeCount;
}

/**
 * (no documentation provided)
 */
- (NSDate *) lastModifiedTimestamp
{
  return _lastModifiedTimestamp;
}

/**
 * (no documentation provided)
 */
- (void) setLastModifiedTimestamp: (NSDate *) newLastModifiedTimestamp
{
  [newLastModifiedTimestamp retain];
  [_lastModifiedTimestamp release];
  _lastModifiedTimestamp = newLastModifiedTimestamp;
}

- (void) dealloc
{
  [self setSrc: nil];
  [self setIdentifier: nil];
  [self setName: nil];
  [self setEpisodeType: nil];
  [self setRgbColor: nil];
  [self setLastModifiedTimestamp: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0SectionDTO *_pATIENTFOLDERAPINS0SectionDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0SectionDTO = (PATIENTFOLDERAPINS0SectionDTO *) [PATIENTFOLDERAPINS0SectionDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0SectionDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0SectionDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0SectionDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0SectionDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0SectionDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0SectionDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0SectionDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0SectionDTO *_pATIENTFOLDERAPINS0SectionDTO = [[PATIENTFOLDERAPINS0SectionDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0SectionDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0SectionDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0SectionDTO autorelease];
  return _pATIENTFOLDERAPINS0SectionDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0SectionDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0SectionDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0SectionDTO from an XML reader. The element to be read is
 * "Section".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0SectionDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0SectionDTO *_sectionDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element Section."];
    }
  }

  if (xmlStrcmp(BAD_CAST "Section", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}Section.");
#endif
    _sectionDTO = (PATIENTFOLDERAPINS0SectionDTO *)[PATIENTFOLDERAPINS0SectionDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}Section.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0SectionDTO. Expected element Section. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0SectionDTO. Expected element Section. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _sectionDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0SectionDTO to XML under element name "Section".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _sectionDTO The SectionDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0SectionDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Section", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}Section. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}Section for root element {}Section...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}Section for root element {}Section...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}Section. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}src...");
#endif
    [self setSrc: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}src...");
#endif
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "episodal", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setEpisodal: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "diagnostic", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setDiagnostic: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "EpisodeType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}EpisodeType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}EpisodeType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEpisodeType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "rgbColor", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}rgbColor of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}rgbColor of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRgbColor: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DocCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setDocCount: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "EpisodeCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setEpisodeCount: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "lastModifiedTimestamp", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}lastModifiedTimestamp of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif
    __child = [NSDate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}lastModifiedTimestamp of type {http://www.w3.org/2001/XMLSchema}dateTime.");
#endif

    [self setLastModifiedTimestamp: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

  if ([self src]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}src."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}src...");
#endif
    [[self src] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}src...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}src."];
    }
  }
}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "episodal", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}episodal."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}episodal...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_episodal);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}episodal...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}episodal."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}episodal."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "diagnostic", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}diagnostic."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}diagnostic...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_diagnostic);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}diagnostic...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}diagnostic."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}diagnostic."];
    }
  }
  if ([self episodeType]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "EpisodeType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}EpisodeType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}EpisodeType...");
#endif
    [[self episodeType] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}EpisodeType...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}EpisodeType."];
    }
  }
  if ([self rgbColor]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "rgbColor", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}rgbColor."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}rgbColor...");
#endif
    [[self rgbColor] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}rgbColor...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}rgbColor."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DocCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DocCount...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_docCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DocCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}DocCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DocCount."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "EpisodeCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}EpisodeCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}EpisodeCount...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_episodeCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}EpisodeCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}EpisodeCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}EpisodeCount."];
    }
  }
  if ([self lastModifiedTimestamp]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastModifiedTimestamp", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}lastModifiedTimestamp."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}lastModifiedTimestamp...");
#endif
    [[self lastModifiedTimestamp] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}lastModifiedTimestamp...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}lastModifiedTimestamp."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0SectionDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0SectionDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0ResultDataDTO_M
#define DEF_PATIENTFOLDERAPINS0ResultDataDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0ResultDataDTO

/**
 * (no documentation provided)
 */
- (NSArray *) report
{
  return _report;
}

/**
 * (no documentation provided)
 */
- (void) setReport: (NSArray *) newReport
{
  [newReport retain];
  [_report release];
  _report = newReport;
}

/**
 * (no documentation provided)
 */
- (NSArray *) atomic
{
  return _atomic;
}

/**
 * (no documentation provided)
 */
- (void) setAtomic: (NSArray *) newAtomic
{
  [newAtomic retain];
  [_atomic release];
  _atomic = newAtomic;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0OrderDTO *) order
{
  return _order;
}

/**
 * (no documentation provided)
 */
- (void) setOrder: (PATIENTFOLDERAPINS0OrderDTO *) newOrder
{
  [newOrder retain];
  [_order release];
  _order = newOrder;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0RequestDTO *) request
{
  return _request;
}

/**
 * (no documentation provided)
 */
- (void) setRequest: (PATIENTFOLDERAPINS0RequestDTO *) newRequest
{
  [newRequest retain];
  [_request release];
  _request = newRequest;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0CopiesToDTO *) copiesTo
{
  return _copiesTo;
}

/**
 * (no documentation provided)
 */
- (void) setCopiesTo: (PATIENTFOLDERAPINS0CopiesToDTO *) newCopiesTo
{
  [newCopiesTo retain];
  [_copiesTo release];
  _copiesTo = newCopiesTo;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ImageDTO *) image
{
  return _image;
}

/**
 * (no documentation provided)
 */
- (void) setImage: (PATIENTFOLDERAPINS0ImageDTO *) newImage
{
  [newImage retain];
  [_image release];
  _image = newImage;
}

- (void) dealloc
{
  [self setReport: nil];
  [self setAtomic: nil];
  [self setOrder: nil];
  [self setRequest: nil];
  [self setCopiesTo: nil];
  [self setImage: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0ResultDataDTO *_pATIENTFOLDERAPINS0ResultDataDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0ResultDataDTO = (PATIENTFOLDERAPINS0ResultDataDTO *) [PATIENTFOLDERAPINS0ResultDataDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0ResultDataDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0ResultDataDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0ResultDataDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0ResultDataDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0ResultDataDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0ResultDataDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0ResultDataDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0ResultDataDTO *_pATIENTFOLDERAPINS0ResultDataDTO = [[PATIENTFOLDERAPINS0ResultDataDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0ResultDataDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0ResultDataDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0ResultDataDTO autorelease];
  return _pATIENTFOLDERAPINS0ResultDataDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0ResultDataDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0ResultDataDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0ResultDataDTO from an XML reader. The element to be read is
 * "results".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0ResultDataDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0ResultDataDTO *_resultDataDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element results."];
    }
  }

  if (xmlStrcmp(BAD_CAST "results", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}results.");
#endif
    _resultDataDTO = (PATIENTFOLDERAPINS0ResultDataDTO *)[PATIENTFOLDERAPINS0ResultDataDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}results.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ResultDataDTO. Expected element results. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ResultDataDTO. Expected element results. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _resultDataDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0ResultDataDTO to XML under element name "results".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _resultDataDTO The ResultDataDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0ResultDataDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "results", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}results. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}results for root element {}results...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}results for root element {}results...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}results. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "report", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}report of type {}report.");
#endif

    __child = [PATIENTFOLDERAPINS0ReportDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}report of type {}report.");
#endif

    if ([self report]) {
      [self setReport: [[self report] arrayByAddingObject: __child]];
    }
    else {
      [self setReport: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "atomic", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}atomic of type {}atomic.");
#endif

    __child = [PATIENTFOLDERAPINS0AtomicDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}atomic of type {}atomic.");
#endif

    if ([self atomic]) {
      [self setAtomic: [[self atomic] arrayByAddingObject: __child]];
    }
    else {
      [self setAtomic: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "order", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}order of type {}order.");
#endif
    __child = [PATIENTFOLDERAPINS0OrderDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}order of type {}order.");
#endif

    [self setOrder: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "request", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}request of type {}request.");
#endif
    __child = [PATIENTFOLDERAPINS0RequestDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}request of type {}request.");
#endif

    [self setRequest: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "copies", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}copies of type {}copiesto.");
#endif
    __child = [PATIENTFOLDERAPINS0CopiesToDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}copies of type {}copiesto.");
#endif

    [self setCopiesTo: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "image", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}image of type {}image.");
#endif
    __child = [PATIENTFOLDERAPINS0ImageDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}image of type {}image.");
#endif

    [self setImage: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self report]) {
    __enumerator = [[self report] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "report", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}report."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}report...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}report...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}report."];
      }
    } //end item iterator.
  }
  if ([self atomic]) {
    __enumerator = [[self atomic] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "atomic", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}atomic."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}atomic...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}atomic...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}atomic."];
      }
    } //end item iterator.
  }
  if ([self order]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "order", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}order."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}order...");
#endif
    [[self order] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}order...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}order."];
    }
  }
  if ([self request]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "request", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}request."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}request...");
#endif
    [[self request] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}request...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}request."];
    }
  }
  if ([self copiesTo]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "copies", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}copies."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}copies...");
#endif
    [[self copiesTo] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}copies...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}copies."];
    }
  }
  if ([self image]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "image", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}image."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}image...");
#endif
    [[self image] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}image...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}image."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0ResultDataDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0ResultDataDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0ReportDTO_M
#define DEF_PATIENTFOLDERAPINS0ReportDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0ReportDTO

/**
 * (no documentation provided)
 */
- (NSString *) text
{
  return _text;
}

/**
 * (no documentation provided)
 */
- (void) setText: (NSString *) newText
{
  [newText retain];
  [_text release];
  _text = newText;
}

- (void) dealloc
{
  [self setText: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0ReportDTO *_pATIENTFOLDERAPINS0ReportDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0ReportDTO = (PATIENTFOLDERAPINS0ReportDTO *) [PATIENTFOLDERAPINS0ReportDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0ReportDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0ReportDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0ReportDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0ReportDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0ReportDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0ReportDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0ReportDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0ReportDTO *_pATIENTFOLDERAPINS0ReportDTO = [[PATIENTFOLDERAPINS0ReportDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0ReportDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0ReportDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0ReportDTO autorelease];
  return _pATIENTFOLDERAPINS0ReportDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0ReportDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0ReportDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0ReportDTO from an XML reader. The element to be read is
 * "report".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0ReportDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0ReportDTO *_reportDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element report."];
    }
  }

  if (xmlStrcmp(BAD_CAST "report", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}report.");
#endif
    _reportDTO = (PATIENTFOLDERAPINS0ReportDTO *)[PATIENTFOLDERAPINS0ReportDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}report.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ReportDTO. Expected element report. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ReportDTO. Expected element report. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _reportDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0ReportDTO to XML under element name "report".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _reportDTO The ReportDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0ReportDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "report", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}report. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}report for root element {}report...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}report for root element {}report...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}report. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "text", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setText: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self text]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "text", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}text."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}text...");
#endif
    [[self text] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}text...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}text."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0ReportDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0ReportDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0PatientComponentDTO_M
#define DEF_PATIENTFOLDERAPINS0PatientComponentDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0PatientComponentDTO

/**
 * (no documentation provided)
 */
- (NSString *) patientIdNs
{
  return _patientIdNs;
}

/**
 * (no documentation provided)
 */
- (void) setPatientIdNs: (NSString *) newPatientIdNs
{
  [newPatientIdNs retain];
  [_patientIdNs release];
  _patientIdNs = newPatientIdNs;
}

/**
 * (no documentation provided)
 */
- (NSString *) patientSrc
{
  return _patientSrc;
}

/**
 * (no documentation provided)
 */
- (void) setPatientSrc: (NSString *) newPatientSrc
{
  [newPatientSrc retain];
  [_patientSrc release];
  _patientSrc = newPatientSrc;
}

/**
 * (no documentation provided)
 */
- (NSString *) up
{
  return _up;
}

/**
 * (no documentation provided)
 */
- (void) setUp: (NSString *) newUp
{
  [newUp retain];
  [_up release];
  _up = newUp;
}

- (void) dealloc
{
  [self setPatientIdNs: nil];
  [self setPatientSrc: nil];
  [self setUp: nil];
  [super dealloc];
}
@end /* implementation PATIENTFOLDERAPINS0PatientComponentDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0PatientComponentDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface PATIENTFOLDERAPINS0PatientComponentDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0PatientComponentDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0PatientComponentDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0PatientComponentDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0PatientComponentDTO *_pATIENTFOLDERAPINS0PatientComponentDTO = [[PATIENTFOLDERAPINS0PatientComponentDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0PatientComponentDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0PatientComponentDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0PatientComponentDTO autorelease];
  return _pATIENTFOLDERAPINS0PatientComponentDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0PatientComponentDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0PatientComponentDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "patientIdNs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}patientIdNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPatientIdNs: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "patientSrc", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}patientSrc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPatientSrc: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "up", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}up of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUp: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self patientIdNs]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientIdNs", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}patientIdNs."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}patientIdNs...");
#endif
    [[self patientIdNs] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}patientIdNs...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}patientIdNs."];
    }
  }
  if ([self patientSrc]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientSrc", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}patientSrc."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}patientSrc...");
#endif
    [[self patientSrc] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}patientSrc...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}patientSrc."];
    }
  }
  if ([self up]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "up", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}up."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}up...");
#endif
    [[self up] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}up...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}up."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0PatientComponentDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0PatientComponentDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0ImageDTO_M
#define DEF_PATIENTFOLDERAPINS0ImageDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0ImageDTO

/**
 * (no documentation provided)
 */
- (NSData *) data
{
  return _data;
}

/**
 * (no documentation provided)
 */
- (void) setData: (NSData *) newData
{
  [newData retain];
  [_data release];
  _data = newData;
}

/**
 * (no documentation provided)
 */
- (NSString *) ext
{
  return _ext;
}

/**
 * (no documentation provided)
 */
- (void) setExt: (NSString *) newExt
{
  [newExt retain];
  [_ext release];
  _ext = newExt;
}

- (void) dealloc
{
  [self setData: nil];
  [self setExt: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0ImageDTO *_pATIENTFOLDERAPINS0ImageDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0ImageDTO = (PATIENTFOLDERAPINS0ImageDTO *) [PATIENTFOLDERAPINS0ImageDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0ImageDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0ImageDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0ImageDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0ImageDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0ImageDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0ImageDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0ImageDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0ImageDTO *_pATIENTFOLDERAPINS0ImageDTO = [[PATIENTFOLDERAPINS0ImageDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0ImageDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0ImageDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0ImageDTO autorelease];
  return _pATIENTFOLDERAPINS0ImageDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0ImageDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0ImageDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0ImageDTO from an XML reader. The element to be read is
 * "image".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0ImageDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0ImageDTO *_imageDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element image."];
    }
  }

  if (xmlStrcmp(BAD_CAST "image", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}image.");
#endif
    _imageDTO = (PATIENTFOLDERAPINS0ImageDTO *)[PATIENTFOLDERAPINS0ImageDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}image.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ImageDTO. Expected element image. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ImageDTO. Expected element image. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _imageDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0ImageDTO to XML under element name "image".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _imageDTO The ImageDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0ImageDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "image", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}image. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}image for root element {}image...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}image for root element {}image...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}image. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "data", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}data of type {http://www.w3.org/2001/XMLSchema}base64Binary.");
#endif
    __child = [NSData readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}data of type {http://www.w3.org/2001/XMLSchema}base64Binary.");
#endif

    [self setData: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ext", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ext of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ext of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setExt: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self data]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "data", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}data."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}data...");
#endif
    [[self data] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}data...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}data."];
    }
  }
  if ([self ext]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ext", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ext."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ext...");
#endif
    [[self ext] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ext...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ext."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0ImageDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0ImageDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0CopiesToDTO_M
#define DEF_PATIENTFOLDERAPINS0CopiesToDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0CopiesToDTO

/**
 * (no documentation provided)
 */
- (NSArray *) doctor
{
  return _doctor;
}

/**
 * (no documentation provided)
 */
- (void) setDoctor: (NSArray *) newDoctor
{
  [newDoctor retain];
  [_doctor release];
  _doctor = newDoctor;
}

- (void) dealloc
{
  [self setDoctor: nil];
  [super dealloc];
}
@end /* implementation PATIENTFOLDERAPINS0CopiesToDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0CopiesToDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface PATIENTFOLDERAPINS0CopiesToDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0CopiesToDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0CopiesToDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0CopiesToDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0CopiesToDTO *_pATIENTFOLDERAPINS0CopiesToDTO = [[PATIENTFOLDERAPINS0CopiesToDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0CopiesToDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0CopiesToDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0CopiesToDTO autorelease];
  return _pATIENTFOLDERAPINS0CopiesToDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0CopiesToDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0CopiesToDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "doctor", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}doctor of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}doctor of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self doctor]) {
      [self setDoctor: [[self doctor] arrayByAddingObject: __child]];
    }
    else {
      [self setDoctor: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self doctor]) {
    __enumerator = [[self doctor] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "doctor", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}doctor."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}doctor...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}doctor...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}doctor."];
      }
    } //end item iterator.
  }
}
@end /* implementation PATIENTFOLDERAPINS0CopiesToDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0CopiesToDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0ItemIdent_M
#define DEF_PATIENTFOLDERAPINS0ItemIdent_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0ItemIdent

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (NSString *) text
{
  return _text;
}

/**
 * (no documentation provided)
 */
- (void) setText: (NSString *) newText
{
  [newText retain];
  [_text release];
  _text = newText;
}

- (void) dealloc
{
  [self setIdentifier: nil];
  [self setText: nil];
  [super dealloc];
}
@end /* implementation PATIENTFOLDERAPINS0ItemIdent */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0ItemIdent (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface PATIENTFOLDERAPINS0ItemIdent (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0ItemIdent (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0ItemIdent from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0ItemIdent defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0ItemIdent *_pATIENTFOLDERAPINS0ItemIdent = [[PATIENTFOLDERAPINS0ItemIdent alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0ItemIdent initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0ItemIdent = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0ItemIdent autorelease];
  return _pATIENTFOLDERAPINS0ItemIdent;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0ItemIdent according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0ItemIdent to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "text", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}text of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setText: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self text]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "text", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}text."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}text...");
#endif
    [[self text] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}text...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}text."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0ItemIdent (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0ItemIdent_M */
#ifndef DEF_PATIENTFOLDERAPINS0UnitListItemDTO_M
#define DEF_PATIENTFOLDERAPINS0UnitListItemDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0UnitListItemDTO

/**
 * (no documentation provided)
 */
- (NSString *) domain
{
  return _domain;
}

/**
 * (no documentation provided)
 */
- (void) setDomain: (NSString *) newDomain
{
  [newDomain retain];
  [_domain release];
  _domain = newDomain;
}

/**
 * (no documentation provided)
 */
- (NSString *) campus
{
  return _campus;
}

/**
 * (no documentation provided)
 */
- (void) setCampus: (NSString *) newCampus
{
  [newCampus retain];
  [_campus release];
  _campus = newCampus;
}

/**
 * (no documentation provided)
 */
- (NSString *) code
{
  return _code;
}

/**
 * (no documentation provided)
 */
- (void) setCode: (NSString *) newCode
{
  [newCode retain];
  [_code release];
  _code = newCode;
}

/**
 * (no documentation provided)
 */
- (NSString *) listId
{
  return _listId;
}

/**
 * (no documentation provided)
 */
- (void) setListId: (NSString *) newListId
{
  [newListId retain];
  [_listId release];
  _listId = newListId;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

- (void) dealloc
{
  [self setDomain: nil];
  [self setCampus: nil];
  [self setCode: nil];
  [self setListId: nil];
  [self setDescription: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0UnitListItemDTO *_pATIENTFOLDERAPINS0UnitListItemDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0UnitListItemDTO = (PATIENTFOLDERAPINS0UnitListItemDTO *) [PATIENTFOLDERAPINS0UnitListItemDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0UnitListItemDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0UnitListItemDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0UnitListItemDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0UnitListItemDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0UnitListItemDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0UnitListItemDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0UnitListItemDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0UnitListItemDTO *_pATIENTFOLDERAPINS0UnitListItemDTO = [[PATIENTFOLDERAPINS0UnitListItemDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0UnitListItemDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0UnitListItemDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0UnitListItemDTO autorelease];
  return _pATIENTFOLDERAPINS0UnitListItemDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0UnitListItemDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0UnitListItemDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0UnitListItemDTO from an XML reader. The element to be read is
 * "UnitListItem".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0UnitListItemDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0UnitListItemDTO *_unitListItemDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element UnitListItem."];
    }
  }

  if (xmlStrcmp(BAD_CAST "UnitListItem", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}UnitListItem.");
#endif
    _unitListItemDTO = (PATIENTFOLDERAPINS0UnitListItemDTO *)[PATIENTFOLDERAPINS0UnitListItemDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}UnitListItem.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0UnitListItemDTO. Expected element UnitListItem. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0UnitListItemDTO. Expected element UnitListItem. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _unitListItemDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0UnitListItemDTO to XML under element name "UnitListItem".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _unitListItemDTO The UnitListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0UnitListItemDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "UnitListItem", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}UnitListItem. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}UnitListItem for root element {}UnitListItem...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}UnitListItem for root element {}UnitListItem...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}UnitListItem. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Domain", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDomain: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Campus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCampus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Code", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ListId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setListId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self domain]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Domain", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Domain."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Domain...");
#endif
    [[self domain] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Domain...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Domain."];
    }
  }
  if ([self campus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Campus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Campus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Campus...");
#endif
    [[self campus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Campus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Campus."];
    }
  }
  if ([self code]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Code", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Code."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Code...");
#endif
    [[self code] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Code...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Code."];
    }
  }
  if ([self listId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ListId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ListId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ListId...");
#endif
    [[self listId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ListId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ListId."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Description."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0UnitListItemDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0UnitListItemDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0WardListItemDTO_M
#define DEF_PATIENTFOLDERAPINS0WardListItemDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0WardListItemDTO

/**
 * (no documentation provided)
 */
- (NSString *) domain
{
  return _domain;
}

/**
 * (no documentation provided)
 */
- (void) setDomain: (NSString *) newDomain
{
  [newDomain retain];
  [_domain release];
  _domain = newDomain;
}

/**
 * (no documentation provided)
 */
- (NSString *) campus
{
  return _campus;
}

/**
 * (no documentation provided)
 */
- (void) setCampus: (NSString *) newCampus
{
  [newCampus retain];
  [_campus release];
  _campus = newCampus;
}

/**
 * (no documentation provided)
 */
- (NSString *) code
{
  return _code;
}

/**
 * (no documentation provided)
 */
- (void) setCode: (NSString *) newCode
{
  [newCode retain];
  [_code release];
  _code = newCode;
}

/**
 * (no documentation provided)
 */
- (NSString *) listId
{
  return _listId;
}

/**
 * (no documentation provided)
 */
- (void) setListId: (NSString *) newListId
{
  [newListId retain];
  [_listId release];
  _listId = newListId;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

- (void) dealloc
{
  [self setDomain: nil];
  [self setCampus: nil];
  [self setCode: nil];
  [self setListId: nil];
  [self setDescription: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0WardListItemDTO *_pATIENTFOLDERAPINS0WardListItemDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0WardListItemDTO = (PATIENTFOLDERAPINS0WardListItemDTO *) [PATIENTFOLDERAPINS0WardListItemDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0WardListItemDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0WardListItemDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0WardListItemDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0WardListItemDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0WardListItemDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0WardListItemDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0WardListItemDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0WardListItemDTO *_pATIENTFOLDERAPINS0WardListItemDTO = [[PATIENTFOLDERAPINS0WardListItemDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0WardListItemDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0WardListItemDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0WardListItemDTO autorelease];
  return _pATIENTFOLDERAPINS0WardListItemDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0WardListItemDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0WardListItemDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0WardListItemDTO from an XML reader. The element to be read is
 * "WardListItem".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0WardListItemDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0WardListItemDTO *_wardListItemDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element WardListItem."];
    }
  }

  if (xmlStrcmp(BAD_CAST "WardListItem", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}WardListItem.");
#endif
    _wardListItemDTO = (PATIENTFOLDERAPINS0WardListItemDTO *)[PATIENTFOLDERAPINS0WardListItemDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}WardListItem.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0WardListItemDTO. Expected element WardListItem. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0WardListItemDTO. Expected element WardListItem. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _wardListItemDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0WardListItemDTO to XML under element name "WardListItem".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _wardListItemDTO The WardListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0WardListItemDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "WardListItem", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}WardListItem. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}WardListItem for root element {}WardListItem...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}WardListItem for root element {}WardListItem...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}WardListItem. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Domain", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDomain: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Campus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCampus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Code", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ListId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setListId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self domain]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Domain", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Domain."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Domain...");
#endif
    [[self domain] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Domain...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Domain."];
    }
  }
  if ([self campus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Campus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Campus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Campus...");
#endif
    [[self campus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Campus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Campus."];
    }
  }
  if ([self code]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Code", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Code."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Code...");
#endif
    [[self code] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Code...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Code."];
    }
  }
  if ([self listId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ListId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ListId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ListId...");
#endif
    [[self listId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ListId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ListId."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Description."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0WardListItemDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0WardListItemDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0PatientListItemDTO_M
#define DEF_PATIENTFOLDERAPINS0PatientListItemDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0PatientListItemDTO

/**
 * (no documentation provided)
 */
- (NSString *) listId
{
  return _listId;
}

/**
 * (no documentation provided)
 */
- (void) setListId: (NSString *) newListId
{
  [newListId retain];
  [_listId release];
  _listId = newListId;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

/**
 * (no documentation provided)
 */
- (BOOL) isEpisodic
{
  return _isEpisodic;
}

/**
 * (no documentation provided)
 */
- (void) setIsEpisodic: (BOOL) newIsEpisodic
{
  _isEpisodic = newIsEpisodic;
}

- (void) dealloc
{
  [self setListId: nil];
  [self setDescription: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0PatientListItemDTO *_pATIENTFOLDERAPINS0PatientListItemDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0PatientListItemDTO = (PATIENTFOLDERAPINS0PatientListItemDTO *) [PATIENTFOLDERAPINS0PatientListItemDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0PatientListItemDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0PatientListItemDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0PatientListItemDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0PatientListItemDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0PatientListItemDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0PatientListItemDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0PatientListItemDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0PatientListItemDTO *_pATIENTFOLDERAPINS0PatientListItemDTO = [[PATIENTFOLDERAPINS0PatientListItemDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0PatientListItemDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0PatientListItemDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0PatientListItemDTO autorelease];
  return _pATIENTFOLDERAPINS0PatientListItemDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0PatientListItemDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0PatientListItemDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0PatientListItemDTO from an XML reader. The element to be read is
 * "PatientListItem".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0PatientListItemDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0PatientListItemDTO *_patientListItemDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element PatientListItem."];
    }
  }

  if (xmlStrcmp(BAD_CAST "PatientListItem", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}PatientListItem.");
#endif
    _patientListItemDTO = (PATIENTFOLDERAPINS0PatientListItemDTO *)[PATIENTFOLDERAPINS0PatientListItemDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}PatientListItem.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0PatientListItemDTO. Expected element PatientListItem. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0PatientListItemDTO. Expected element PatientListItem. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _patientListItemDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0PatientListItemDTO to XML under element name "PatientListItem".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _patientListItemDTO The PatientListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0PatientListItemDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PatientListItem", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}PatientListItem. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}PatientListItem for root element {}PatientListItem...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}PatientListItem for root element {}PatientListItem...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}PatientListItem. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ListId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setListId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "IsEpisodic", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setIsEpisodic: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self listId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ListId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ListId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ListId...");
#endif
    [[self listId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ListId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ListId."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Description."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "IsEpisodic", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}IsEpisodic."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}IsEpisodic...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_isEpisodic);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}IsEpisodic...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}IsEpisodic."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}IsEpisodic."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0PatientListItemDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0PatientListItemDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0PaginatedListDTO_M
#define DEF_PATIENTFOLDERAPINS0PaginatedListDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0PaginatedListDTO

/**
 * (no documentation provided)
 */
- (int) start
{
  return _start;
}

/**
 * (no documentation provided)
 */
- (void) setStart: (int) newStart
{
  _start = newStart;
}

/**
 * (no documentation provided)
 */
- (int) size
{
  return _size;
}

/**
 * (no documentation provided)
 */
- (void) setSize: (int) newSize
{
  _size = newSize;
}

/**
 * (no documentation provided)
 */
- (NSString *) sort
{
  return _sort;
}

/**
 * (no documentation provided)
 */
- (void) setSort: (NSString *) newSort
{
  [newSort retain];
  [_sort release];
  _sort = newSort;
}

/**
 * (no documentation provided)
 */
- (NSString *) order
{
  return _order;
}

/**
 * (no documentation provided)
 */
- (void) setOrder: (NSString *) newOrder
{
  [newOrder retain];
  [_order release];
  _order = newOrder;
}

- (void) dealloc
{
  [self setSort: nil];
  [self setOrder: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0PaginatedListDTO *_pATIENTFOLDERAPINS0PaginatedListDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0PaginatedListDTO = (PATIENTFOLDERAPINS0PaginatedListDTO *) [PATIENTFOLDERAPINS0PaginatedListDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0PaginatedListDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0PaginatedListDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0PaginatedListDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0PaginatedListDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0PaginatedListDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0PaginatedListDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0PaginatedListDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0PaginatedListDTO *_pATIENTFOLDERAPINS0PaginatedListDTO = [[PATIENTFOLDERAPINS0PaginatedListDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0PaginatedListDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0PaginatedListDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0PaginatedListDTO autorelease];
  return _pATIENTFOLDERAPINS0PaginatedListDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0PaginatedListDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0PaginatedListDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0PaginatedListDTO from an XML reader. The element to be read is
 * "results".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0PaginatedListDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0PaginatedListDTO *_paginatedListDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element results."];
    }
  }

  if (xmlStrcmp(BAD_CAST "results", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}results.");
#endif
    _paginatedListDTO = (PATIENTFOLDERAPINS0PaginatedListDTO *)[PATIENTFOLDERAPINS0PaginatedListDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}results.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0PaginatedListDTO. Expected element results. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0PaginatedListDTO. Expected element results. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _paginatedListDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0PaginatedListDTO to XML under element name "results".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _paginatedListDTO The PaginatedListDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0PaginatedListDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "results", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}results. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}paginatedListDTO for root element {}results...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}paginatedListDTO for root element {}results...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}results. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "start", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setStart: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "size", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setSize: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "sort", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}sort of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}sort of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSort: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "order", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}order of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}order of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOrder: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "start", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}start."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}start...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_start);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}start...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}start."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}start."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "size", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}size."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}size...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_size);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}size...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}size."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}size."];
    }
  }
  if ([self sort]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "sort", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}sort."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}sort...");
#endif
    [[self sort] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}sort...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}sort."];
    }
  }
  if ([self order]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "order", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}order."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}order...");
#endif
    [[self order] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}order...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}order."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0PaginatedListDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0PaginatedListDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0DocumentDTO_M
#define DEF_PATIENTFOLDERAPINS0DocumentDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0DocumentDTO

/**
 * (no documentation provided)
 */
- (NSString *) src
{
  return _src;
}

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc
{
  [newSrc retain];
  [_src release];
  _src = newSrc;
}

/**
 * (no documentation provided)
 */
- (NSString *) masterID
{
  return _masterID;
}

/**
 * (no documentation provided)
 */
- (void) setMasterID: (NSString *) newMasterID
{
  [newMasterID retain];
  [_masterID release];
  _masterID = newMasterID;
}

/**
 * (no documentation provided)
 */
- (NSString *) documentCode
{
  return _documentCode;
}

/**
 * (no documentation provided)
 */
- (void) setDocumentCode: (NSString *) newDocumentCode
{
  [newDocumentCode retain];
  [_documentCode release];
  _documentCode = newDocumentCode;
}

/**
 * (no documentation provided)
 */
- (NSString *) documentDesc
{
  return _documentDesc;
}

/**
 * (no documentation provided)
 */
- (void) setDocumentDesc: (NSString *) newDocumentDesc
{
  [newDocumentDesc retain];
  [_documentDesc release];
  _documentDesc = newDocumentDesc;
}

/**
 * (no documentation provided)
 */
- (NSString *) section
{
  return _section;
}

/**
 * (no documentation provided)
 */
- (void) setSection: (NSString *) newSection
{
  [newSection retain];
  [_section release];
  _section = newSection;
}

/**
 * (no documentation provided)
 */
- (NSString *) episode
{
  return _episode;
}

/**
 * (no documentation provided)
 */
- (void) setEpisode: (NSString *) newEpisode
{
  [newEpisode retain];
  [_episode release];
  _episode = newEpisode;
}

/**
 * (no documentation provided)
 */
- (NSString *) mimeType
{
  return _mimeType;
}

/**
 * (no documentation provided)
 */
- (void) setMimeType: (NSString *) newMimeType
{
  [newMimeType retain];
  [_mimeType release];
  _mimeType = newMimeType;
}

/**
 * (no documentation provided)
 */
- (NSString *) documentDate
{
  return _documentDate;
}

/**
 * (no documentation provided)
 */
- (void) setDocumentDate: (NSString *) newDocumentDate
{
  [newDocumentDate retain];
  [_documentDate release];
  _documentDate = newDocumentDate;
}

/**
 * (no documentation provided)
 */
- (NSString *) pageNumber
{
  return _pageNumber;
}

/**
 * (no documentation provided)
 */
- (void) setPageNumber: (NSString *) newPageNumber
{
  [newPageNumber retain];
  [_pageNumber release];
  _pageNumber = newPageNumber;
}

/**
 * (no documentation provided)
 */
- (NSString *) state
{
  return _state;
}

/**
 * (no documentation provided)
 */
- (void) setState: (NSString *) newState
{
  [newState retain];
  [_state release];
  _state = newState;
}

/**
 * (no documentation provided)
 */
- (NSString *) urno
{
  return _urno;
}

/**
 * (no documentation provided)
 */
- (void) setUrno: (NSString *) newUrno
{
  [newUrno retain];
  [_urno release];
  _urno = newUrno;
}

/**
 * (no documentation provided)
 */
- (NSString *) patientNs
{
  return _patientNs;
}

/**
 * (no documentation provided)
 */
- (void) setPatientNs: (NSString *) newPatientNs
{
  [newPatientNs retain];
  [_patientNs release];
  _patientNs = newPatientNs;
}

/**
 * (no documentation provided)
 */
- (NSString *) documentSource
{
  return _documentSource;
}

/**
 * (no documentation provided)
 */
- (void) setDocumentSource: (NSString *) newDocumentSource
{
  [newDocumentSource retain];
  [_documentSource release];
  _documentSource = newDocumentSource;
}

/**
 * (no documentation provided)
 */
- (NSString *) documentTime
{
  return _documentTime;
}

/**
 * (no documentation provided)
 */
- (void) setDocumentTime: (NSString *) newDocumentTime
{
  [newDocumentTime retain];
  [_documentTime release];
  _documentTime = newDocumentTime;
}

/**
 * (no documentation provided)
 */
- (NSString *) scannedDate
{
  return _scannedDate;
}

/**
 * (no documentation provided)
 */
- (void) setScannedDate: (NSString *) newScannedDate
{
  [newScannedDate retain];
  [_scannedDate release];
  _scannedDate = newScannedDate;
}

/**
 * (no documentation provided)
 */
- (NSString *) documentType
{
  return _documentType;
}

/**
 * (no documentation provided)
 */
- (void) setDocumentType: (NSString *) newDocumentType
{
  [newDocumentType retain];
  [_documentType release];
  _documentType = newDocumentType;
}

/**
 * (no documentation provided)
 */
- (NSString *) url
{
  return _url;
}

/**
 * (no documentation provided)
 */
- (void) setUrl: (NSString *) newUrl
{
  [newUrl retain];
  [_url release];
  _url = newUrl;
}

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0DocTypeSpecificDTO *) docTypeSpecific
{
  return _docTypeSpecific;
}

/**
 * (no documentation provided)
 */
- (void) setDocTypeSpecific: (PATIENTFOLDERAPINS0DocTypeSpecificDTO *) newDocTypeSpecific
{
  [newDocTypeSpecific retain];
  [_docTypeSpecific release];
  _docTypeSpecific = newDocTypeSpecific;
}

- (void) dealloc
{
  [self setSrc: nil];
  [self setMasterID: nil];
  [self setDocumentCode: nil];
  [self setDocumentDesc: nil];
  [self setSection: nil];
  [self setEpisode: nil];
  [self setMimeType: nil];
  [self setDocumentDate: nil];
  [self setPageNumber: nil];
  [self setState: nil];
  [self setUrno: nil];
  [self setPatientNs: nil];
  [self setDocumentSource: nil];
  [self setDocumentTime: nil];
  [self setScannedDate: nil];
  [self setDocumentType: nil];
  [self setUrl: nil];
  [self setDocTypeSpecific: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0DocumentDTO *_pATIENTFOLDERAPINS0DocumentDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0DocumentDTO = (PATIENTFOLDERAPINS0DocumentDTO *) [PATIENTFOLDERAPINS0DocumentDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0DocumentDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0DocumentDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0DocumentDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0DocumentDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0DocumentDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0DocumentDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0DocumentDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0DocumentDTO *_pATIENTFOLDERAPINS0DocumentDTO = [[PATIENTFOLDERAPINS0DocumentDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0DocumentDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0DocumentDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0DocumentDTO autorelease];
  return _pATIENTFOLDERAPINS0DocumentDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0DocumentDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0DocumentDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0DocumentDTO from an XML reader. The element to be read is
 * "Document".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0DocumentDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0DocumentDTO *_documentDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element Document."];
    }
  }

  if (xmlStrcmp(BAD_CAST "Document", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}Document.");
#endif
    _documentDTO = (PATIENTFOLDERAPINS0DocumentDTO *)[PATIENTFOLDERAPINS0DocumentDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}Document.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0DocumentDTO. Expected element Document. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0DocumentDTO. Expected element Document. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _documentDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0DocumentDTO to XML under element name "Document".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _documentDTO The DocumentDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0DocumentDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Document", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}Document. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}Document for root element {}Document...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}Document for root element {}Document...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}Document. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}src...");
#endif
    [self setSrc: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}src...");
#endif
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "MasterID", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}MasterID of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}MasterID of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMasterID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DocumentCode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DocumentCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DocumentCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDocumentCode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DocumentDesc", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DocumentDesc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DocumentDesc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDocumentDesc: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Section", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Section of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Section of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSection: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Episode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Episode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Episode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEpisode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "MimeType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}MimeType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}MimeType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMimeType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DocumentDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DocumentDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DocumentDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDocumentDate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "PageNumber", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}PageNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}PageNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPageNumber: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "State", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}State of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}State of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setState: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Urno", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUrno: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "PatientNs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPatientNs: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DocumentSource", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DocumentSource of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DocumentSource of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDocumentSource: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DocumentTime", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DocumentTime of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DocumentTime of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDocumentTime: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ScannedDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ScannedDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ScannedDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setScannedDate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DocumentType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DocumentType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DocumentType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDocumentType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "url", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}url of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}url of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUrl: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DocTypeSpecific", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DocTypeSpecific of type {}docTypeSpecificDTO.");
#endif
    __child = [PATIENTFOLDERAPINS0DocTypeSpecificDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DocTypeSpecific of type {}docTypeSpecificDTO.");
#endif

    [self setDocTypeSpecific: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

  if ([self src]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}src."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}src...");
#endif
    [[self src] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}src...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}src."];
    }
  }
}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self masterID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "MasterID", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}MasterID."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}MasterID...");
#endif
    [[self masterID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}MasterID...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}MasterID."];
    }
  }
  if ([self documentCode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentCode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DocumentCode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DocumentCode...");
#endif
    [[self documentCode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DocumentCode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DocumentCode."];
    }
  }
  if ([self documentDesc]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentDesc", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DocumentDesc."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DocumentDesc...");
#endif
    [[self documentDesc] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DocumentDesc...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DocumentDesc."];
    }
  }
  if ([self section]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Section", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Section."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Section...");
#endif
    [[self section] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Section...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Section."];
    }
  }
  if ([self episode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Episode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Episode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Episode...");
#endif
    [[self episode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Episode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Episode."];
    }
  }
  if ([self mimeType]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "MimeType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}MimeType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}MimeType...");
#endif
    [[self mimeType] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}MimeType...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}MimeType."];
    }
  }
  if ([self documentDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DocumentDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DocumentDate...");
#endif
    [[self documentDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DocumentDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DocumentDate."];
    }
  }
  if ([self pageNumber]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PageNumber", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}PageNumber."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}PageNumber...");
#endif
    [[self pageNumber] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}PageNumber...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}PageNumber."];
    }
  }
  if ([self state]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "State", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}State."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}State...");
#endif
    [[self state] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}State...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}State."];
    }
  }
  if ([self urno]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Urno", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Urno."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Urno...");
#endif
    [[self urno] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Urno...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Urno."];
    }
  }
  if ([self patientNs]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PatientNs", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}PatientNs."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}PatientNs...");
#endif
    [[self patientNs] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}PatientNs...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}PatientNs."];
    }
  }
  if ([self documentSource]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentSource", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DocumentSource."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DocumentSource...");
#endif
    [[self documentSource] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DocumentSource...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DocumentSource."];
    }
  }
  if ([self documentTime]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentTime", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DocumentTime."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DocumentTime...");
#endif
    [[self documentTime] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DocumentTime...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DocumentTime."];
    }
  }
  if ([self scannedDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ScannedDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ScannedDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ScannedDate...");
#endif
    [[self scannedDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ScannedDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ScannedDate."];
    }
  }
  if ([self documentType]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DocumentType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DocumentType...");
#endif
    [[self documentType] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DocumentType...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DocumentType."];
    }
  }
  if ([self url]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "url", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}url."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}url...");
#endif
    [[self url] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}url...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}url."];
    }
  }
  if ([self docTypeSpecific]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocTypeSpecific", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DocTypeSpecific."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DocTypeSpecific...");
#endif
    [[self docTypeSpecific] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DocTypeSpecific...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DocTypeSpecific."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0DocumentDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0DocumentDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0EpisodeDTO_M
#define DEF_PATIENTFOLDERAPINS0EpisodeDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0EpisodeDTO

/**
 * (no documentation provided)
 */
- (NSString *) src
{
  return _src;
}

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc
{
  [newSrc retain];
  [_src release];
  _src = newSrc;
}

/**
 * (no documentation provided)
 */
- (NSString *) intId
{
  return _intId;
}

/**
 * (no documentation provided)
 */
- (void) setIntId: (NSString *) newIntId
{
  [newIntId retain];
  [_intId release];
  _intId = newIntId;
}

/**
 * (no documentation provided)
 */
- (NSString *) extId
{
  return _extId;
}

/**
 * (no documentation provided)
 */
- (void) setExtId: (NSString *) newExtId
{
  [newExtId retain];
  [_extId release];
  _extId = newExtId;
}

/**
 * (no documentation provided)
 */
- (NSString *) extNS
{
  return _extNS;
}

/**
 * (no documentation provided)
 */
- (void) setExtNS: (NSString *) newExtNS
{
  [newExtNS retain];
  [_extNS release];
  _extNS = newExtNS;
}

/**
 * (no documentation provided)
 */
- (NSString *) patientURNO
{
  return _patientURNO;
}

/**
 * (no documentation provided)
 */
- (void) setPatientURNO: (NSString *) newPatientURNO
{
  [newPatientURNO retain];
  [_patientURNO release];
  _patientURNO = newPatientURNO;
}

/**
 * (no documentation provided)
 */
- (NSString *) ward_code
{
  return _ward_code;
}

/**
 * (no documentation provided)
 */
- (void) setWard_code: (NSString *) newWard_code
{
  [newWard_code retain];
  [_ward_code release];
  _ward_code = newWard_code;
}

/**
 * (no documentation provided)
 */
- (NSString *) service_type
{
  return _service_type;
}

/**
 * (no documentation provided)
 */
- (void) setService_type: (NSString *) newService_type
{
  [newService_type retain];
  [_service_type release];
  _service_type = newService_type;
}

/**
 * (no documentation provided)
 */
- (NSString *) care_type
{
  return _care_type;
}

/**
 * (no documentation provided)
 */
- (void) setCare_type: (NSString *) newCare_type
{
  [newCare_type retain];
  [_care_type release];
  _care_type = newCare_type;
}

/**
 * (no documentation provided)
 */
- (NSString *) episodeId
{
  return _episodeId;
}

/**
 * (no documentation provided)
 */
- (void) setEpisodeId: (NSString *) newEpisodeId
{
  [newEpisodeId retain];
  [_episodeId release];
  _episodeId = newEpisodeId;
}

/**
 * (no documentation provided)
 */
- (NSString *) episodeNs
{
  return _episodeNs;
}

/**
 * (no documentation provided)
 */
- (void) setEpisodeNs: (NSString *) newEpisodeNs
{
  [newEpisodeNs retain];
  [_episodeNs release];
  _episodeNs = newEpisodeNs;
}

/**
 * (no documentation provided)
 */
- (NSString *) type
{
  return _type;
}

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType
{
  [newType retain];
  [_type release];
  _type = newType;
}

/**
 * (no documentation provided)
 */
- (NSString *) state
{
  return _state;
}

/**
 * (no documentation provided)
 */
- (void) setState: (NSString *) newState
{
  [newState retain];
  [_state release];
  _state = newState;
}

/**
 * (no documentation provided)
 */
- (NSString *) start
{
  return _start;
}

/**
 * (no documentation provided)
 */
- (void) setStart: (NSString *) newStart
{
  [newStart retain];
  [_start release];
  _start = newStart;
}

/**
 * (no documentation provided)
 */
- (NSString *) end
{
  return _end;
}

/**
 * (no documentation provided)
 */
- (void) setEnd: (NSString *) newEnd
{
  [newEnd retain];
  [_end release];
  _end = newEnd;
}

/**
 * (no documentation provided)
 */
- (NSString *) campus
{
  return _campus;
}

/**
 * (no documentation provided)
 */
- (void) setCampus: (NSString *) newCampus
{
  [newCampus retain];
  [_campus release];
  _campus = newCampus;
}

/**
 * (no documentation provided)
 */
- (NSString *) wardCode
{
  return _wardCode;
}

/**
 * (no documentation provided)
 */
- (void) setWardCode: (NSString *) newWardCode
{
  [newWardCode retain];
  [_wardCode release];
  _wardCode = newWardCode;
}

/**
 * (no documentation provided)
 */
- (NSString *) wardDescription
{
  return _wardDescription;
}

/**
 * (no documentation provided)
 */
- (void) setWardDescription: (NSString *) newWardDescription
{
  [newWardDescription retain];
  [_wardDescription release];
  _wardDescription = newWardDescription;
}

/**
 * (no documentation provided)
 */
- (NSString *) unitCode
{
  return _unitCode;
}

/**
 * (no documentation provided)
 */
- (void) setUnitCode: (NSString *) newUnitCode
{
  [newUnitCode retain];
  [_unitCode release];
  _unitCode = newUnitCode;
}

/**
 * (no documentation provided)
 */
- (NSString *) unitDescription
{
  return _unitDescription;
}

/**
 * (no documentation provided)
 */
- (void) setUnitDescription: (NSString *) newUnitDescription
{
  [newUnitDescription retain];
  [_unitDescription release];
  _unitDescription = newUnitDescription;
}

/**
 * (no documentation provided)
 */
- (NSString *) bedCode
{
  return _bedCode;
}

/**
 * (no documentation provided)
 */
- (void) setBedCode: (NSString *) newBedCode
{
  [newBedCode retain];
  [_bedCode release];
  _bedCode = newBedCode;
}

/**
 * (no documentation provided)
 */
- (NSString *) bedDescription
{
  return _bedDescription;
}

/**
 * (no documentation provided)
 */
- (void) setBedDescription: (NSString *) newBedDescription
{
  [newBedDescription retain];
  [_bedDescription release];
  _bedDescription = newBedDescription;
}

/**
 * (no documentation provided)
 */
- (NSString *) serviceType
{
  return _serviceType;
}

/**
 * (no documentation provided)
 */
- (void) setServiceType: (NSString *) newServiceType
{
  [newServiceType retain];
  [_serviceType release];
  _serviceType = newServiceType;
}

/**
 * (no documentation provided)
 */
- (NSString *) careType
{
  return _careType;
}

/**
 * (no documentation provided)
 */
- (void) setCareType: (NSString *) newCareType
{
  [newCareType retain];
  [_careType release];
  _careType = newCareType;
}

/**
 * (no documentation provided)
 */
- (NSString *) doctorId
{
  return _doctorId;
}

/**
 * (no documentation provided)
 */
- (void) setDoctorId: (NSString *) newDoctorId
{
  [newDoctorId retain];
  [_doctorId release];
  _doctorId = newDoctorId;
}

/**
 * (no documentation provided)
 */
- (NSString *) doctorFamily
{
  return _doctorFamily;
}

/**
 * (no documentation provided)
 */
- (void) setDoctorFamily: (NSString *) newDoctorFamily
{
  [newDoctorFamily retain];
  [_doctorFamily release];
  _doctorFamily = newDoctorFamily;
}

/**
 * (no documentation provided)
 */
- (NSString *) doctorGiven
{
  return _doctorGiven;
}

/**
 * (no documentation provided)
 */
- (void) setDoctorGiven: (NSString *) newDoctorGiven
{
  [newDoctorGiven retain];
  [_doctorGiven release];
  _doctorGiven = newDoctorGiven;
}

/**
 * (no documentation provided)
 */
- (NSString *) drg
{
  return _drg;
}

/**
 * (no documentation provided)
 */
- (void) setDrg: (NSString *) newDrg
{
  [newDrg retain];
  [_drg release];
  _drg = newDrg;
}

/**
 * (no documentation provided)
 */
- (NSString *) los
{
  return _los;
}

/**
 * (no documentation provided)
 */
- (void) setLos: (NSString *) newLos
{
  [newLos retain];
  [_los release];
  _los = newLos;
}

/**
 * (no documentation provided)
 */
- (NSString *) noOfDocuments
{
  return _noOfDocuments;
}

/**
 * (no documentation provided)
 */
- (void) setNoOfDocuments: (NSString *) newNoOfDocuments
{
  [newNoOfDocuments retain];
  [_noOfDocuments release];
  _noOfDocuments = newNoOfDocuments;
}

/**
 * (no documentation provided)
 */
- (NSString *) startDate
{
  return _startDate;
}

/**
 * (no documentation provided)
 */
- (void) setStartDate: (NSString *) newStartDate
{
  [newStartDate retain];
  [_startDate release];
  _startDate = newStartDate;
}

/**
 * (no documentation provided)
 */
- (NSString *) endDate
{
  return _endDate;
}

/**
 * (no documentation provided)
 */
- (void) setEndDate: (NSString *) newEndDate
{
  [newEndDate retain];
  [_endDate release];
  _endDate = newEndDate;
}

/**
 * (no documentation provided)
 */
- (NSString *) financialClass
{
  return _financialClass;
}

/**
 * (no documentation provided)
 */
- (void) setFinancialClass: (NSString *) newFinancialClass
{
  [newFinancialClass retain];
  [_financialClass release];
  _financialClass = newFinancialClass;
}

- (void) dealloc
{
  [self setSrc: nil];
  [self setIntId: nil];
  [self setExtId: nil];
  [self setExtNS: nil];
  [self setPatientURNO: nil];
  [self setWard_code: nil];
  [self setService_type: nil];
  [self setCare_type: nil];
  [self setEpisodeId: nil];
  [self setEpisodeNs: nil];
  [self setType: nil];
  [self setState: nil];
  [self setStart: nil];
  [self setEnd: nil];
  [self setCampus: nil];
  [self setWardCode: nil];
  [self setWardDescription: nil];
  [self setUnitCode: nil];
  [self setUnitDescription: nil];
  [self setBedCode: nil];
  [self setBedDescription: nil];
  [self setServiceType: nil];
  [self setCareType: nil];
  [self setDoctorId: nil];
  [self setDoctorFamily: nil];
  [self setDoctorGiven: nil];
  [self setDrg: nil];
  [self setLos: nil];
  [self setNoOfDocuments: nil];
  [self setStartDate: nil];
  [self setEndDate: nil];
  [self setFinancialClass: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0EpisodeDTO *_pATIENTFOLDERAPINS0EpisodeDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0EpisodeDTO = (PATIENTFOLDERAPINS0EpisodeDTO *) [PATIENTFOLDERAPINS0EpisodeDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0EpisodeDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0EpisodeDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0EpisodeDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0EpisodeDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0EpisodeDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0EpisodeDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0EpisodeDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0EpisodeDTO *_pATIENTFOLDERAPINS0EpisodeDTO = [[PATIENTFOLDERAPINS0EpisodeDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0EpisodeDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0EpisodeDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0EpisodeDTO autorelease];
  return _pATIENTFOLDERAPINS0EpisodeDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0EpisodeDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0EpisodeDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0EpisodeDTO from an XML reader. The element to be read is
 * "Episode".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0EpisodeDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0EpisodeDTO *_episodeDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element Episode."];
    }
  }

  if (xmlStrcmp(BAD_CAST "Episode", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}Episode.");
#endif
    _episodeDTO = (PATIENTFOLDERAPINS0EpisodeDTO *)[PATIENTFOLDERAPINS0EpisodeDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}Episode.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0EpisodeDTO. Expected element Episode. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0EpisodeDTO. Expected element Episode. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _episodeDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0EpisodeDTO to XML under element name "Episode".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _episodeDTO The EpisodeDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0EpisodeDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Episode", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}Episode. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}Episode for root element {}Episode...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}Episode for root element {}Episode...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}Episode. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}src...");
#endif
    [self setSrc: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}src...");
#endif
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "intId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}intId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}intId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIntId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "extId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}extId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}extId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setExtId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "extNS", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}extNS of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}extNS of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setExtNS: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "patientURNO", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}patientURNO of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}patientURNO of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPatientURNO: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ward_code", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ward_code of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ward_code of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setWard_code: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "service_type", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}service_type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}service_type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setService_type: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "care_type", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}care_type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}care_type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCare_type: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "EpisodeId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}EpisodeId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}EpisodeId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEpisodeId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "EpisodeNs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}EpisodeNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}EpisodeNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEpisodeNs: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Type", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "State", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}State of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}State of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setState: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Start", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Start of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Start of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setStart: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "End", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}End of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}End of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEnd: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Campus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCampus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "WardCode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}WardCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}WardCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setWardCode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "WardDescription", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}WardDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}WardDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setWardDescription: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "UnitCode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}UnitCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}UnitCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUnitCode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "UnitDescription", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}UnitDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}UnitDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUnitDescription: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "BedCode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}BedCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}BedCode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setBedCode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "BedDescription", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}BedDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}BedDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setBedDescription: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ServiceType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ServiceType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ServiceType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setServiceType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "CareType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}CareType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}CareType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCareType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DoctorId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DoctorId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DoctorId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDoctorId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DoctorFamily", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DoctorFamily of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DoctorFamily of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDoctorFamily: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "doctorGiven", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}doctorGiven of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}doctorGiven of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDoctorGiven: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DRG", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DRG of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DRG of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDrg: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "LOS", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}LOS of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}LOS of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLos: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "NoOfDocuments", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}NoOfDocuments of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}NoOfDocuments of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNoOfDocuments: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "StartDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}StartDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}StartDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setStartDate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "EndDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}EndDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}EndDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEndDate: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "FinancialClass", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}FinancialClass of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}FinancialClass of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFinancialClass: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

  if ([self src]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}src."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}src...");
#endif
    [[self src] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}src...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}src."];
    }
  }
}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self intId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "intId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}intId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}intId...");
#endif
    [[self intId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}intId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}intId."];
    }
  }
  if ([self extId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}extId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}extId...");
#endif
    [[self extId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}extId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}extId."];
    }
  }
  if ([self extNS]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "extNS", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}extNS."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}extNS...");
#endif
    [[self extNS] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}extNS...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}extNS."];
    }
  }
  if ([self patientURNO]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "patientURNO", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}patientURNO."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}patientURNO...");
#endif
    [[self patientURNO] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}patientURNO...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}patientURNO."];
    }
  }
  if ([self ward_code]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ward_code", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ward_code."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ward_code...");
#endif
    [[self ward_code] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ward_code...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ward_code."];
    }
  }
  if ([self service_type]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "service_type", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}service_type."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}service_type...");
#endif
    [[self service_type] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}service_type...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}service_type."];
    }
  }
  if ([self care_type]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "care_type", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}care_type."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}care_type...");
#endif
    [[self care_type] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}care_type...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}care_type."];
    }
  }
  if ([self episodeId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "EpisodeId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}EpisodeId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}EpisodeId...");
#endif
    [[self episodeId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}EpisodeId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}EpisodeId."];
    }
  }
  if ([self episodeNs]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "EpisodeNs", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}EpisodeNs."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}EpisodeNs...");
#endif
    [[self episodeNs] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}EpisodeNs...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}EpisodeNs."];
    }
  }
  if ([self type]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Type", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Type."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Type...");
#endif
    [[self type] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Type...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Type."];
    }
  }
  if ([self state]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "State", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}State."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}State...");
#endif
    [[self state] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}State...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}State."];
    }
  }
  if ([self start]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Start", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Start."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Start...");
#endif
    [[self start] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Start...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Start."];
    }
  }
  if ([self end]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "End", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}End."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}End...");
#endif
    [[self end] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}End...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}End."];
    }
  }
  if ([self campus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Campus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Campus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Campus...");
#endif
    [[self campus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Campus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Campus."];
    }
  }
  if ([self wardCode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "WardCode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}WardCode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}WardCode...");
#endif
    [[self wardCode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}WardCode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}WardCode."];
    }
  }
  if ([self wardDescription]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "WardDescription", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}WardDescription."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}WardDescription...");
#endif
    [[self wardDescription] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}WardDescription...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}WardDescription."];
    }
  }
  if ([self unitCode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "UnitCode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}UnitCode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}UnitCode...");
#endif
    [[self unitCode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}UnitCode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}UnitCode."];
    }
  }
  if ([self unitDescription]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "UnitDescription", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}UnitDescription."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}UnitDescription...");
#endif
    [[self unitDescription] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}UnitDescription...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}UnitDescription."];
    }
  }
  if ([self bedCode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "BedCode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}BedCode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}BedCode...");
#endif
    [[self bedCode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}BedCode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}BedCode."];
    }
  }
  if ([self bedDescription]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "BedDescription", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}BedDescription."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}BedDescription...");
#endif
    [[self bedDescription] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}BedDescription...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}BedDescription."];
    }
  }
  if ([self serviceType]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ServiceType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ServiceType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ServiceType...");
#endif
    [[self serviceType] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ServiceType...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ServiceType."];
    }
  }
  if ([self careType]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "CareType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}CareType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}CareType...");
#endif
    [[self careType] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}CareType...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}CareType."];
    }
  }
  if ([self doctorId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DoctorId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DoctorId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DoctorId...");
#endif
    [[self doctorId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DoctorId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DoctorId."];
    }
  }
  if ([self doctorFamily]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DoctorFamily", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DoctorFamily."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DoctorFamily...");
#endif
    [[self doctorFamily] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DoctorFamily...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DoctorFamily."];
    }
  }
  if ([self doctorGiven]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "doctorGiven", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}doctorGiven."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}doctorGiven...");
#endif
    [[self doctorGiven] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}doctorGiven...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}doctorGiven."];
    }
  }
  if ([self drg]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DRG", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DRG."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DRG...");
#endif
    [[self drg] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DRG...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DRG."];
    }
  }
  if ([self los]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "LOS", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}LOS."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}LOS...");
#endif
    [[self los] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}LOS...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}LOS."];
    }
  }
  if ([self noOfDocuments]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "NoOfDocuments", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}NoOfDocuments."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}NoOfDocuments...");
#endif
    [[self noOfDocuments] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}NoOfDocuments...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}NoOfDocuments."];
    }
  }
  if ([self startDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "StartDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}StartDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}StartDate...");
#endif
    [[self startDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}StartDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}StartDate."];
    }
  }
  if ([self endDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "EndDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}EndDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}EndDate...");
#endif
    [[self endDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}EndDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}EndDate."];
    }
  }
  if ([self financialClass]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "FinancialClass", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}FinancialClass."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}FinancialClass...");
#endif
    [[self financialClass] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}FinancialClass...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}FinancialClass."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0EpisodeDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0EpisodeDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0ClinicListItemDTO_M
#define DEF_PATIENTFOLDERAPINS0ClinicListItemDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0ClinicListItemDTO

/**
 * (no documentation provided)
 */
- (NSString *) domain
{
  return _domain;
}

/**
 * (no documentation provided)
 */
- (void) setDomain: (NSString *) newDomain
{
  [newDomain retain];
  [_domain release];
  _domain = newDomain;
}

/**
 * (no documentation provided)
 */
- (NSString *) campus
{
  return _campus;
}

/**
 * (no documentation provided)
 */
- (void) setCampus: (NSString *) newCampus
{
  [newCampus retain];
  [_campus release];
  _campus = newCampus;
}

/**
 * (no documentation provided)
 */
- (NSString *) code
{
  return _code;
}

/**
 * (no documentation provided)
 */
- (void) setCode: (NSString *) newCode
{
  [newCode retain];
  [_code release];
  _code = newCode;
}

/**
 * (no documentation provided)
 */
- (NSString *) listId
{
  return _listId;
}

/**
 * (no documentation provided)
 */
- (void) setListId: (NSString *) newListId
{
  [newListId retain];
  [_listId release];
  _listId = newListId;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

- (void) dealloc
{
  [self setDomain: nil];
  [self setCampus: nil];
  [self setCode: nil];
  [self setListId: nil];
  [self setDescription: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0ClinicListItemDTO *_pATIENTFOLDERAPINS0ClinicListItemDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0ClinicListItemDTO = (PATIENTFOLDERAPINS0ClinicListItemDTO *) [PATIENTFOLDERAPINS0ClinicListItemDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0ClinicListItemDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0ClinicListItemDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0ClinicListItemDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0ClinicListItemDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0ClinicListItemDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0ClinicListItemDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0ClinicListItemDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0ClinicListItemDTO *_pATIENTFOLDERAPINS0ClinicListItemDTO = [[PATIENTFOLDERAPINS0ClinicListItemDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0ClinicListItemDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0ClinicListItemDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0ClinicListItemDTO autorelease];
  return _pATIENTFOLDERAPINS0ClinicListItemDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0ClinicListItemDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0ClinicListItemDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0ClinicListItemDTO from an XML reader. The element to be read is
 * "ClinicListItem".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0ClinicListItemDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0ClinicListItemDTO *_clinicListItemDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element ClinicListItem."];
    }
  }

  if (xmlStrcmp(BAD_CAST "ClinicListItem", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}ClinicListItem.");
#endif
    _clinicListItemDTO = (PATIENTFOLDERAPINS0ClinicListItemDTO *)[PATIENTFOLDERAPINS0ClinicListItemDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}ClinicListItem.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ClinicListItemDTO. Expected element ClinicListItem. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0ClinicListItemDTO. Expected element ClinicListItem. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _clinicListItemDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0ClinicListItemDTO to XML under element name "ClinicListItem".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _clinicListItemDTO The ClinicListItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0ClinicListItemDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ClinicListItem", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}ClinicListItem. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}ClinicListItem for root element {}ClinicListItem...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}ClinicListItem for root element {}ClinicListItem...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}ClinicListItem. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Domain", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Domain of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDomain: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Campus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Campus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCampus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Code", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ListId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ListId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setListId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self domain]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Domain", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Domain."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Domain...");
#endif
    [[self domain] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Domain...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Domain."];
    }
  }
  if ([self campus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Campus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Campus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Campus...");
#endif
    [[self campus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Campus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Campus."];
    }
  }
  if ([self code]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Code", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Code."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Code...");
#endif
    [[self code] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Code...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Code."];
    }
  }
  if ([self listId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ListId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ListId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ListId...");
#endif
    [[self listId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ListId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ListId."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Description."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0ClinicListItemDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0ClinicListItemDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0AlertItemDTO_M
#define DEF_PATIENTFOLDERAPINS0AlertItemDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0AlertItemDTO

/**
 * (no documentation provided)
 */
- (NSString *) alertNs
{
  return _alertNs;
}

/**
 * (no documentation provided)
 */
- (void) setAlertNs: (NSString *) newAlertNs
{
  [newAlertNs retain];
  [_alertNs release];
  _alertNs = newAlertNs;
}

/**
 * (no documentation provided)
 */
- (NSString *) code
{
  return _code;
}

/**
 * (no documentation provided)
 */
- (void) setCode: (NSString *) newCode
{
  [newCode retain];
  [_code release];
  _code = newCode;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

/**
 * (no documentation provided)
 */
- (NSString *) type
{
  return _type;
}

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType
{
  [newType retain];
  [_type release];
  _type = newType;
}

/**
 * (no documentation provided)
 */
- (NSString *) comment
{
  return _comment;
}

/**
 * (no documentation provided)
 */
- (void) setComment: (NSString *) newComment
{
  [newComment retain];
  [_comment release];
  _comment = newComment;
}

/**
 * (no documentation provided)
 */
- (NSString *) identificationDate
{
  return _identificationDate;
}

/**
 * (no documentation provided)
 */
- (void) setIdentificationDate: (NSString *) newIdentificationDate
{
  [newIdentificationDate retain];
  [_identificationDate release];
  _identificationDate = newIdentificationDate;
}

- (void) dealloc
{
  [self setAlertNs: nil];
  [self setCode: nil];
  [self setDescription: nil];
  [self setType: nil];
  [self setComment: nil];
  [self setIdentificationDate: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0AlertItemDTO *_pATIENTFOLDERAPINS0AlertItemDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0AlertItemDTO = (PATIENTFOLDERAPINS0AlertItemDTO *) [PATIENTFOLDERAPINS0AlertItemDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0AlertItemDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0AlertItemDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0AlertItemDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0AlertItemDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0AlertItemDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0AlertItemDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0AlertItemDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0AlertItemDTO *_pATIENTFOLDERAPINS0AlertItemDTO = [[PATIENTFOLDERAPINS0AlertItemDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0AlertItemDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0AlertItemDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0AlertItemDTO autorelease];
  return _pATIENTFOLDERAPINS0AlertItemDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0AlertItemDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0AlertItemDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0AlertItemDTO from an XML reader. The element to be read is
 * "AlertItem".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0AlertItemDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0AlertItemDTO *_alertItemDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element AlertItem."];
    }
  }

  if (xmlStrcmp(BAD_CAST "AlertItem", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}AlertItem.");
#endif
    _alertItemDTO = (PATIENTFOLDERAPINS0AlertItemDTO *)[PATIENTFOLDERAPINS0AlertItemDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}AlertItem.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0AlertItemDTO. Expected element AlertItem. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0AlertItemDTO. Expected element AlertItem. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _alertItemDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0AlertItemDTO to XML under element name "AlertItem".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _alertItemDTO The AlertItemDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0AlertItemDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "AlertItem", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}AlertItem. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}AlertItem for root element {}AlertItem...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}AlertItem for root element {}AlertItem...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}AlertItem. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "AlertNs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}AlertNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}AlertNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAlertNs: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Code", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Code of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Type", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Comment", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Comment of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Comment of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setComment: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "IdentificationDate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}IdentificationDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}IdentificationDate of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentificationDate: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self alertNs]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "AlertNs", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}AlertNs."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}AlertNs...");
#endif
    [[self alertNs] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}AlertNs...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}AlertNs."];
    }
  }
  if ([self code]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Code", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Code."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Code...");
#endif
    [[self code] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Code...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Code."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Description."];
    }
  }
  if ([self type]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Type", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Type."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Type...");
#endif
    [[self type] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Type...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Type."];
    }
  }
  if ([self comment]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Comment", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Comment."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Comment...");
#endif
    [[self comment] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Comment...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Comment."];
    }
  }
  if ([self identificationDate]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "IdentificationDate", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}IdentificationDate."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}IdentificationDate...");
#endif
    [[self identificationDate] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}IdentificationDate...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}IdentificationDate."];
    }
  }
}
@end /* implementation PATIENTFOLDERAPINS0AlertItemDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0AlertItemDTO_M */
#ifndef DEF_PATIENTFOLDERAPINS0AlertDTO_M
#define DEF_PATIENTFOLDERAPINS0AlertDTO_M

/**
 * (no documentation provided)
 */
@implementation PATIENTFOLDERAPINS0AlertDTO

/**
 * (no documentation provided)
 */
- (NSString *) src
{
  return _src;
}

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc
{
  [newSrc retain];
  [_src release];
  _src = newSrc;
}

/**
 * (no documentation provided)
 */
- (NSString *) urno
{
  return _urno;
}

/**
 * (no documentation provided)
 */
- (void) setUrno: (NSString *) newUrno
{
  [newUrno retain];
  [_urno release];
  _urno = newUrno;
}

/**
 * (no documentation provided)
 */
- (NSString *) patientNs
{
  return _patientNs;
}

/**
 * (no documentation provided)
 */
- (void) setPatientNs: (NSString *) newPatientNs
{
  [newPatientNs retain];
  [_patientNs release];
  _patientNs = newPatientNs;
}

/**
 * (no documentation provided)
 */
- (NSString *) documentId
{
  return _documentId;
}

/**
 * (no documentation provided)
 */
- (void) setDocumentId: (NSString *) newDocumentId
{
  [newDocumentId retain];
  [_documentId release];
  _documentId = newDocumentId;
}

/**
 * (no documentation provided)
 */
- (NSString *) documentNS
{
  return _documentNS;
}

/**
 * (no documentation provided)
 */
- (void) setDocumentNS: (NSString *) newDocumentNS
{
  [newDocumentNS retain];
  [_documentNS release];
  _documentNS = newDocumentNS;
}

/**
 * (no documentation provided)
 */
- (NSArray *) electronicAlerts
{
  return _electronicAlerts;
}

/**
 * (no documentation provided)
 */
- (void) setElectronicAlerts: (NSArray *) newElectronicAlerts
{
  [newElectronicAlerts retain];
  [_electronicAlerts release];
  _electronicAlerts = newElectronicAlerts;
}

/**
 * (no documentation provided)
 */
- (NSArray *) scannedAlerts
{
  return _scannedAlerts;
}

/**
 * (no documentation provided)
 */
- (void) setScannedAlerts: (NSArray *) newScannedAlerts
{
  [newScannedAlerts retain];
  [_scannedAlerts release];
  _scannedAlerts = newScannedAlerts;
}

- (void) dealloc
{
  [self setSrc: nil];
  [self setUrno: nil];
  [self setPatientNs: nil];
  [self setDocumentId: nil];
  [self setDocumentNS: nil];
  [self setElectronicAlerts: nil];
  [self setScannedAlerts: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  PATIENTFOLDERAPINS0AlertDTO *_pATIENTFOLDERAPINS0AlertDTO;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _pATIENTFOLDERAPINS0AlertDTO = (PATIENTFOLDERAPINS0AlertDTO *) [PATIENTFOLDERAPINS0AlertDTO readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _pATIENTFOLDERAPINS0AlertDTO;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation PATIENTFOLDERAPINS0AlertDTO */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface PATIENTFOLDERAPINS0AlertDTO (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface PATIENTFOLDERAPINS0AlertDTO (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation PATIENTFOLDERAPINS0AlertDTO (JAXB)

/**
 * Read an instance of PATIENTFOLDERAPINS0AlertDTO from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of PATIENTFOLDERAPINS0AlertDTO defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  PATIENTFOLDERAPINS0AlertDTO *_pATIENTFOLDERAPINS0AlertDTO = [[PATIENTFOLDERAPINS0AlertDTO alloc] init];
  NS_DURING
  {
    [_pATIENTFOLDERAPINS0AlertDTO initWithReader: reader];
  }
  NS_HANDLER
  {
    _pATIENTFOLDERAPINS0AlertDTO = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_pATIENTFOLDERAPINS0AlertDTO autorelease];
  return _pATIENTFOLDERAPINS0AlertDTO;
}

/**
 * Initialize this instance of PATIENTFOLDERAPINS0AlertDTO according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of PATIENTFOLDERAPINS0AlertDTO to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a PATIENTFOLDERAPINS0AlertDTO from an XML reader. The element to be read is
 * "Alerts".
 *
 * @param reader The XML reader.
 * @return The PATIENTFOLDERAPINS0AlertDTO.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  PATIENTFOLDERAPINS0AlertDTO *_alertDTO = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element Alerts."];
    }
  }

  if (xmlStrcmp(BAD_CAST "Alerts", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}Alerts.");
#endif
    _alertDTO = (PATIENTFOLDERAPINS0AlertDTO *)[PATIENTFOLDERAPINS0AlertDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}Alerts.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0AlertDTO. Expected element Alerts. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read PATIENTFOLDERAPINS0AlertDTO. Expected element Alerts. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _alertDTO;
}

/**
 * Writes this PATIENTFOLDERAPINS0AlertDTO to XML under element name "Alerts".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _alertDTO The AlertDTO to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this PATIENTFOLDERAPINS0AlertDTO to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Alerts", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}Alerts. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}Alerts for root element {}Alerts...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}Alerts for root element {}Alerts...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}Alerts. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  if ((xmlStrcmp(BAD_CAST "src", xmlTextReaderConstLocalName(reader)) == 0) && (xmlTextReaderConstNamespaceUri(reader) == NULL)) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read attribute {}src...");
#endif
    [self setSrc: (NSString*) [NSString readXMLType: reader]];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read attribute {}src...");
#endif
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "Urno", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}Urno of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUrno: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "PatientNs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}PatientNs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPatientNs: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DocumentId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DocumentId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DocumentId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDocumentId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "DocumentNS", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}DocumentNS of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}DocumentNS of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDocumentNS: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ElectronicAlerts", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ElectronicAlerts of type {}AlertItem.");
#endif

    __child = [PATIENTFOLDERAPINS0AlertItemDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ElectronicAlerts of type {}AlertItem.");
#endif

    if ([self electronicAlerts]) {
      [self setElectronicAlerts: [[self electronicAlerts] arrayByAddingObject: __child]];
    }
    else {
      [self setElectronicAlerts: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ScannedAlerts", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ScannedAlerts of type {}Document.");
#endif

    __child = [PATIENTFOLDERAPINS0DocumentDTO readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ScannedAlerts of type {}Document.");
#endif

    if ([self scannedAlerts]) {
      [self setScannedAlerts: [[self scannedAlerts] arrayByAddingObject: __child]];
    }
    else {
      [self setScannedAlerts: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

  if ([self src]) {

    status = xmlTextWriterStartAttributeNS(writer, NULL, BAD_CAST "src", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start attribute {}src."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing attribute {}src...");
#endif
    [[self src] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote attribute {}src...");
#endif

    status = xmlTextWriterEndAttribute(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end attribute {}src."];
    }
  }
}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self urno]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "Urno", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}Urno."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}Urno...");
#endif
    [[self urno] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}Urno...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}Urno."];
    }
  }
  if ([self patientNs]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "PatientNs", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}PatientNs."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}PatientNs...");
#endif
    [[self patientNs] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}PatientNs...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}PatientNs."];
    }
  }
  if ([self documentId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DocumentId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DocumentId...");
#endif
    [[self documentId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DocumentId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DocumentId."];
    }
  }
  if ([self documentNS]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "DocumentNS", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}DocumentNS."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}DocumentNS...");
#endif
    [[self documentNS] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}DocumentNS...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}DocumentNS."];
    }
  }
  if ([self electronicAlerts]) {
    __enumerator = [[self electronicAlerts] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ElectronicAlerts", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}ElectronicAlerts."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}ElectronicAlerts...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}ElectronicAlerts...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}ElectronicAlerts."];
      }
    } //end item iterator.
  }
  if ([self scannedAlerts]) {
    __enumerator = [[self scannedAlerts] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ScannedAlerts", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}ScannedAlerts."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}ScannedAlerts...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}ScannedAlerts...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}ScannedAlerts."];
      }
    } //end item iterator.
  }
}
@end /* implementation PATIENTFOLDERAPINS0AlertDTO (JAXB) */

#endif /* DEF_PATIENTFOLDERAPINS0AlertDTO_M */
