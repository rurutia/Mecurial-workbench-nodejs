#import "enunciate-common.h"

@class PATIENTFOLDERAPINS0ActivityFeedDTO;
@class PATIENTFOLDERAPINS0Status;
@class PATIENTFOLDERAPINS0AtomicDTO;
@class PATIENTFOLDERAPINS0DocTypeSpecificDTO;
@class PATIENTFOLDERAPINS0EntryDTO;
@class PATIENTFOLDERAPINS0ExtIdDTO;
@class PATIENTFOLDERAPINS0ListDTO;
@class PATIENTFOLDERAPINS0OrderDTO;
@class PATIENTFOLDERAPINS0PatientDTO;
@class PATIENTFOLDERAPINS0PatientInfoFieldDTO;
@class PATIENTFOLDERAPINS0RequestDTO;
@class PATIENTFOLDERAPINS0SectionDTO;
@class PATIENTFOLDERAPINS0ResultDataDTO;
@class PATIENTFOLDERAPINS0ReportDTO;
@class PATIENTFOLDERAPINS0PatientComponentDTO;
@class PATIENTFOLDERAPINS0ImageDTO;
@class PATIENTFOLDERAPINS0CopiesToDTO;
@class PATIENTFOLDERAPINS0ItemIdent;
@class PATIENTFOLDERAPINS0UnitListItemDTO;
@class PATIENTFOLDERAPINS0WardListItemDTO;
@class PATIENTFOLDERAPINS0PatientListItemDTO;
@class PATIENTFOLDERAPINS0PaginatedListDTO;
@class PATIENTFOLDERAPINS0DocumentDTO;
@class PATIENTFOLDERAPINS0EpisodeDTO;
@class PATIENTFOLDERAPINS0ClinicListItemDTO;
@class PATIENTFOLDERAPINS0AlertItemDTO;
@class PATIENTFOLDERAPINS0AlertDTO;

#ifndef DEF_PATIENTFOLDERAPINS0ActivityFeedDTO_H
#define DEF_PATIENTFOLDERAPINS0ActivityFeedDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0ActivityFeedDTO : NSObject <EnunciateXML>
{
  @private
    NSString *_src;
    NSString *_urno;
    NSString *_patientNs;
    PATIENTFOLDERAPINS0ListDTO *_electronicAlerts;
    PATIENTFOLDERAPINS0ListDTO *_scannedAlerts;
    PATIENTFOLDERAPINS0ListDTO *_documents;
    PATIENTFOLDERAPINS0ListDTO *_results;
    PATIENTFOLDERAPINS0ListDTO *_episodes;
}

/**
 * (no documentation provided)
 */
- (NSString *) src;

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc;

/**
 * (no documentation provided)
 */
- (NSString *) urno;

/**
 * (no documentation provided)
 */
- (void) setUrno: (NSString *) newUrno;

/**
 * (no documentation provided)
 */
- (NSString *) patientNs;

/**
 * (no documentation provided)
 */
- (void) setPatientNs: (NSString *) newPatientNs;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ListDTO *) electronicAlerts;

/**
 * (no documentation provided)
 */
- (void) setElectronicAlerts: (PATIENTFOLDERAPINS0ListDTO *) newElectronicAlerts;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ListDTO *) scannedAlerts;

/**
 * (no documentation provided)
 */
- (void) setScannedAlerts: (PATIENTFOLDERAPINS0ListDTO *) newScannedAlerts;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ListDTO *) documents;

/**
 * (no documentation provided)
 */
- (void) setDocuments: (PATIENTFOLDERAPINS0ListDTO *) newDocuments;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ListDTO *) results;

/**
 * (no documentation provided)
 */
- (void) setResults: (PATIENTFOLDERAPINS0ListDTO *) newResults;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ListDTO *) episodes;

/**
 * (no documentation provided)
 */
- (void) setEpisodes: (PATIENTFOLDERAPINS0ListDTO *) newEpisodes;
@end /* interface PATIENTFOLDERAPINS0ActivityFeedDTO */

#endif /* DEF_PATIENTFOLDERAPINS0ActivityFeedDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0Status_H
#define DEF_PATIENTFOLDERAPINS0Status_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0Status : NSObject
{
  @private
    NSString *_identifier;
    NSString *_text;
    PATIENTFOLDERAPINS0ItemIdent *_orderControl;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (NSString *) text;

/**
 * (no documentation provided)
 */
- (void) setText: (NSString *) newText;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ItemIdent *) orderControl;

/**
 * (no documentation provided)
 */
- (void) setOrderControl: (PATIENTFOLDERAPINS0ItemIdent *) newOrderControl;
@end /* interface PATIENTFOLDERAPINS0Status */

#endif /* DEF_PATIENTFOLDERAPINS0Status_H */
#ifndef DEF_PATIENTFOLDERAPINS0AtomicDTO_H
#define DEF_PATIENTFOLDERAPINS0AtomicDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0AtomicDTO : NSObject <EnunciateXML>
{
  @private
    NSString *_valueTypeID;
    NSString *_valueTypeText;
    NSString *_value;
    NSString *_units;
    NSString *_referenceRange;
    NSString *_abnormalFLagText;
    NSString *_natureOfAbnormalTest;
    NSString *_statusText;
}

/**
 * (no documentation provided)
 */
- (NSString *) valueTypeID;

