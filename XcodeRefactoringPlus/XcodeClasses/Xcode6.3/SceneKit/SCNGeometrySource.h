//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNGeometrySource : NSObject <NSSecureCoding>
{
    id _reserved;
    struct __C3DMeshSource *_meshSource;
    NSData *_data;
    NSString *_semantic;
    long long _vectorCount;
    BOOL _floatComponents;
    long long _componentsPerVector;
    long long _bytesPerComponent;
    long long _dataOffset;
    long long _dataStride;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)geometrySourceWithTextureCoordinates:(const struct CGPoint *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithNormals:(const struct SCNVector3 *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithVertices:(const struct SCNVector3 *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
+ (id)dataWithPointArray:(const struct CGPoint *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;
+ (id)dataWithVector3Array:(const struct SCNVector3 *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DMeshSource *)meshSource;
- (short)baseTypeForDataFormat;
@property(readonly, nonatomic) long long dataStride;
@property(readonly, nonatomic) long long dataOffset;
@property(readonly, nonatomic) long long bytesPerComponent;
@property(readonly, nonatomic) long long componentsPerVector;
@property(readonly, nonatomic) BOOL floatComponents;
@property(readonly, nonatomic) long long vectorCount;
@property(readonly, nonatomic) NSString *semantic;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithMeshSource:(struct __C3DMeshSource *)arg1;

@end