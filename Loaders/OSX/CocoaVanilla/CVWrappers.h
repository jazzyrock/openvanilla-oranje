// CVWrappers.h

#ifndef __CVWrappers_h
#define __CVWrappers_h

#include <Cocoa/Cocoa.h>
#include <OpenVanilla/OpenVanilla.h>

@interface CVModuleWrapper : NSObject
{
    OVModule *mod;
    NSString *loadedpath;
    BOOL inited;
    BOOL canuse;
}
- (void)dealloc;
- (id)initWithModule:(OVModule*)m loadedPath:(NSString*)p;
- (NSString*)description;
- (NSString*)moduleType;
- (NSString*)identifier;
- (OVModule*)module;
- (BOOL)usable;
- (BOOL)initializeWithConfig:(OVDictionary*)cfg service:(OVService*)s;
@end

@interface CVContextWrapper : NSObject
{
    OVInputMethodContext *cntx;
}
-(id)initWithContext:(OVInputMethodContext*)c;
-(void)dealloc;
-(OVInputMethodContext*)context;
@end

#endif