/**
 * (no documentation provided)
 */
- (void) setValueTypeID: (NSString *) newValueTypeID;

/**
 * (no documentation provided)
 */
- (NSString *) valueTypeText;

/**
 * (no documentation provided)
 */
- (void) setValueTypeText: (NSString *) newValueTypeText;

/**
 * (no documentation provided)
 */
- (NSString *) value;

/**
 * (no documentation provided)
 */
- (void) setValue: (NSString *) newValue;

/**
 * (no documentation provided)
 */
- (NSString *) units;

/**
 * (no documentation provided)
 */
- (void) setUnits: (NSString *) newUnits;

/**
 * (no documentation provided)
 */
- (NSString *) referenceRange;

/**
 * (no documentation provided)
 */
- (void) setReferenceRange: (NSString *) newReferenceRange;

/**
 * (no documentation provided)
 */
- (NSString *) abnormalFLagText;

/**
 * (no documentation provided)
 */
- (void) setAbnormalFLagText: (NSString *) newAbnormalFLagText;

/**
 * (no documentation provided)
 */
- (NSString *) natureOfAbnormalTest;

/**
 * (no documentation provided)
 */
- (void) setNatureOfAbnormalTest: (NSString *) newNatureOfAbnormalTest;

/**
 * (no documentation provided)
 */
- (NSString *) statusText;

/**
 * (no documentation provided)
 */
- (void) setStatusText: (NSString *) newStatusText;
@end /* interface PATIENTFOLDERAPINS0AtomicDTO */

#endif /* DEF_PATIENTFOLDERAPINS0AtomicDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0DocTypeSpecificDTO_H
#define DEF_PATIENTFOLDERAPINS0DocTypeSpecificDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0DocTypeSpecificDTO : NSObject
{
  @private
}
@end /* interface PATIENTFOLDERAPINS0DocTypeSpecificDTO */

#endif /* DEF_PATIENTFOLDERAPINS0DocTypeSpecificDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0EntryDTO_H
#define DEF_PATIENTFOLDERAPINS0EntryDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0EntryDTO : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    NSString *_label;
}

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) label;

/**
 * (no documentation provided)
 */
- (void) setLabel: (NSString *) newLabel;
@end /* interface PATIENTFOLDERAPINS0EntryDTO */

#endif /* DEF_PATIENTFOLDERAPINS0EntryDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0ExtIdDTO_H
#define DEF_PATIENTFOLDERAPINS0ExtIdDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0ExtIdDTO : NSObject <EnunciateXML>
{
  @private
    NSString *_extIdVal;
    NSString *_extNsVal;
}

/**
 * (no documentation provided)
 */
- (NSString *) extIdVal;

/**
 * (no documentation provided)
 */
- (void) setExtIdVal: (NSString *) newExtIdVal;

/**
 * (no documentation provided)
 */
- (NSString *) extNsVal;

/**
 * (no documentation provided)
 */
- (void) setExtNsVal: (NSString *) newExtNsVal;
@end /* interface PATIENTFOLDERAPINS0ExtIdDTO */

#endif /* DEF_PATIENTFOLDERAPINS0ExtIdDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0ListDTO_H
#define DEF_PATIENTFOLDERAPINS0ListDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0ListDTO : NSObject <EnunciateXML>
{
  @private
    NSArray *_results;
    int _total;
}

/**
 * (no documentation provided)
 */
- (NSArray *) results;

/**
 * (no documentation provided)
 */
- (void) setResults: (NSArray *) newResults;

/**
 * (no documentation provided)
 */
- (int) total;

/**
 * (no documentation provided)
 */
- (void) setTotal: (int) newTotal;
@end /* interface PATIENTFOLDERAPINS0ListDTO */

#endif /* DEF_PATIENTFOLDERAPINS0ListDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0OrderDTO_H
#define DEF_PATIENTFOLDERAPINS0OrderDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0OrderDTO : NSObject <EnunciateXML>
{
  @private
    NSString *_identifier;
    PATIENTFOLDERAPINS0Status *_status;
    NSString *_enteringUser;
    NSString *_actionedUser;
    NSString *_organisation;
    NSString *_doctor;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0Status *) status;

/**
 * (no documentation provided)
 */
- (void) setStatus: (PATIENTFOLDERAPINS0Status *) newStatus;

/**
 * (no documentation provided)
 */
- (NSString *) enteringUser;

/**
 * (no documentation provided)
 */
- (void) setEnteringUser: (NSString *) newEnteringUser;

/**
 * (no documentation provided)
 */
- (NSString *) actionedUser;

/**
 * (no documentation provided)
 */
- (void) setActionedUser: (NSString *) newActionedUser;

/**
 * (no documentation provided)
 */
- (NSString *) organisation;

/**
 * (no documentation provided)
 */
- (void) setOrganisation: (NSString *) newOrganisation;

/**
 * (no documentation provided)
 */
- (NSString *) doctor;

/**
 * (no documentation provided)
 */
- (void) setDoctor: (NSString *) newDoctor;
@end /* interface PATIENTFOLDERAPINS0OrderDTO */

#endif /* DEF_PATIENTFOLDERAPINS0OrderDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0PatientDTO_H
#define DEF_PATIENTFOLDERAPINS0PatientDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0PatientDTO : NSObject <EnunciateXML>
{
  @private
    NSString *_src;
    NSArray *_extIds;
    NSString *_patientMasterId;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_otherNames;
    NSString *_dob;
    NSString *_dod;
    NSString *_sex;
    NSString *_addr1;
    NSString *_addr2;
    NSString *_city;
    NSString *_postcode;
    NSArray *_infoFields;
}

/**
 * (no documentation provided)
 */
- (NSString *) src;

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc;

/**
 * (no documentation provided)
 */
- (NSArray *) extIds;

/**
 * (no documentation provided)
 */
- (void) setExtIds: (NSArray *) newExtIds;

/**
 * (no documentation provided)
 */
- (NSString *) patientMasterId;

/**
 * (no documentation provided)
 */
- (void) setPatientMasterId: (NSString *) newPatientMasterId;

/**
 * (no documentation provided)
 */
- (NSString *) firstName;

/**
 * (no documentation provided)
 */
- (void) setFirstName: (NSString *) newFirstName;

/**
 * (no documentation provided)
 */
- (NSString *) lastName;

/**
 * (no documentation provided)
 */
- (void) setLastName: (NSString *) newLastName;

/**
 * (no documentation provided)
 */
- (NSString *) otherNames;

/**
 * (no documentation provided)
 */
- (void) setOtherNames: (NSString *) newOtherNames;

/**
 * (no documentation provided)
 */
- (NSString *) dob;

/**
 * (no documentation provided)
 */
- (void) setDob: (NSString *) newDob;

/**
 * (no documentation provided)
 */
- (NSString *) dod;

/**
 * (no documentation provided)
 */
- (void) setDod: (NSString *) newDod;

/**
 * (no documentation provided)
 */
- (NSString *) sex;

/**
 * (no documentation provided)
 */
- (void) setSex: (NSString *) newSex;

/**
 * (no documentation provided)
 */
- (NSString *) addr1;

/**
 * (no documentation provided)
 */
- (void) setAddr1: (NSString *) newAddr1;

/**
 * (no documentation provided)
 */
- (NSString *) addr2;

/**
 * (no documentation provided)
 */
- (void) setAddr2: (NSString *) newAddr2;

/**
 * (no documentation provided)
 */
- (NSString *) city;

/**
 * (no documentation provided)
 */
- (void) setCity: (NSString *) newCity;

/**
 * (no documentation provided)
 */
- (NSString *) postcode;

/**
 * (no documentation provided)
 */
- (void) setPostcode: (NSString *) newPostcode;

/**
 * (no documentation provided)
 */
- (NSArray *) infoFields;

/**
 * (no documentation provided)
 */
- (void) setInfoFields: (NSArray *) newInfoFields;
@end /* interface PATIENTFOLDERAPINS0PatientDTO */

#endif /* DEF_PATIENTFOLDERAPINS0PatientDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0PatientInfoFieldDTO_H
#define DEF_PATIENTFOLDERAPINS0PatientInfoFieldDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0PatientInfoFieldDTO : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    NSString *_value;
}

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) value;

/**
 * (no documentation provided)
 */
- (void) setValue: (NSString *) newValue;
@end /* interface PATIENTFOLDERAPINS0PatientInfoFieldDTO */

#endif /* DEF_PATIENTFOLDERAPINS0PatientInfoFieldDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0RequestDTO_H
#define DEF_PATIENTFOLDERAPINS0RequestDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0RequestDTO : NSObject
{
  @private
    NSString *_requestId;
    NSString *_requestType;
    NSString *_serviceDesc;
    NSString *_requestStatus;
    NSString *_requestDate;
    NSString *_obsStart;
    NSString *_obsStop;
    NSString *_specimenRec;
    NSString *_clinicalInformation;
}

/**
 * (no documentation provided)
 */
- (NSString *) requestId;

/**
 * (no documentation provided)
 */
- (void) setRequestId: (NSString *) newRequestId;

/**
 * (no documentation provided)
 */
- (NSString *) requestType;

/**
 * (no documentation provided)
 */
- (void) setRequestType: (NSString *) newRequestType;

/**
 * (no documentation provided)
 */
- (NSString *) serviceDesc;

/**
 * (no documentation provided)
 */
- (void) setServiceDesc: (NSString *) newServiceDesc;

/**
 * (no documentation provided)
 */
- (NSString *) requestStatus;

/**
 * (no documentation provided)
 */
- (void) setRequestStatus: (NSString *) newRequestStatus;

/**
 * (no documentation provided)
 */
- (NSString *) requestDate;

/**
 * (no documentation provided)
 */
- (void) setRequestDate: (NSString *) newRequestDate;

/**
 * (no documentation provided)
 */
- (NSString *) obsStart;

/**
 * (no documentation provided)
 */
- (void) setObsStart: (NSString *) newObsStart;

/**
 * (no documentation provided)
 */
- (NSString *) obsStop;

/**
 * (no documentation provided)
 */
- (void) setObsStop: (NSString *) newObsStop;

/**
 * (no documentation provided)
 */
- (NSString *) specimenRec;

/**
 * (no documentation provided)
 */
- (void) setSpecimenRec: (NSString *) newSpecimenRec;

/**
 * (no documentation provided)
 */
- (NSString *) clinicalInformation;

/**
 * (no documentation provided)
 */
- (void) setClinicalInformation: (NSString *) newClinicalInformation;
@end /* interface PATIENTFOLDERAPINS0RequestDTO */

#endif /* DEF_PATIENTFOLDERAPINS0RequestDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0SectionDTO_H
#define DEF_PATIENTFOLDERAPINS0SectionDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0SectionDTO : NSObject <EnunciateXML>
{
  @private
    NSString *_src;
    NSString *_identifier;
    NSString *_name;
    BOOL _episodal;
    BOOL _diagnostic;
    NSString *_episodeType;
    NSString *_rgbColor;
    int _docCount;
    int _episodeCount;
    NSDate *_lastModifiedTimestamp;
}

/**
 * (no documentation provided)
 */
- (NSString *) src;

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc;

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (BOOL) episodal;

/**
 * (no documentation provided)
 */
- (void) setEpisodal: (BOOL) newEpisodal;

/**
 * (no documentation provided)
 */
- (BOOL) diagnostic;

/**
 * (no documentation provided)
 */
- (void) setDiagnostic: (BOOL) newDiagnostic;

/**
 * (no documentation provided)
 */
- (NSString *) episodeType;

/**
 * (no documentation provided)
 */
- (void) setEpisodeType: (NSString *) newEpisodeType;

/**
 * (no documentation provided)
 */
- (NSString *) rgbColor;

/**
 * (no documentation provided)
 */
- (void) setRgbColor: (NSString *) newRgbColor;

/**
 * (no documentation provided)
 */
- (int) docCount;

/**
 * (no documentation provided)
 */
- (void) setDocCount: (int) newDocCount;

/**
 * (no documentation provided)
 */
- (int) episodeCount;

/**
 * (no documentation provided)
 */
- (void) setEpisodeCount: (int) newEpisodeCount;

/**
 * (no documentation provided)
 */
- (NSDate *) lastModifiedTimestamp;

/**
 * (no documentation provided)
 */
- (void) setLastModifiedTimestamp: (NSDate *) newLastModifiedTimestamp;
@end /* interface PATIENTFOLDERAPINS0SectionDTO */

#endif /* DEF_PATIENTFOLDERAPINS0SectionDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0ResultDataDTO_H
#define DEF_PATIENTFOLDERAPINS0ResultDataDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0ResultDataDTO : NSObject <EnunciateXML>
{
  @private
    NSArray *_report;
    NSArray *_atomic;
    PATIENTFOLDERAPINS0OrderDTO *_order;
    PATIENTFOLDERAPINS0RequestDTO *_request;
    PATIENTFOLDERAPINS0CopiesToDTO *_copiesTo;
    PATIENTFOLDERAPINS0ImageDTO *_image;
}

/**
 * (no documentation provided)
 */
- (NSArray *) report;

/**
 * (no documentation provided)
 */
- (void) setReport: (NSArray *) newReport;

/**
 * (no documentation provided)
 */
- (NSArray *) atomic;

/**
 * (no documentation provided)
 */
- (void) setAtomic: (NSArray *) newAtomic;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0OrderDTO *) order;

/**
 * (no documentation provided)
 */
- (void) setOrder: (PATIENTFOLDERAPINS0OrderDTO *) newOrder;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0RequestDTO *) request;

/**
 * (no documentation provided)
 */
- (void) setRequest: (PATIENTFOLDERAPINS0RequestDTO *) newRequest;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0CopiesToDTO *) copiesTo;

/**
 * (no documentation provided)
 */
- (void) setCopiesTo: (PATIENTFOLDERAPINS0CopiesToDTO *) newCopiesTo;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0ImageDTO *) image;

/**
 * (no documentation provided)
 */
- (void) setImage: (PATIENTFOLDERAPINS0ImageDTO *) newImage;
@end /* interface PATIENTFOLDERAPINS0ResultDataDTO */

#endif /* DEF_PATIENTFOLDERAPINS0ResultDataDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0ReportDTO_H
#define DEF_PATIENTFOLDERAPINS0ReportDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0ReportDTO : NSObject <EnunciateXML>
{
  @private
    NSString *_text;
}

/**
 * (no documentation provided)
 */
- (NSString *) text;

/**
 * (no documentation provided)
 */
- (void) setText: (NSString *) newText;
@end /* interface PATIENTFOLDERAPINS0ReportDTO */

#endif /* DEF_PATIENTFOLDERAPINS0ReportDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0PatientComponentDTO_H
#define DEF_PATIENTFOLDERAPINS0PatientComponentDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0PatientComponentDTO : NSObject
{
  @private
    NSString *_patientIdNs;
    NSString *_patientSrc;
    NSString *_up;
}

/**
 * (no documentation provided)
 */
- (NSString *) patientIdNs;

/**
 * (no documentation provided)
 */
- (void) setPatientIdNs: (NSString *) newPatientIdNs;

/**
 * (no documentation provided)
 */
- (NSString *) patientSrc;

/**
 * (no documentation provided)
 */
- (void) setPatientSrc: (NSString *) newPatientSrc;

/**
 * (no documentation provided)
 */
- (NSString *) up;

/**
 * (no documentation provided)
 */
- (void) setUp: (NSString *) newUp;
@end /* interface PATIENTFOLDERAPINS0PatientComponentDTO */

#endif /* DEF_PATIENTFOLDERAPINS0PatientComponentDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0ImageDTO_H
#define DEF_PATIENTFOLDERAPINS0ImageDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0ImageDTO : NSObject <EnunciateXML>
{
  @private
    NSData *_data;
    NSString *_ext;
}

/**
 * (no documentation provided)
 */
- (NSData *) data;

/**
 * (no documentation provided)
 */
- (void) setData: (NSData *) newData;

/**
 * (no documentation provided)
 */
- (NSString *) ext;

/**
 * (no documentation provided)
 */
- (void) setExt: (NSString *) newExt;
@end /* interface PATIENTFOLDERAPINS0ImageDTO */

#endif /* DEF_PATIENTFOLDERAPINS0ImageDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0CopiesToDTO_H
#define DEF_PATIENTFOLDERAPINS0CopiesToDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0CopiesToDTO : NSObject
{
  @private
    NSArray *_doctor;
}

/**
 * (no documentation provided)
 */
- (NSArray *) doctor;

/**
 * (no documentation provided)
 */
- (void) setDoctor: (NSArray *) newDoctor;
@end /* interface PATIENTFOLDERAPINS0CopiesToDTO */

#endif /* DEF_PATIENTFOLDERAPINS0CopiesToDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0ItemIdent_H
#define DEF_PATIENTFOLDERAPINS0ItemIdent_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0ItemIdent : NSObject
{
  @private
    NSString *_identifier;
    NSString *_text;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (NSString *) text;

/**
 * (no documentation provided)
 */
- (void) setText: (NSString *) newText;
@end /* interface PATIENTFOLDERAPINS0ItemIdent */

#endif /* DEF_PATIENTFOLDERAPINS0ItemIdent_H */
#ifndef DEF_PATIENTFOLDERAPINS0UnitListItemDTO_H
#define DEF_PATIENTFOLDERAPINS0UnitListItemDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0UnitListItemDTO : PATIENTFOLDERAPINS0PatientComponentDTO <EnunciateXML>
{
  @private
    NSString *_domain;
    NSString *_campus;
    NSString *_code;
    NSString *_listId;
    NSString *_description;
}

/**
 * (no documentation provided)
 */
- (NSString *) domain;

/**
 * (no documentation provided)
 */
- (void) setDomain: (NSString *) newDomain;

/**
 * (no documentation provided)
 */
- (NSString *) campus;

/**
 * (no documentation provided)
 */
- (void) setCampus: (NSString *) newCampus;

/**
 * (no documentation provided)
 */
- (NSString *) code;

/**
 * (no documentation provided)
 */
- (void) setCode: (NSString *) newCode;

/**
 * (no documentation provided)
 */
- (NSString *) listId;

/**
 * (no documentation provided)
 */
- (void) setListId: (NSString *) newListId;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;
@end /* interface PATIENTFOLDERAPINS0UnitListItemDTO */

#endif /* DEF_PATIENTFOLDERAPINS0UnitListItemDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0WardListItemDTO_H
#define DEF_PATIENTFOLDERAPINS0WardListItemDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0WardListItemDTO : PATIENTFOLDERAPINS0PatientComponentDTO <EnunciateXML>
{
  @private
    NSString *_domain;
    NSString *_campus;
    NSString *_code;
    NSString *_listId;
    NSString *_description;
}

/**
 * (no documentation provided)
 */
- (NSString *) domain;

/**
 * (no documentation provided)
 */
- (void) setDomain: (NSString *) newDomain;

/**
 * (no documentation provided)
 */
- (NSString *) campus;

/**
 * (no documentation provided)
 */
- (void) setCampus: (NSString *) newCampus;

/**
 * (no documentation provided)
 */
- (NSString *) code;

/**
 * (no documentation provided)
 */
- (void) setCode: (NSString *) newCode;

/**
 * (no documentation provided)
 */
- (NSString *) listId;

/**
 * (no documentation provided)
 */
- (void) setListId: (NSString *) newListId;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;
@end /* interface PATIENTFOLDERAPINS0WardListItemDTO */

#endif /* DEF_PATIENTFOLDERAPINS0WardListItemDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0PatientListItemDTO_H
#define DEF_PATIENTFOLDERAPINS0PatientListItemDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0PatientListItemDTO : PATIENTFOLDERAPINS0PatientComponentDTO <EnunciateXML>
{
  @private
    NSString *_listId;
    NSString *_description;
    BOOL _isEpisodic;
}

/**
 * (no documentation provided)
 */
- (NSString *) listId;

/**
 * (no documentation provided)
 */
- (void) setListId: (NSString *) newListId;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;

/**
 * (no documentation provided)
 */
- (BOOL) isEpisodic;

/**
 * (no documentation provided)
 */
- (void) setIsEpisodic: (BOOL) newIsEpisodic;
@end /* interface PATIENTFOLDERAPINS0PatientListItemDTO */

#endif /* DEF_PATIENTFOLDERAPINS0PatientListItemDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0PaginatedListDTO_H
#define DEF_PATIENTFOLDERAPINS0PaginatedListDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0PaginatedListDTO : PATIENTFOLDERAPINS0ListDTO <EnunciateXML>
{
  @private
    int _start;
    int _size;
    NSString *_sort;
    NSString *_order;
}

/**
 * (no documentation provided)
 */
- (int) start;

/**
 * (no documentation provided)
 */
- (void) setStart: (int) newStart;

/**
 * (no documentation provided)
 */
- (int) size;

/**
 * (no documentation provided)
 */
- (void) setSize: (int) newSize;

/**
 * (no documentation provided)
 */
- (NSString *) sort;

/**
 * (no documentation provided)
 */
- (void) setSort: (NSString *) newSort;

/**
 * (no documentation provided)
 */
- (NSString *) order;

/**
 * (no documentation provided)
 */
- (void) setOrder: (NSString *) newOrder;
@end /* interface PATIENTFOLDERAPINS0PaginatedListDTO */

#endif /* DEF_PATIENTFOLDERAPINS0PaginatedListDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0DocumentDTO_H
#define DEF_PATIENTFOLDERAPINS0DocumentDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0DocumentDTO : PATIENTFOLDERAPINS0PatientComponentDTO <EnunciateXML>
{
  @private
    NSString *_src;
    NSString *_masterID;
    NSString *_documentCode;
    NSString *_documentDesc;
    NSString *_section;
    NSString *_episode;
    NSString *_mimeType;
    NSString *_documentDate;
    NSString *_pageNumber;
    NSString *_state;
    NSString *_urno;
    NSString *_patientNs;
    NSString *_documentSource;
    NSString *_documentTime;
    NSString *_scannedDate;
    NSString *_documentType;
    NSString *_url;
    PATIENTFOLDERAPINS0DocTypeSpecificDTO *_docTypeSpecific;
}

/**
 * (no documentation provided)
 */
- (NSString *) src;

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc;

/**
 * (no documentation provided)
 */
- (NSString *) masterID;

/**
 * (no documentation provided)
 */
- (void) setMasterID: (NSString *) newMasterID;

/**
 * (no documentation provided)
 */
- (NSString *) documentCode;

/**
 * (no documentation provided)
 */
- (void) setDocumentCode: (NSString *) newDocumentCode;

/**
 * (no documentation provided)
 */
- (NSString *) documentDesc;

/**
 * (no documentation provided)
 */
- (void) setDocumentDesc: (NSString *) newDocumentDesc;

/**
 * (no documentation provided)
 */
- (NSString *) section;

/**
 * (no documentation provided)
 */
- (void) setSection: (NSString *) newSection;

/**
 * (no documentation provided)
 */
- (NSString *) episode;

/**
 * (no documentation provided)
 */
- (void) setEpisode: (NSString *) newEpisode;

/**
 * (no documentation provided)
 */
- (NSString *) mimeType;

/**
 * (no documentation provided)
 */
- (void) setMimeType: (NSString *) newMimeType;

/**
 * (no documentation provided)
 */
- (NSString *) documentDate;

/**
 * (no documentation provided)
 */
- (void) setDocumentDate: (NSString *) newDocumentDate;

/**
 * (no documentation provided)
 */
- (NSString *) pageNumber;

/**
 * (no documentation provided)
 */
- (void) setPageNumber: (NSString *) newPageNumber;

/**
 * (no documentation provided)
 */
- (NSString *) state;

/**
 * (no documentation provided)
 */
- (void) setState: (NSString *) newState;

/**
 * (no documentation provided)
 */
- (NSString *) urno;

/**
 * (no documentation provided)
 */
- (void) setUrno: (NSString *) newUrno;

/**
 * (no documentation provided)
 */
- (NSString *) patientNs;

/**
 * (no documentation provided)
 */
- (void) setPatientNs: (NSString *) newPatientNs;

/**
 * (no documentation provided)
 */
- (NSString *) documentSource;

/**
 * (no documentation provided)
 */
- (void) setDocumentSource: (NSString *) newDocumentSource;

/**
 * (no documentation provided)
 */
- (NSString *) documentTime;

/**
 * (no documentation provided)
 */
- (void) setDocumentTime: (NSString *) newDocumentTime;

/**
 * (no documentation provided)
 */
- (NSString *) scannedDate;

/**
 * (no documentation provided)
 */
- (void) setScannedDate: (NSString *) newScannedDate;

/**
 * (no documentation provided)
 */
- (NSString *) documentType;

/**
 * (no documentation provided)
 */
- (void) setDocumentType: (NSString *) newDocumentType;

/**
 * (no documentation provided)
 */
- (NSString *) url;

/**
 * (no documentation provided)
 */
- (void) setUrl: (NSString *) newUrl;

/**
 * (no documentation provided)
 */
- (PATIENTFOLDERAPINS0DocTypeSpecificDTO *) docTypeSpecific;

/**
 * (no documentation provided)
 */
- (void) setDocTypeSpecific: (PATIENTFOLDERAPINS0DocTypeSpecificDTO *) newDocTypeSpecific;
@end /* interface PATIENTFOLDERAPINS0DocumentDTO */

#endif /* DEF_PATIENTFOLDERAPINS0DocumentDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0EpisodeDTO_H
#define DEF_PATIENTFOLDERAPINS0EpisodeDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0EpisodeDTO : PATIENTFOLDERAPINS0PatientComponentDTO <EnunciateXML>
{
  @private
    NSString *_src;
    NSString *_intId;
    NSString *_extId;
    NSString *_extNS;
    NSString *_patientURNO;
    NSString *_ward_code;
    NSString *_service_type;
    NSString *_care_type;
    NSString *_episodeId;
    NSString *_episodeNs;
    NSString *_type;
    NSString *_state;
    NSString *_start;
    NSString *_end;
    NSString *_campus;
    NSString *_wardCode;
    NSString *_wardDescription;
    NSString *_unitCode;
    NSString *_unitDescription;
    NSString *_bedCode;
    NSString *_bedDescription;
    NSString *_serviceType;
    NSString *_careType;
    NSString *_doctorId;
    NSString *_doctorFamily;
    NSString *_doctorGiven;
    NSString *_drg;
    NSString *_los;
    NSString *_noOfDocuments;
    NSString *_startDate;
    NSString *_endDate;
    NSString *_financialClass;
}

/**
 * (no documentation provided)
 */
- (NSString *) src;

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc;

/**
 * (no documentation provided)
 */
- (NSString *) intId;

/**
 * (no documentation provided)
 */
- (void) setIntId: (NSString *) newIntId;

/**
 * (no documentation provided)
 */
- (NSString *) extId;

/**
 * (no documentation provided)
 */
- (void) setExtId: (NSString *) newExtId;

/**
 * (no documentation provided)
 */
- (NSString *) extNS;

/**
 * (no documentation provided)
 */
- (void) setExtNS: (NSString *) newExtNS;

/**
 * (no documentation provided)
 */
- (NSString *) patientURNO;

/**
 * (no documentation provided)
 */
- (void) setPatientURNO: (NSString *) newPatientURNO;

/**
 * (no documentation provided)
 */
- (NSString *) ward_code;

/**
 * (no documentation provided)
 */
- (void) setWard_code: (NSString *) newWard_code;

/**
 * (no documentation provided)
 */
- (NSString *) service_type;

/**
 * (no documentation provided)
 */
- (void) setService_type: (NSString *) newService_type;

/**
 * (no documentation provided)
 */
- (NSString *) care_type;

/**
 * (no documentation provided)
 */
- (void) setCare_type: (NSString *) newCare_type;

/**
 * (no documentation provided)
 */
- (NSString *) episodeId;

/**
 * (no documentation provided)
 */
- (void) setEpisodeId: (NSString *) newEpisodeId;

/**
 * (no documentation provided)
 */
- (NSString *) episodeNs;

/**
 * (no documentation provided)
 */
- (void) setEpisodeNs: (NSString *) newEpisodeNs;

/**
 * (no documentation provided)
 */
- (NSString *) type;

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType;

/**
 * (no documentation provided)
 */
- (NSString *) state;

/**
 * (no documentation provided)
 */
- (void) setState: (NSString *) newState;

/**
 * (no documentation provided)
 */
- (NSString *) start;

/**
 * (no documentation provided)
 */
- (void) setStart: (NSString *) newStart;

/**
 * (no documentation provided)
 */
- (NSString *) end;

/**
 * (no documentation provided)
 */
- (void) setEnd: (NSString *) newEnd;

/**
 * (no documentation provided)
 */
- (NSString *) campus;

/**
 * (no documentation provided)
 */
- (void) setCampus: (NSString *) newCampus;

/**
 * (no documentation provided)
 */
- (NSString *) wardCode;

/**
 * (no documentation provided)
 */
- (void) setWardCode: (NSString *) newWardCode;

/**
 * (no documentation provided)
 */
- (NSString *) wardDescription;

/**
 * (no documentation provided)
 */
- (void) setWardDescription: (NSString *) newWardDescription;

/**
 * (no documentation provided)
 */
- (NSString *) unitCode;

/**
 * (no documentation provided)
 */
- (void) setUnitCode: (NSString *) newUnitCode;

/**
 * (no documentation provided)
 */
- (NSString *) unitDescription;

/**
 * (no documentation provided)
 */
- (void) setUnitDescription: (NSString *) newUnitDescription;

/**
 * (no documentation provided)
 */
- (NSString *) bedCode;

/**
 * (no documentation provided)
 */
- (void) setBedCode: (NSString *) newBedCode;

/**
 * (no documentation provided)
 */
- (NSString *) bedDescription;

/**
 * (no documentation provided)
 */
- (void) setBedDescription: (NSString *) newBedDescription;

/**
 * (no documentation provided)
 */
- (NSString *) serviceType;

/**
 * (no documentation provided)
 */
- (void) setServiceType: (NSString *) newServiceType;

/**
 * (no documentation provided)
 */
- (NSString *) careType;

/**
 * (no documentation provided)
 */
- (void) setCareType: (NSString *) newCareType;

/**
 * (no documentation provided)
 */
- (NSString *) doctorId;

/**
 * (no documentation provided)
 */
- (void) setDoctorId: (NSString *) newDoctorId;

/**
 * (no documentation provided)
 */
- (NSString *) doctorFamily;

/**
 * (no documentation provided)
 */
- (void) setDoctorFamily: (NSString *) newDoctorFamily;

/**
 * (no documentation provided)
 */
- (NSString *) doctorGiven;

/**
 * (no documentation provided)
 */
- (void) setDoctorGiven: (NSString *) newDoctorGiven;

/**
 * (no documentation provided)
 */
- (NSString *) drg;

/**
 * (no documentation provided)
 */
- (void) setDrg: (NSString *) newDrg;

/**
 * (no documentation provided)
 */
- (NSString *) los;

/**
 * (no documentation provided)
 */
- (void) setLos: (NSString *) newLos;

/**
 * (no documentation provided)
 */
- (NSString *) noOfDocuments;

/**
 * (no documentation provided)
 */
- (void) setNoOfDocuments: (NSString *) newNoOfDocuments;

/**
 * (no documentation provided)
 */
- (NSString *) startDate;

/**
 * (no documentation provided)
 */
- (void) setStartDate: (NSString *) newStartDate;

/**
 * (no documentation provided)
 */
- (NSString *) endDate;

/**
 * (no documentation provided)
 */
- (void) setEndDate: (NSString *) newEndDate;

/**
 * (no documentation provided)
 */
- (NSString *) financialClass;

/**
 * (no documentation provided)
 */
- (void) setFinancialClass: (NSString *) newFinancialClass;
@end /* interface PATIENTFOLDERAPINS0EpisodeDTO */

#endif /* DEF_PATIENTFOLDERAPINS0EpisodeDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0ClinicListItemDTO_H
#define DEF_PATIENTFOLDERAPINS0ClinicListItemDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0ClinicListItemDTO : PATIENTFOLDERAPINS0PatientComponentDTO <EnunciateXML>
{
  @private
    NSString *_domain;
    NSString *_campus;
    NSString *_code;
    NSString *_listId;
    NSString *_description;
}

/**
 * (no documentation provided)
 */
- (NSString *) domain;

/**
 * (no documentation provided)
 */
- (void) setDomain: (NSString *) newDomain;

/**
 * (no documentation provided)
 */
- (NSString *) campus;

/**
 * (no documentation provided)
 */
- (void) setCampus: (NSString *) newCampus;

/**
 * (no documentation provided)
 */
- (NSString *) code;

/**
 * (no documentation provided)
 */
- (void) setCode: (NSString *) newCode;

/**
 * (no documentation provided)
 */
- (NSString *) listId;

/**
 * (no documentation provided)
 */
- (void) setListId: (NSString *) newListId;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;
@end /* interface PATIENTFOLDERAPINS0ClinicListItemDTO */

#endif /* DEF_PATIENTFOLDERAPINS0ClinicListItemDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0AlertItemDTO_H
#define DEF_PATIENTFOLDERAPINS0AlertItemDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0AlertItemDTO : PATIENTFOLDERAPINS0PatientComponentDTO <EnunciateXML>
{
  @private
    NSString *_alertNs;
    NSString *_code;
    NSString *_description;
    NSString *_type;
    NSString *_comment;
    NSString *_identificationDate;
}

/**
 * (no documentation provided)
 */
- (NSString *) alertNs;

/**
 * (no documentation provided)
 */
- (void) setAlertNs: (NSString *) newAlertNs;

/**
 * (no documentation provided)
 */
- (NSString *) code;

/**
 * (no documentation provided)
 */
- (void) setCode: (NSString *) newCode;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;

/**
 * (no documentation provided)
 */
- (NSString *) type;

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType;

/**
 * (no documentation provided)
 */
- (NSString *) comment;

/**
 * (no documentation provided)
 */
- (void) setComment: (NSString *) newComment;

/**
 * (no documentation provided)
 */
- (NSString *) identificationDate;

/**
 * (no documentation provided)
 */
- (void) setIdentificationDate: (NSString *) newIdentificationDate;
@end /* interface PATIENTFOLDERAPINS0AlertItemDTO */

#endif /* DEF_PATIENTFOLDERAPINS0AlertItemDTO_H */
#ifndef DEF_PATIENTFOLDERAPINS0AlertDTO_H
#define DEF_PATIENTFOLDERAPINS0AlertDTO_H

/**
 * (no documentation provided)
 */
@interface PATIENTFOLDERAPINS0AlertDTO : PATIENTFOLDERAPINS0PatientComponentDTO <EnunciateXML>
{
  @private
    NSString *_src;
    NSString *_urno;
    NSString *_patientNs;
    NSString *_documentId;
    NSString *_documentNS;
    NSArray *_electronicAlerts;
    NSArray *_scannedAlerts;
}

/**
 * (no documentation provided)
 */
- (NSString *) src;

/**
 * (no documentation provided)
 */
- (void) setSrc: (NSString *) newSrc;

/**
 * (no documentation provided)
 */
- (NSString *) urno;

/**
 * (no documentation provided)
 */
- (void) setUrno: (NSString *) newUrno;

/**
 * (no documentation provided)
 */
- (NSString *) patientNs;

/**
 * (no documentation provided)
 */
- (void) setPatientNs: (NSString *) newPatientNs;

/**
 * (no documentation provided)
 */
- (NSString *) documentId;

/**
 * (no documentation provided)
 */
- (void) setDocumentId: (NSString *) newDocumentId;

/**
 * (no documentation provided)
 */
- (NSString *) documentNS;

/**
 * (no documentation provided)
 */
- (void) setDocumentNS: (NSString *) newDocumentNS;

/**
 * (no documentation provided)
 */
- (NSArray *) electronicAlerts;

/**
 * (no documentation provided)
 */
- (void) setElectronicAlerts: (NSArray *) newElectronicAlerts;

/**
 * (no documentation provided)
 */
- (NSArray *) scannedAlerts;

/**
 * (no documentation provided)
 */
- (void) setScannedAlerts: (NSArray *) newScannedAlerts;
@end /* interface PATIENTFOLDERAPINS0AlertDTO */

#endif /* DEF_PATIENTFOLDERAPINS0AlertDTO_H */
